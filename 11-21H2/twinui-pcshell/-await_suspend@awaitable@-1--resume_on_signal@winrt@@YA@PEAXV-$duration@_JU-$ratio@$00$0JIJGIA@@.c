/*
 * XREFs of ?await_suspend@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x180164618
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAAXU?$coroutine_handle@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@experimental@std@@@experimental@std@@@Z @ 0x1800444D8 (--$await_suspend@Upromise_type@-$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@$$V@ex.c)
 * Callees:
 *     ?close@?$handle_type@Uwait_traits@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@winrt@@QEAAXXZ @ 0x1801646B0 (-close@-$handle_type@Uwait_traits@awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$.c)
 *     WINRT_IMPL_CreateThreadpoolWait @ 0x180189B1A (WINRT_IMPL_CreateThreadpoolWait.c)
 *     WINRT_IMPL_SetThreadpoolWaitEx @ 0x18018F703 (WINRT_IMPL_SetThreadpoolWaitEx.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x18033DC7C (-throw_last_error@winrt@@YAXXZ.c)
 *     ?fire_immediately@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@AEAAXXZ @ 0x18041EBA8 (-fire_immediately@awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGI.c)
 */

__int64 __fastcall `winrt::resume_on_signal'::`2'::awaitable::await_suspend(char *pv, __int64 a2)
{
  winrt *v3; // rcx
  struct _TP_WAIT *ThreadpoolWait; // rdi
  void *v5; // rdx
  __int64 result; // rax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  *((_QWORD *)pv + 5) = a2;
  ThreadpoolWait = WINRT_IMPL_CreateThreadpoolWait(`winrt::resume_on_signal'::`2'::awaitable::callback, pv, 0LL);
  if ( !ThreadpoolWait )
    winrt::throw_last_error(v3);
  _close___handle_type_Uwait_traits_awaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__winrt__QEAAXXZ(pv + 8);
  *((_QWORD *)pv + 1) = ThreadpoolWait;
  v5 = (void *)*((_QWORD *)pv + 3);
  v7 = -*((_QWORD *)pv + 2);
  WINRT_IMPL_SetThreadpoolWaitEx(ThreadpoolWait, v5, (PFILETIME)((unsigned __int64)&v7 & -(__int64)(v7 != 0)), 0LL);
  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)pv + 12, 1, 0);
  if ( (_DWORD)result )
    return `winrt::resume_on_signal'::`2'::awaitable::fire_immediately(pv);
  return result;
}
