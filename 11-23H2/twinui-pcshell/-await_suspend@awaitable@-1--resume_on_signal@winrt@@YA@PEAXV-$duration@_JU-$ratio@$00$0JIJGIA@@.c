/*
 * XREFs of ?await_suspend@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x180190AD8
 * Callers:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHost@@_N@experimental@std@@@experimental@std@@@Z @ 0x180073D88 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAVTouchEdgeGripperHo.c)
 * Callees:
 *     ?close@?$handle_type@Uwait_traits@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@@winrt@@QEAAXXZ @ 0x180190B74 (-close@-$handle_type@Uwait_traits@awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$.c)
 *     SetThreadpoolWait_0 @ 0x1801C7B38 (SetThreadpoolWait_0.c)
 *     WINRT_IMPL_CreateThreadpoolWait @ 0x1801C7B44 (WINRT_IMPL_CreateThreadpoolWait.c)
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 *     ?fire_immediately@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@AEAAXXZ @ 0x18051CF6C (-fire_immediately@awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGI.c)
 */

__int64 __fastcall `winrt::resume_on_signal'::`2'::awaitable::await_suspend(char *pv, __int64 a2)
{
  struct _TP_WAIT **v2; // rsi
  winrt *v4; // rcx
  struct _TP_WAIT *ThreadpoolWait; // rdi
  void *v6; // rdx
  __int64 result; // rax
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  *((_QWORD *)pv + 5) = a2;
  v2 = (struct _TP_WAIT **)(pv + 8);
  ThreadpoolWait = WINRT_IMPL_CreateThreadpoolWait(`winrt::resume_on_signal'::`2'::awaitable::callback, pv, 0LL);
  if ( !ThreadpoolWait )
    winrt::throw_last_error(v4);
  _close___handle_type_Uwait_traits_awaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__winrt__QEAAXXZ(v2);
  _close___handle_type_Uwait_traits_awaitable__1__resume_on_signal_winrt__YA_PEAXV__duration__JU__ratio__00_0JIJGIA__std___chrono_std___Z__winrt__QEAAXXZ(v2);
  *v2 = ThreadpoolWait;
  v6 = (void *)*((_QWORD *)pv + 3);
  v8 = -*((_QWORD *)pv + 2);
  SetThreadpoolWait_0(ThreadpoolWait, v6, (PFILETIME)((unsigned __int64)&v8 & -(__int64)(v8 != 0)));
  result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)pv + 12, 1, 0);
  if ( (_DWORD)result )
    return `winrt::resume_on_signal'::`2'::awaitable::fire_immediately(pv);
  return result;
}
