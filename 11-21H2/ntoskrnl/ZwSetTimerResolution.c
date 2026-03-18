/*
 * XREFs of ZwSetTimerResolution @ 0x14041EEC0
 * Callers:
 *     ExCleanTimerResolutionRequest @ 0x14025D2C4 (ExCleanTimerResolutionRequest.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwSetTimerResolution(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
