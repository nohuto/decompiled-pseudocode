/*
 * XREFs of ExRealTimeIsUniversal @ 0x14033B280
 * Callers:
 *     HalpUtcTimeToAcpiRealTime @ 0x140933018 (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     <none>
 */

bool ExRealTimeIsUniversal()
{
  return ExpRealTimeIsUniversal != 0;
}
