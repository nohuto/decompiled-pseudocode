/*
 * XREFs of ?IsEnabled@CAppManagerTelemetry@@SA_NE_K@Z @ 0x1802E56EC
 * Callers:
 *     ??$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z @ 0x1802DD26C (--$HandleViewCreationFailure@PEBGAEA_KAEAJAEAJ@CAppManagerTelemetry@@SAX$$QEAPEBGAEA_KAEAJ2@Z.c)
 *     ?_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOCATION@@@Z @ 0x18030114C (-_SnapApplicationToLocation@CApplicationFrameService@@AEAAJPEAUIImmersiveApplication@@W4SNAP_LOC.c)
 *     ?_LogVisibilityTelemetry@CTaskWindow@@AEAAX_N@Z @ 0x18030BFFC (-_LogVisibilityTelemetry@CTaskWindow@@AEAAX_N@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ??1Completer@?$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAA@XZ @ 0x180129A3C (--1Completer@-$static_lazy@VCAppManagerTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

char __fastcall CAppManagerTelemetry::IsEnabled(char a1)
{
  LPINIT_ONCE v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( __std_init_once_begin_initialize(&`CAppManagerTelemetry::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v2 = &`CAppManagerTelemetry::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_1807B3CD0;
    qword_1807B3CD0 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_8127ed7c5a5c4820bb697a3afc89f3a5_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<CAppManagerTelemetry>::Completer::~Completer(&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}
