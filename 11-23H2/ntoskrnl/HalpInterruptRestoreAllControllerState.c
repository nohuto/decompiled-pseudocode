/*
 * XREFs of HalpInterruptRestoreAllControllerState @ 0x140A956B0
 * Callers:
 *     HalpInterruptMaskLevelTriggeredLines @ 0x140520D70 (HalpInterruptMaskLevelTriggeredLines.c)
 *     HalpInterruptUnmaskLevelTriggeredLines @ 0x140520F70 (HalpInterruptUnmaskLevelTriggeredLines.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140A97D60 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     HalpInterruptRestoreController @ 0x14051A8E8 (HalpInterruptRestoreController.c)
 */

void HalpInterruptRestoreAllControllerState()
{
  ULONG_PTR *v0; // rbx
  __int64 v1; // rcx
  int v2; // eax

  v0 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  while ( v0 != &HalpRegisteredInterruptControllers )
  {
    v1 = (__int64)v0;
    v0 = (ULONG_PTR *)*v0;
    v2 = HalpInterruptRestoreController(v1, 0);
    if ( v2 < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 3uLL, v2);
  }
  HalpInterruptPicStateIntact = 1;
}
