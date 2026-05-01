/*
 * XREFs of ?await_suspend@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x1800F9F14
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@PEBV_lambda_b8623916b833b4369876a538bb21da9f_@@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UIRandomAccessStreamReference@Streams@Storage@Windows@winrt@@@Foundation@Windows@winrt@@PEBV_lambda_b8623916b833b4369876a538bb21da9f_@@@experimental@std@@@experimental@std@@@Z @ 0x1800444E8 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@UIRandomAccessStreamReferen.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@?$notify_awaiter@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@implementation@Shell@Internal@Windows@2@_K@experimental@std@@@experimental@std@@@Z @ 0x1800445E4 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUWindowTabHost@impl.c)
 * Callees:
 *     ?close@?$handle_type@Utimer_traits@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@winrt@@QEAAXXZ @ 0x1800FA088 (-close@-$handle_type@Utimer_traits@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$.c)
 *     CreateThreadpoolTimer_0 @ 0x180189350 (CreateThreadpoolTimer_0.c)
 *     WINRT_IMPL_SetThreadpoolTimerEx @ 0x18018F70F (WINRT_IMPL_SetThreadpoolTimerEx.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x18033DC7C (-throw_last_error@winrt@@YAXXZ.c)
 *     ?fire_immediately@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@AEAAXXZ @ 0x18056ED14 (-fire_immediately@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@.c)
 */

__int64 __fastcall `winrt::resume_after'::`2'::awaitable::await_suspend(char *pv, __int64 a2)
{
  winrt *v3; // rcx
  struct _TP_TIMER *ThreadpoolTimer_0; // rdi
  __int64 result; // rax
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp+10h] BYREF

  *((_QWORD *)pv + 3) = a2;
  ThreadpoolTimer_0 = CreateThreadpoolTimer_0(`winrt::resume_after'::`2'::awaitable::callback, pv, 0LL);
  if ( !ThreadpoolTimer_0 )
    winrt::throw_last_error(v3);
  _close___handle_type_Utimer_traits_awaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__winrt__QEAAXXZ(pv + 8);
  *((_QWORD *)pv + 1) = ThreadpoolTimer_0;
  pftDueTime = (struct _FILETIME)-*((_QWORD *)pv + 2);
  WINRT_IMPL_SetThreadpoolTimerEx(ThreadpoolTimer_0, &pftDueTime, 0, 0);
  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)pv + 8, 1, 0);
  if ( (_DWORD)result )
    return `winrt::resume_after'::`2'::awaitable::fire_immediately(pv);
  return result;
}
