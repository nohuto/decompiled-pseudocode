/*
 * XREFs of ?IsEnabled@AppCloseTelemetry@@SA_NE_K@Z @ 0x1802E5658
 * Callers:
 *     ?_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z @ 0x1802E9920 (-_HandleCloseRequested@CApplicationManager@@AEAAXAEBUHSHELL_DATA@1@PEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ??1Completer@?$static_lazy@VAppCloseTelemetry@@@details@wil@@QEAA@XZ @ 0x1802E023C (--1Completer@-$static_lazy@VAppCloseTelemetry@@@details@wil@@QEAA@XZ.c)
 */

char __fastcall AppCloseTelemetry::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( __std_init_once_begin_initialize(&`AppCloseTelemetry::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v2 = &`AppCloseTelemetry::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_1807B3D38;
    qword_1807B3D38 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_e1ff718f598a6a7bf79a481d174755c1_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<AppCloseTelemetry>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}
