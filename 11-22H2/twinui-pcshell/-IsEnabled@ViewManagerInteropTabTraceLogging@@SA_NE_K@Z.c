/*
 * XREFs of ?IsEnabled@ViewManagerInteropTabTraceLogging@@SA_NE_K@Z @ 0x1804C6DD8
 * Callers:
 *     ??$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@ViewManagerInteropTabTraceLogging@@SAXAEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804BA348 (--$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Found.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C3614 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??1Completer@?$static_lazy@VViewManagerInteropTabTraceLogging@@@details@wil@@QEAA@XZ @ 0x1804BCB24 (--1Completer@-$static_lazy@VViewManagerInteropTabTraceLogging@@@details@wil@@QEAA@XZ.c)
 */

char __fastcall ViewManagerInteropTabTraceLogging::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`ViewManagerInteropTabTraceLogging::Instance'::`2'::wrapper,
         0,
         &v4,
         (LPVOID *)&v5)
    && v4 )
  {
    v2 = &`ViewManagerInteropTabTraceLogging::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_18098E680;
    qword_18098E680 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_975e4d64c8b5daac57efc1784b54d4a5_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<ViewManagerInteropTabTraceLogging>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}
