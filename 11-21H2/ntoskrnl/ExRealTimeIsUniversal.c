/*
 * XREFs of ExRealTimeIsUniversal @ 0x14022D4B0
 * Callers:
 *     HalpUtcTimeToAcpiRealTime @ 0x1409082EC (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     <none>
 */

bool ExRealTimeIsUniversal()
{
  return ExpRealTimeIsUniversal != 0;
}
