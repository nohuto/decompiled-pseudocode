/*
 * XREFs of DifIsPluginRunningWithoutReboot @ 0x1405D53E4
 * Callers:
 *     IopLoadUnloadDriver @ 0x1407CF120 (IopLoadUnloadDriver.c)
 *     VfMiscPluginEntry @ 0x140AE06A4 (VfMiscPluginEntry.c)
 * Callees:
 *     <none>
 */

char DifIsPluginRunningWithoutReboot()
{
  return DifIsVolatileMode;
}
