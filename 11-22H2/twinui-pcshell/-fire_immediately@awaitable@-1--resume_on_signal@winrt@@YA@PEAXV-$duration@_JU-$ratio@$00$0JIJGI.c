/*
 * XREFs of ?fire_immediately@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@AEAAXXZ @ 0x18051CF6C
 * Callers:
 *     ?await_suspend@awaitable@?1??resume_on_signal@winrt@@YA@PEAXV?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x180190AD8 (-await_suspend@awaitable@-1--resume_on_signal@winrt@@YA@PEAXV-$duration@_JU-$ratio@$00$0JIJGIA@@.c)
 *     ?_lambda_invoker_cdecl_@_lambda_3aebd2045932ec733a2f9ec0d4dcc475_@@CA@PEAX@Z @ 0x1805079B0 (-_lambda_invoker_cdecl_@_lambda_3aebd2045932ec733a2f9ec0d4dcc475_@@CA@PEAX@Z.c)
 * Callees:
 *     WINRT_IMPL_GetProcAddress @ 0x1801C798C (WINRT_IMPL_GetProcAddress.c)
 *     WINRT_IMPL_GetCurrentProcess @ 0x1801C79B0 (WINRT_IMPL_GetCurrentProcess.c)
 *     SetThreadpoolWait_0 @ 0x1801C7B38 (SetThreadpoolWait_0.c)
 *     LoadLibraryW_0 @ 0x1801C8394 (LoadLibraryW_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `winrt::resume_on_signal'::`2'::awaitable::fire_immediately(__int64 a1)
{
  FARPROC ProcAddress; // rax
  HMODULE LibraryW_0; // rax
  HANDLE CurrentProcess; // rax
  struct _FILETIME pftTimeout; // [rsp+40h] [rbp+8h] BYREF

  ProcAddress = (FARPROC)``winrt::resume_on_signal'::`2'::awaitable::fire_immediately'::`2'::handler;
  if ( !``winrt::resume_on_signal'::`2'::awaitable::fire_immediately'::`2'::handler )
  {
    LibraryW_0 = LoadLibraryW_0(L"kernel32.dll");
    ProcAddress = WINRT_IMPL_GetProcAddress(LibraryW_0, "SetThreadpoolWaitEx");
    if ( !ProcAddress )
      ProcAddress = `winrt::resume_on_signal'::`2'::awaitable::fallback_SetThreadpoolWaitEx;
    ``winrt::resume_on_signal'::`2'::awaitable::fire_immediately'::`2'::handler = (__int64)ProcAddress;
  }
  if ( ((unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ProcAddress)(*(_QWORD *)(a1 + 8), 0LL, 0LL, 0LL) )
  {
    pftTimeout = 0LL;
    CurrentProcess = WINRT_IMPL_GetCurrentProcess();
    SetThreadpoolWait_0(*(PTP_WAIT *)(a1 + 8), CurrentProcess, &pftTimeout);
  }
}
