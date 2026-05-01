/*
 * XREFs of ?IsEnabled@IamTraceLogging@@SA_NE_K@Z @ 0x18039D510
 * Callers:
 *     ??$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z @ 0x1803948DC (--$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C3614 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??1Completer@?$static_lazy@VIamTraceLogging@@@details@wil@@QEAA@XZ @ 0x180396E64 (--1Completer@-$static_lazy@VIamTraceLogging@@@details@wil@@QEAA@XZ.c)
 */

char __fastcall IamTraceLogging::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( __std_init_once_begin_initialize(&`IamTraceLogging::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v2 = &`IamTraceLogging::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_18098DA78;
    qword_18098DA78 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_119a121fb38785c27806b92be2d82d86_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<IamTraceLogging>::Completer::~Completer(&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}
