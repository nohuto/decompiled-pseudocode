/*
 * XREFs of ExRealTimeIsUniversal @ 0x14033B510
 * Callers:
 *     HalpUtcTimeToAcpiRealTime @ 0x140933218 (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     <none>
 */

bool ExRealTimeIsUniversal()
{
  return ExpRealTimeIsUniversal != 0;
}
