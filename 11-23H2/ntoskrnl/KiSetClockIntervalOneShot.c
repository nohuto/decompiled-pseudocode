/*
 * XREFs of KiSetClockIntervalOneShot @ 0x140340DD8
 * Callers:
 *     KiCheckForTimerExpiration @ 0x1402C83D0 (KiCheckForTimerExpiration.c)
 * Callees:
 *     KiSetClockTimer @ 0x1402C2828 (KiSetClockTimer.c)
 *     KiGetClockIntervalOneShot @ 0x140340E50 (KiGetClockIntervalOneShot.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140340E84 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14057058C (KiSetClockIntervalToMinimumRequested.c)
 */

__int64 __fastcall KiSetClockIntervalOneShot(__int64 a1, __int64 a2)
{
  unsigned int ClockIntervalOneShot; // eax
  __int64 v5; // r8

  KiClockOwnerOneShotRequest = a1;
  if ( KiClockTimerPerCpuTickScheduling )
    KiSetClockTimer((__int64)KeGetCurrentPrcb(), a1, 0, 2, 1, 1);
  else
    KiSetClockIntervalToMinimumRequested();
  ClockIntervalOneShot = KiGetClockIntervalOneShot(a1, a2);
  LOBYTE(v5) = 1;
  return PoTraceSystemTimerResolutionKernel(ClockIntervalOneShot, 1397707336LL, v5);
}
