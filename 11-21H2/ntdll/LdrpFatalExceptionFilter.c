/*
 * XREFs of LdrpFatalExceptionFilter @ 0x1800E1D80
 * Callers:
 *     LdrGetDllHandleByMapping @ 0x180050C70 (LdrGetDllHandleByMapping.c)
 *     LdrGetDllHandleByName @ 0x18007ED20 (LdrGetDllHandleByName.c)
 * Callees:
 *     RtlReportSilentProcessExit @ 0x1800548C0 (RtlReportSilentProcessExit.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     NtQueryInformationProcess @ 0x1800A4390 (NtQueryInformationProcess.c)
 *     ZwTerminateProcess @ 0x1800A45F0 (ZwTerminateProcess.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18010D530 (RtlUnhandledExceptionFilter2.c)
 */

__int64 __fastcall LdrpFatalExceptionFilter(_DWORD **a1)
{
  struct _TEB *v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // rsi
  NTSTATUS v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  void (__fastcall *v8)(_DWORD **); // rsi
  int ProcessInformation; // [rsp+40h] [rbp+8h] BYREF

  v2 = NtCurrentTeb();
  if ( **a1 == -1073741571 && v2->NtTib.StackLimit > v2->DeallocationStack )
  {
    RtlReportSilentProcessExit(-1LL, -1073741571);
  }
  else
  {
    v3 = `RtlpGetCookieValue'::`2'::CookieValue;
    v4 = RtlpUnhandledExceptionFilter;
    if ( !`RtlpGetCookieValue'::`2'::CookieValue )
    {
      v5 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)36, &ProcessInformation, 4u, 0LL);
      if ( v5 < 0 )
        RtlRaiseStatus(v5, v6, v7);
      v3 = ProcessInformation;
      `RtlpGetCookieValue'::`2'::CookieValue = ProcessInformation;
    }
    v8 = (void (__fastcall *)(_DWORD **))(v3 ^ __ROR8__(v4, 64 - (v3 & 0x3F)));
    if ( v8 )
      v8(a1);
    else
      RtlUnhandledExceptionFilter2(a1, &unk_180130AA2);
  }
  ZwTerminateProcess();
  return 0LL;
}
