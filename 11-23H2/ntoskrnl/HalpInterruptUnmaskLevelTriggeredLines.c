/*
 * XREFs of HalpInterruptUnmaskLevelTriggeredLines @ 0x140520F70
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptRestoreAllControllerState @ 0x140A956B0 (HalpInterruptRestoreAllControllerState.c)
 */

__int64 HalpInterruptUnmaskLevelTriggeredLines()
{
  HalpInterruptRestoreAllControllerState();
  return 0LL;
}
