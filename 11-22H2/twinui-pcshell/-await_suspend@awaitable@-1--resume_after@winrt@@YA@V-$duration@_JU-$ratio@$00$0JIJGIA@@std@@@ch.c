/*
 * XREFs of ?await_suspend@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x18018F820
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCControlCenterExperienceManager@@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCControlCenterExperienceManager@@@experimental@std@@@experimental@std@@@Z @ 0x180073D78 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVCControlCenterExpe.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@?$notify_awaiter@V?$duration@HU?$ratio@$0DM@$00@std@@@chrono@std@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@@experimental@std@@@experimental@std@@@Z @ 0x18018F814 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashb_ea_18018F814.c)
 * Callees:
 *     ?close@?$handle_type@Utimer_traits@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@winrt@@QEAAXXZ @ 0x18018F8B8 (-close@-$handle_type@Utimer_traits@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$.c)
 *     WINRT_IMPL_SetThreadpoolTimer @ 0x1801C7944 (WINRT_IMPL_SetThreadpoolTimer.c)
 *     CreateThreadpoolTimer_0 @ 0x1801C795C (CreateThreadpoolTimer_0.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 *     ?fire_immediately@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@AEAAXXZ @ 0x180426F6C (-fire_immediately@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@.c)
 */

__int64 __fastcall `winrt::resume_after'::`2'::awaitable::await_suspend(char *pv, __int64 a2)
{
  struct _TP_TIMER **v2; // rsi
  winrt *v4; // rcx
  struct _TP_TIMER *ThreadpoolTimer_0; // rdi
  __int64 result; // rax
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp+10h] BYREF

  *((_QWORD *)pv + 3) = a2;
  v2 = (struct _TP_TIMER **)(pv + 8);
  ThreadpoolTimer_0 = CreateThreadpoolTimer_0(`winrt::resume_after'::`2'::awaitable::callback, pv, 0LL);
  if ( !ThreadpoolTimer_0 )
    winrt::throw_last_error(v4);
  _close___handle_type_Utimer_traits_awaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__winrt__QEAAXXZ(v2);
  _close___handle_type_Utimer_traits_awaitable__1__resume_after_winrt__YA_V__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__winrt__QEAAXXZ(v2);
  *v2 = ThreadpoolTimer_0;
  pftDueTime = (struct _FILETIME)-*((_QWORD *)pv + 2);
  WINRT_IMPL_SetThreadpoolTimer(ThreadpoolTimer_0, &pftDueTime, 0, 0);
  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)pv + 8, 1, 0);
  if ( (_DWORD)result )
    return `winrt::resume_after'::`2'::awaitable::fire_immediately(pv);
  return result;
}
