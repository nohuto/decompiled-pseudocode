/*
 * XREFs of ?IsEnabled@ViewManagerInteropTabTraceLogging@@SA_NE_K@Z @ 0x18005ADF4
 * Callers:
 *     ??$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@ViewManagerInteropTabTraceLogging@@SAXAEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18005AB38 (--$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Found.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VViewManagerInteropTabTraceLogging@@@details@wil@@QEAA@XZ @ 0x18005AE88 (--1Completer@-$static_lazy@VViewManagerInteropTabTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x18009301C (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x18018879C (atexit.c)
 */

bool __fastcall ViewManagerInteropTabTraceLogging::IsEnabled(char a1)
{
  unsigned __int64 v1; // r8
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  WINBOOL v5; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v6; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v5) = a1;
  v6 = 0LL;
  if ( __std_init_once_begin_initialize(
         &`ViewManagerInteropTabTraceLogging::Instance'::`2'::wrapper,
         0,
         &v5,
         (LPVOID *)&v6)
    && v5 )
  {
    v3 = &`ViewManagerInteropTabTraceLogging::Instance'::`2'::wrapper;
    v6 = (wil::TraceLoggingProvider *)&qword_1807B4328;
    qword_1807B4328 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_975e4d64c8b5daac57efc1784b54d4a5_::_lambda_invoker_cdecl_);
    v4 = 0;
    wil::details::static_lazy<ViewManagerInteropTabTraceLogging>::Completer::~Completer(&v3);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v6, 0, v1);
}
