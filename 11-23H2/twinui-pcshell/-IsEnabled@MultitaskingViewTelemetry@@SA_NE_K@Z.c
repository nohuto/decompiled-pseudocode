/*
 * XREFs of ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x18054F3C8
 * Callers:
 *     ??$GestureActionTriggered@II@MultitaskingViewTelemetry@@SAX$$QEAI0@Z @ 0x18054B348 (--$GestureActionTriggered@II@MultitaskingViewTelemetry@@SAX$$QEAI0@Z.c)
 *     ??$AltTabInvoked@AEAW4ALT_TAB_VIEW_FLAGS@@@MultitaskingViewTelemetry@@SAXAEAW4ALT_TAB_VIEW_FLAGS@@@Z @ 0x180552C1C (--$AltTabInvoked@AEAW4ALT_TAB_VIEW_FLAGS@@@MultitaskingViewTelemetry@@SAXAEAW4ALT_TAB_VIEW_FLAGS.c)
 *     ??$GestureActionResult@AEAIAEAIAEAH@MultitaskingViewTelemetry@@SAXAEAI0AEAH@Z @ 0x18055D260 (--$GestureActionResult@AEAIAEAIAEAH@MultitaskingViewTelemetry@@SAXAEAI0AEAH@Z.c)
 *     ??$GestureActionResult@AEAIAEAI_N@MultitaskingViewTelemetry@@SAXAEAI0$$QEA_N@Z @ 0x18055D324 (--$GestureActionResult@AEAIAEAI_N@MultitaskingViewTelemetry@@SAXAEAI0$$QEA_N@Z.c)
 *     ??$MultitaskingViewFrameShown@AEAIAEAIAEAUCRect@Geometry@@@MultitaskingViewTelemetry@@SAXAEAI0AEAUCRect@Geometry@@@Z @ 0x18056C470 (--$MultitaskingViewFrameShown@AEAIAEAIAEAUCRect@Geometry@@@MultitaskingViewTelemetry@@SAXAEAI0AE.c)
 *     ??$SwitchItemInitializationError@AEAJ@MultitaskingViewTelemetry@@SAXAEAJ@Z @ 0x180571D7C (--$SwitchItemInitializationError@AEAJ@MultitaskingViewTelemetry@@SAXAEAJ@Z.c)
 *     ??$SwitchItemLoadError@AEAJ@MultitaskingViewTelemetry@@SAXAEAJ@Z @ 0x180571E18 (--$SwitchItemLoadError@AEAJ@MultitaskingViewTelemetry@@SAXAEAJ@Z.c)
 *     ??$SwitchItemInvoked@AEA_KHPEAG@MultitaskingViewTelemetry@@SAXAEA_K$$QEAH$$QEAPEAG@Z @ 0x180589F5C (--$SwitchItemInvoked@AEA_KHPEAG@MultitaskingViewTelemetry@@SAXAEA_K$$QEAH$$QEAPEAG@Z.c)
 *     ??$VirtualDesktopScrollingChanged@AEA_NH@MultitaskingViewTelemetry@@SAXAEA_N$$QEAH@Z @ 0x180591138 (--$VirtualDesktopScrollingChanged@AEA_NH@MultitaskingViewTelemetry@@SAXAEA_N$$QEAH@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800173DC (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C3614 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

char __fastcall MultitaskingViewTelemetry::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( __std_init_once_begin_initialize(&`MultitaskingViewTelemetry::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5)
    && v4 )
  {
    v2 = &`MultitaskingViewTelemetry::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_18098EA08;
    qword_18098EA08 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}
