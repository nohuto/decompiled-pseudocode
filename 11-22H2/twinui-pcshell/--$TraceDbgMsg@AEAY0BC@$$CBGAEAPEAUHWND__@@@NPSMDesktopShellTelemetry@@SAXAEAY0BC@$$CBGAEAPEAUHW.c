/*
 * XREFs of ??$TraceDbgMsg@AEAY0BC@$$CBGAEAPEAUHWND__@@@NPSMDesktopShellTelemetry@@SAXAEAY0BC@$$CBGAEAPEAUHWND__@@@Z @ 0x180036428
 * Callers:
 *     ?_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z @ 0x1800364FC (-_GetAppHwnd@NPSMDesktopShellComponent@@QEAAJPEAUIApplicationView@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?IsEnabled@NPSMDesktopShellTelemetry@@SA_NE_K@Z @ 0x1800364A0 (-IsEnabled@NPSMDesktopShellTelemetry@@SA_NE_K@Z.c)
 *     ?TraceDbgMsg_@NPSMDesktopShellTelemetry@@QEAAXPEBGZZ @ 0x180036710 (-TraceDbgMsg_@NPSMDesktopShellTelemetry@@QEAAXPEBGZZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??1Completer@?$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAA@XZ @ 0x1806ED95C (--1Completer@-$static_lazy@VNPSMDesktopShellTelemetry@@@details@wil@@QEAA@XZ.c)
 */

void __fastcall NPSMDesktopShellTelemetry::TraceDbgMsg<unsigned short const (&)[18],HWND__ * &>(__int64 a1, _QWORD *a2)
{
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  __int64 fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+18h] BYREF

  fPending = a1;
  if ( NPSMDesktopShellTelemetry::IsEnabled(a1, (unsigned __int64)a2) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`NPSMDesktopShellTelemetry::Instance'::`2'::wrapper,
           0,
           (PBOOL)&fPending,
           &Context) )
    {
      if ( (_DWORD)fPending )
      {
        v3 = &`NPSMDesktopShellTelemetry::Instance'::`2'::wrapper;
        Context = &qword_18098ED38;
        qword_18098ED38 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_f99bc1824c278e72bef545089591412c_::_lambda_invoker_cdecl_);
        v4 = 0;
        wil::details::static_lazy<NPSMDesktopShellTelemetry>::Completer::~Completer(&v3);
      }
    }
    NPSMDesktopShellTelemetry::TraceDbgMsg_((NPSMDesktopShellTelemetry *)Context, L"Modern hwnd =0x%x", *a2);
  }
}
