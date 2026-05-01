/*
 * XREFs of ??$WindowEventDispatcher_PendingActivationPropertySetAdded@AEAPEAUIPropertySet@Collections@Foundation@Windows@@@ViewManagerInteropTabTraceLogging@@SAXAEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804BA348
 * Callers:
 *     ?QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1804C7810 (-QueuePendingActivation@WindowEventDispatcher@@AEAAXPEAUIWindowWrapperInternal@@PEAUIPropertySet.c)
 *     ?QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@_N@Z @ 0x1804D1B70 (-QueuePendingActivation@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@PEAUIPrope.c)
 * Callees:
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ??1Completer@?$static_lazy@VViewManagerInteropTabTraceLogging@@@details@wil@@QEAA@XZ @ 0x1804BCB24 (--1Completer@-$static_lazy@VViewManagerInteropTabTraceLogging@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled@ViewManagerInteropTabTraceLogging@@SA_NE_K@Z @ 0x1804C6DD8 (-IsEnabled@ViewManagerInteropTabTraceLogging@@SA_NE_K@Z.c)
 *     ?WindowEventDispatcher_PendingActivationPropertySetAdded_@ViewManagerInteropTabTraceLogging@@QEAAXPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804CCAE0 (-WindowEventDispatcher_PendingActivationPropertySetAdded_@ViewManagerInteropTabTraceLogging@@QEA.c)
 */

void __fastcall ViewManagerInteropTabTraceLogging::WindowEventDispatcher_PendingActivationPropertySetAdded<Windows::Foundation::Collections::IPropertySet * &>(
        struct Windows::Foundation::Collections::IPropertySet **a1,
        unsigned __int64 a2)
{
  ViewManagerInteropTabTraceLogging *v3; // rcx
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+18h] BYREF

  if ( ViewManagerInteropTabTraceLogging::IsEnabled((unsigned __int8)a1, a2) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(
           &`ViewManagerInteropTabTraceLogging::Instance'::`2'::wrapper,
           0,
           &fPending,
           &Context) )
    {
      if ( fPending )
      {
        v4 = &`ViewManagerInteropTabTraceLogging::Instance'::`2'::wrapper;
        Context = &qword_18098E680;
        qword_18098E680 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_975e4d64c8b5daac57efc1784b54d4a5_::_lambda_invoker_cdecl_);
        v5 = 0;
        wil::details::static_lazy<ViewManagerInteropTabTraceLogging>::Completer::~Completer(&v4);
      }
    }
    ViewManagerInteropTabTraceLogging::WindowEventDispatcher_PendingActivationPropertySetAdded_(v3, *a1);
  }
}
