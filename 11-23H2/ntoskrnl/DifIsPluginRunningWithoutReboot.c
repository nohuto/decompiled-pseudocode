/*
 * XREFs of DifIsPluginRunningWithoutReboot @ 0x1405D4E74
 * Callers:
 *     IopLoadUnloadDriver @ 0x1407CEE50 (IopLoadUnloadDriver.c)
 *     VfMiscPluginEntry @ 0x140AE06B4 (VfMiscPluginEntry.c)
 * Callees:
 *     <none>
 */

char DifIsPluginRunningWithoutReboot()
{
  return DifIsVolatileMode;
}
