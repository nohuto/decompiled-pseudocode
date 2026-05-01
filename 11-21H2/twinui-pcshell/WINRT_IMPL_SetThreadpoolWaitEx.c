/*
 * XREFs of WINRT_IMPL_SetThreadpoolWaitEx @ 0x18018F703
 * Callers:
 *     ?await_suspend@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x180164618 (-await_suspend@awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@.c)
 *     ?fire_immediately@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@AEAAXXZ @ 0x18041EBA8 (-fire_immediately@awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGI.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOL __stdcall WINRT_IMPL_SetThreadpoolWaitEx(PTP_WAIT pwa, HANDLE h, PFILETIME pftTimeout, PVOID Reserved)
{
  return SetThreadpoolWaitEx(pwa, h, pftTimeout, Reserved);
}
