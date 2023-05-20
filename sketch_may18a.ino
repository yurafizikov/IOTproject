void setup() {
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop() {
  digitalWrite(10, 1);
  digitalWrite(11, 1);
  delay(1200000);
  digitalWrite(10, 0);
  digitalWrite(10, 0);
  delay(1000);

  digitalWrite(8, 1);
  digitalWrite(9, 1);
  delay(360000);
  digitalWrite(8, 0);
  digitalWrite(9, 0);
  delay(1000);

   digitalWrite(10, 1);
  digitalWrite(11, 1);
  delay(900000);
  digitalWrite(10, 0);
  digitalWrite(10, 0);
  delay(1000);


}
