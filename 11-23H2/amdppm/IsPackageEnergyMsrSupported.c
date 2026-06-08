/*
 * XREFs of IsPackageEnergyMsrSupported @ 0x1C002009C
 * Callers:
 *     InitDriver @ 0x1C0020BC0 (InitDriver.c)
 * Callees:
 *     <none>
 */

char IsPackageEnergyMsrSupported()
{
  __readmsr(0xC0010299);
  __readmsr(0xC001029B);
  return 1;
}
