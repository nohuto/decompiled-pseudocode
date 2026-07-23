/*
 * XREFs of ExpLeapSecondDataRegistryNotifyHandler @ 0x1409F7EE0
 * Callers:
 *     <none>
 * Callees:
 *     ExpReadLeapSecondData @ 0x140853A14 (ExpReadLeapSecondData.c)
 */

void ExpLeapSecondDataRegistryNotifyHandler()
{
  ExpReadLeapSecondData((bool *)ExLeapSecondData, 1);
}
