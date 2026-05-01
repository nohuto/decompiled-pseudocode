/*
 * XREFs of ?IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z @ 0x18067B720
 * Callers:
 *     ??$SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect@AEBURect@Foundation@Windows@winrt@@@SnapFlyoutTelemetry@@SAXAEBURect@Foundation@Windows@winrt@@@Z @ 0x18022C0B0 (--$SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect@AEBURect@Foundation@Windows@winrt@@@Snap.c)
 *     ??$SnapFlyoutInvoke@AEBW4InvocationSource@SnapFlyoutTelemetry@@@SnapFlyoutTelemetry@@SAXAEBW4InvocationSource@0@@Z @ 0x1806784E0 (--$SnapFlyoutInvoke@AEBW4InvocationSource@SnapFlyoutTelemetry@@@SnapFlyoutTelemetry@@SAXAEBW4Inv.c)
 *     ??$SnapFlyoutInstance_CalculateFlyoutBounds@AEAURect@Foundation@Windows@winrt@@AEAW4FlyoutBoundsSource@SnapComponentTelemetry@@@SnapFlyoutTelemetry@@SAXAEAURect@Foundation@Windows@winrt@@AEAW4FlyoutBoundsSource@SnapComponentTelemetry@@@Z @ 0x18068D09C (--$SnapFlyoutInstance_CalculateFlyoutBounds@AEAURect@Foundation@Windows@winrt@@AEAW4FlyoutBounds.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800173DC (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C3614 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

char __fastcall SnapFlyoutTelemetry::IsEnabled(char a1)
{
  union _RTL_RUN_ONCE *v2; // [rsp+20h] [rbp-18h] BYREF
  int v3; // [rsp+28h] [rbp-10h]
  WINBOOL v4; // [rsp+40h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v4) = a1;
  v5 = 0LL;
  if ( __std_init_once_begin_initialize(&`SnapFlyoutTelemetry::Instance'::`2'::wrapper, 0, &v4, (LPVOID *)&v5) && v4 )
  {
    v2 = &`SnapFlyoutTelemetry::Instance'::`2'::wrapper;
    v5 = (wil::TraceLoggingProvider *)&qword_18098EBE8;
    qword_18098EBE8 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_9927b359eceb7275e94a8a7346ff996f_::_lambda_invoker_cdecl_);
    v3 = 0;
    wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v2);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v5, 0);
}
