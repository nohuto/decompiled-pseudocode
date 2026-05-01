/*
 * XREFs of ?fire_immediately@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@AEAAXXZ @ 0x180426F6C
 * Callers:
 *     ?await_suspend@awaitable@?1??resume_after@winrt@@YA@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@chrono@std@@@Z@QEAAXU?$coroutine_handle@X@experimental@6@@Z @ 0x18018F820 (-await_suspend@awaitable@-1--resume_after@winrt@@YA@V-$duration@_JU-$ratio@$00$0JIJGIA@@std@@@ch.c)
 *     ?_lambda_invoker_cdecl_@_lambda_853bb78cc99d5363e4352e3710d5f65c_@@CA@PEAX@Z @ 0x18041B460 (-_lambda_invoker_cdecl_@_lambda_853bb78cc99d5363e4352e3710d5f65c_@@CA@PEAX@Z.c)
 * Callees:
 *     WINRT_IMPL_SetThreadpoolTimer @ 0x1801C7944 (WINRT_IMPL_SetThreadpoolTimer.c)
 *     WINRT_IMPL_GetProcAddress @ 0x1801C798C (WINRT_IMPL_GetProcAddress.c)
 *     LoadLibraryW_0 @ 0x1801C8394 (LoadLibraryW_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `winrt::resume_after'::`2'::awaitable::fire_immediately(__int64 a1)
{
  FARPROC ProcAddress; // rax
  HMODULE LibraryW_0; // rax
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp+8h] BYREF

  ProcAddress = (FARPROC)``winrt::resume_after'::`2'::awaitable::fire_immediately'::`2'::handler;
  if ( !``winrt::resume_after'::`2'::awaitable::fire_immediately'::`2'::handler )
  {
    LibraryW_0 = LoadLibraryW_0(L"kernel32.dll");
    ProcAddress = WINRT_IMPL_GetProcAddress(LibraryW_0, "SetThreadpoolTimerEx");
    if ( !ProcAddress )
      ProcAddress = `winrt::resume_after'::`2'::awaitable::fallback_SetThreadpoolTimerEx;
    ``winrt::resume_after'::`2'::awaitable::fire_immediately'::`2'::handler = (__int64)ProcAddress;
  }
  if ( ((unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ProcAddress)(*(_QWORD *)(a1 + 8), 0LL, 0LL, 0LL) )
  {
    pftDueTime = 0LL;
    WINRT_IMPL_SetThreadpoolTimer(*(PTP_TIMER *)(a1 + 8), &pftDueTime, 0, 0);
  }
}
