/*
 * XREFs of ExpCheckForFreedEnhancedTimer @ 0x14031DEB4
 * Callers:
 *     ExDeleteTimer @ 0x14031DAB0 (ExDeleteTimer.c)
 *     ExSetTimer @ 0x14031DDF0 (ExSetTimer.c)
 *     ExCancelTimer @ 0x14031DE80 (ExCancelTimer.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

char __fastcall ExpCheckForFreedEnhancedTimer(ULONG_PTR BugCheckParameter1)
{
  char result; // al

  result = ExpTimerFreedCookie;
  if ( *(_BYTE *)(BugCheckParameter1 + 152) != ExpTimerFreedCookie )
    KeBugCheckEx(0xC6u, BugCheckParameter1, 1uLL, KeGetCurrentThread()->PreviousMode, 0LL);
  return result;
}
