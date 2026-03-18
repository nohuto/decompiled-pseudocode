/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x1409F7C50
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x140853714 (ExpReadLeapSecondData.c)
 */

void ExpLeapSecondDataRegistryNotifyHandler()
{
  ExpReadLeapSecondData((bool *)ExLeapSecondData, 1);
}
