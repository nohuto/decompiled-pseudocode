/*
 * XREFs of WINRT_IMPL_CreateThreadpoolWait @ 0x180189B1A
 * Callers:
 *     ?await_suspend@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x180164618 (-await_suspend@awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PTP_WAIT __stdcall WINRT_IMPL_CreateThreadpoolWait(PTP_WAIT_CALLBACK pfnwa, PVOID pv, PTP_CALLBACK_ENVIRON pcbe)
{
  return CreateThreadpoolWait(pfnwa, pv, pcbe);
}
