/*
 * XREFs of HvlIsRootPowerSchedulerQosPresent @ 0x14053F8F0
 * Callers:
 *     PpmCheckInitProcessors @ 0x14082E2C4 (PpmCheckInitProcessors.c)
 * Callees:
 *     <none>
 */

char HvlIsRootPowerSchedulerQosPresent()
{
  return BYTE2(HvlpFlags) & 1;
}
