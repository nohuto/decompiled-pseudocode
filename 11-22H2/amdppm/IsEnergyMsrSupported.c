/*
 * XREFs of IsEnergyMsrSupported @ 0x1C0020058
 * Callers:
 *     InitEnergyCountersOnCurrentProcessor @ 0x1C001FF10 (InitEnergyCountersOnCurrentProcessor.c)
 *     InitDriver @ 0x1C0020BC0 (InitDriver.c)
 * Callees:
 *     <none>
 */

char IsEnergyMsrSupported()
{
  __readmsr(0xC0010299);
  __readmsr(0xC001029A);
  return 1;
}
