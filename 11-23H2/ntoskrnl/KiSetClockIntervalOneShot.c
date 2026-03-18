/*
 * XREFs of KiSetClockIntervalOneShot @ 0x140340B48
 * Callers:
 *     KiCheckForTimerExpiration @ 0x1402C8140 (KiCheckForTimerExpiration.c)
 * Callees:
 *     KiSetClockTimer @ 0x1402C2598 (KiSetClockTimer.c)
 *     KiGetClockIntervalOneShot @ 0x140340BC0 (KiGetClockIntervalOneShot.c)
 *     PoTraceSystemTimerResolutionKernel @ 0x140340BF4 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14057004C (KiSetClockIntervalToMinimumRequested.c)
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
