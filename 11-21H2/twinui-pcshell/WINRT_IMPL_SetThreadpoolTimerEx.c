/*
 * XREFs of WINRT_IMPL_SetThreadpoolTimerEx @ 0x18018F70F
 * Callers:
 *     ?await_suspend@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x1800F9F14 (-await_suspend@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@ch.c)
 *     ?fire_immediately@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@AEAAXXZ @ 0x18056ED14 (-fire_immediately@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_IMPL_SetThreadpoolTimerEx(
        PTP_TIMER pti,
        PFILETIME pftDueTime,
        DWORD msPeriod,
        DWORD msWindowLength)
{
  return SetThreadpoolTimerEx(pti, pftDueTime, msPeriod, msWindowLength);
}
