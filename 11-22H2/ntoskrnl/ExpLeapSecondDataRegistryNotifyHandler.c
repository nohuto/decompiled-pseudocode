/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x1409F7D00
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x140854624 (ExpReadLeapSecondData.c)
 */

void ExpLeapSecondDataRegistryNotifyHandler()
{
  ExpReadLeapSecondData((bool *)ExLeapSecondData, 1);
}
