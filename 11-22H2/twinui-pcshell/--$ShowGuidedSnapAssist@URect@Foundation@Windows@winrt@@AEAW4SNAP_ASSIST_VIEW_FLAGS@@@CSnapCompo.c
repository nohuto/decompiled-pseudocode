/*
 * XREFs of ??$ShowGuidedSnapAssist@URect@Foundation@Windows@winrt@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@CSnapComponentTelemetry@@SAX$$QEAURect@Foundation@Windows@winrt@@AEAW4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806876E4
 * Callers:
 *     ?Show@GuidedSnapAssistControl@@QEAAXV?$shared_ptr@VGuidedSnapAssistData@@@std@@V?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806883CC (-Show@GuidedSnapAssistControl@@QEAAXV-$shared_ptr@VGuidedSnapAssistData@@@std@@V-$com_ptr_t@UIAp.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800173DC (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ?IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z @ 0x18066189C (-IsEnabled@CSnapComponentTelemetry@@SA_NE_K@Z.c)
 *     ?ShowGuidedSnapAssist_@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@winrt@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x180688584 (-ShowGuidedSnapAssist_@CSnapComponentTelemetry@@QEAAXAEBURect@Foundation@Windows@winrt@@W4SNAP_A.c)
 */

char __fastcall CSnapComponentTelemetry::ShowGuidedSnapAssist<winrt::Windows::Foundation::Rect,enum SNAP_ASSIST_VIEW_FLAGS &>(
        __int64 a1,
        unsigned int *a2)
{
  char result; // al
  __int64 v5; // rcx
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+20h] BYREF

  result = CSnapComponentTelemetry::IsEnabled(a1);
  if ( result )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CSnapComponentTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v6 = &`CSnapComponentTelemetry::Instance'::`2'::wrapper;
        Context = &qword_18098EBC8;
        qword_18098EBC8 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_3442a9d6c0a6f0a8d43c13feb2a6d4f2_::_lambda_invoker_cdecl_);
        v7 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v6);
      }
    }
    return CSnapComponentTelemetry::ShowGuidedSnapAssist_(v5, a1, *a2);
  }
  return result;
}
