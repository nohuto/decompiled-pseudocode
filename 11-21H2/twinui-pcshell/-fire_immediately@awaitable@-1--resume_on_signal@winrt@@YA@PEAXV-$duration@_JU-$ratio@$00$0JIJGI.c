/*
 * XREFs of ?fire_immediately@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@AEAAXXZ @ 0x18041EBA8
 * Callers:
 *     ?await_suspend@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x180164618 (-await_suspend@awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@.c)
 *     ?_lambda_invoker_cdecl_@_lambda_3aebd2045932ec733a2f9ec0d4dcc475_@@CAXPEAX@Z @ 0x18041C510 (-_lambda_invoker_cdecl_@_lambda_3aebd2045932ec733a2f9ec0d4dcc475_@@CAXPEAX@Z.c)
 * Callees:
 *     WINRT_IMPL_GetCurrentProcess @ 0x1801893A4 (WINRT_IMPL_GetCurrentProcess.c)
 *     WINRT_IMPL_SetThreadpoolWaitEx @ 0x18018F703 (WINRT_IMPL_SetThreadpoolWaitEx.c)
 */

BOOL __fastcall `winrt::resume_on_signal'::`2'::awaitable::fire_immediately(__int64 a1)
{
  BOOL result; // eax
  HANDLE CurrentProcess; // rax
  struct _FILETIME pftTimeout; // [rsp+30h] [rbp+8h] BYREF

  result = WINRT_IMPL_SetThreadpoolWaitEx(*(PTP_WAIT *)(a1 + 8), 0LL, 0LL, 0LL);
  if ( result )
  {
    pftTimeout = 0LL;
    CurrentProcess = WINRT_IMPL_GetCurrentProcess();
    return WINRT_IMPL_SetThreadpoolWaitEx(*(PTP_WAIT *)(a1 + 8), CurrentProcess, &pftTimeout, 0LL);
  }
  return result;
}
