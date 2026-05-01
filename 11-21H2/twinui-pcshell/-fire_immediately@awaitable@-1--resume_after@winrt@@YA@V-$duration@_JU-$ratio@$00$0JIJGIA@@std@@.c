/*
 * XREFs of ?fire_immediately@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@AEAAXXZ @ 0x18056ED14
 * Callers:
 *     ?await_suspend@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x1800F9F14 (-await_suspend@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@ch.c)
 *     ?_lambda_invoker_cdecl_@_lambda_853bb78cc99d5363e4352e3710d5f65c_@@CAXPEAX@Z @ 0x18056B4F0 (-_lambda_invoker_cdecl_@_lambda_853bb78cc99d5363e4352e3710d5f65c_@@CAXPEAX@Z.c)
 * Callees:
 *     WINRT_IMPL_SetThreadpoolTimerEx @ 0x18018F70F (WINRT_IMPL_SetThreadpoolTimerEx.c)
 */

BOOL __fastcall `winrt::resume_after'::`2'::awaitable::fire_immediately(__int64 a1)
{
  BOOL result; // eax
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp+8h] BYREF

  result = WINRT_IMPL_SetThreadpoolTimerEx(*(PTP_TIMER *)(a1 + 8), 0LL, 0, 0);
  if ( result )
  {
    pftDueTime = 0LL;
    return WINRT_IMPL_SetThreadpoolTimerEx(*(PTP_TIMER *)(a1 + 8), &pftDueTime, 0, 0);
  }
  return result;
}
