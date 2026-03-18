/*
 * XREFs of KiResetClockIntervalOneShot @ 0x14022F104
 * Callers:
 *     KiCheckForTimerExpiration @ 0x140307E90 (KiCheckForTimerExpiration.c)
 * Callees:
 *     PoTraceSystemTimerResolutionKernel @ 0x14022F440 (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockIntervalToMinimumRequested @ 0x14022F4BC (KiSetClockIntervalToMinimumRequested.c)
 *     KiSetNextClockTickDueTime @ 0x14056D050 (KiSetNextClockTickDueTime.c)
 */

__int64 __fastcall KiResetClockIntervalOneShot(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rcx
  struct _KPRCB *CurrentPrcb; // rax

  result = KiClockOwnerOneShotRequest;
  if ( KiClockOwnerOneShotRequest )
  {
    LOBYTE(a3) = 1;
    PoTraceSystemTimerResolutionKernel(0LL, 1397707336LL, a3);
    KiClockOwnerOneShotRequest = 0LL;
    if ( KiClockTimerPerCpuTickScheduling )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      LOBYTE(v4) = 1;
      CurrentPrcb->ClockTimerState.ClockTimerEntries[2].TypeFlags &= ~1u;
      return KiSetNextClockTickDueTime(v4);
    }
    else
    {
      return KiSetClockIntervalToMinimumRequested();
    }
  }
  return result;
}
