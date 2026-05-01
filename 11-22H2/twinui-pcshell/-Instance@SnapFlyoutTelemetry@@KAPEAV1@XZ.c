/*
 * XREFs of ?Instance@SnapFlyoutTelemetry@@KAPEAV1@XZ @ 0x18067AD3C
 * Callers:
 *     ??$SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect@AEBURect@Foundation@Windows@winrt@@@SnapFlyoutTelemetry@@SAXAEBURect@Foundation@Windows@winrt@@@Z @ 0x18022C0B0 (--$SnapFlyoutInstance_TitlebarInfoMsgMaximizeButtonRect@AEBURect@Foundation@Windows@winrt@@@Snap.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800173DC (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 */

struct SnapFlyoutTelemetry *SnapFlyoutTelemetry::Instance(void)
{
  union _RTL_RUN_ONCE *v1; // [rsp+20h] [rbp-18h] BYREF
  int v2; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  Context = 0LL;
  if ( __std_init_once_begin_initialize(&`SnapFlyoutTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    v1 = &`SnapFlyoutTelemetry::Instance'::`2'::wrapper;
    Context = &qword_18098EBE8;
    qword_18098EBE8 = (__int64)&IamTraceLogging::`vftable';
    atexit(_lambda_9927b359eceb7275e94a8a7346ff996f_::_lambda_invoker_cdecl_);
    v2 = 0;
    wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v1);
  }
  return (struct SnapFlyoutTelemetry *)Context;
}
