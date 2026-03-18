/*
 * XREFs of KiResetClockIntervalOneShot @ 0x140340AE8
 * Callers:
 *     KiCheckForTimerExpiration @ 0x1402C8140 (KiCheckForTimerExpiration.c)
 * Callees:
 *     PoTraceSystemTimerResolutionKernel @ 0x140340BF4 (PoTraceSystemTimerResolutionKernel.c)
 *     KiCancelClockTimer @ 0x140340C70 (KiCancelClockTimer.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14057004C (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiResetClockIntervalOneShot(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = KiClockOwnerOneShotRequest;
  if ( KiClockOwnerOneShotRequest )
  {
    LOBYTE(a3) = 1;
    PoTraceSystemTimerResolutionKernel(0LL, 1397707336LL, a3);
    KiClockOwnerOneShotRequest = 0LL;
    if ( KiClockTimerPerCpuTickScheduling )
      return KiCancelClockTimer(KeGetCurrentPrcb(), 2LL);
    else
      return KiSetClockIntervalToMinimumRequested();
  }
  return result;
}
