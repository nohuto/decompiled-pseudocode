/*
 * XREFs of ??1Completer@?$static_lazy@VStartWindowTelemetry@@@details@wil@@QEAA@XZ @ 0x180044AA8
 * Callers:
 *     ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x180045A98 (-IsEnabled@StartWindowTelemetry@@SA_NE_K@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6AXXZ@Z @ 0x1800C5AFC (-get@-$static_lazy@VLauncherTelemetryLogging@@@details@wil@@QEAAPEAVLauncherTelemetryLogging@@P6.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

BOOL __fastcall wil::details::static_lazy<StartWindowTelemetry>::Completer::~Completer(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  DWORD v3; // edx
  LPINIT_ONCE v5; // rbx
  union _RTL_RUN_ONCE v6; // rdx
  union _RTL_RUN_ONCE v7; // rax

  v3 = *(_DWORD *)(a1 + 8);
  if ( !v3 )
  {
    v5 = *(LPINIT_ONCE *)a1;
    v6.Ptr = *(PVOID *)(wil::details::static_lazy<LauncherTelemetryLogging>::get(
                          a1,
                          _lambda_23ce349ad8b1303b9752fca832f8f7b0_::_lambda_invoker_cdecl_,
                          a3)
                      + 8);
    v7.Ptr = v5[1].Ptr;
    v5[2].Ptr = v6.Ptr;
    LOBYTE(v5[3].Ptr) = 0;
    HIDWORD(v5[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v7.Ptr + 1))(v5 + 1);
    v3 = *(_DWORD *)(a1 + 8);
  }
  return InitOnceComplete(*(LPINIT_ONCE *)a1, v3, (LPVOID)(*(_QWORD *)a1 + 8LL));
}
