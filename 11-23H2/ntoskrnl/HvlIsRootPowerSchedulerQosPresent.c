/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x14053FFB0
 * Callers:
 *     PpmCheckInitProcessors @ 0x14082E5C4 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

char HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
