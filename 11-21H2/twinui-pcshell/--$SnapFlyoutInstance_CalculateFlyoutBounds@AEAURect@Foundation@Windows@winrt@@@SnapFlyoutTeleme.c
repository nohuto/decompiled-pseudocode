/*
 * XREFs of ??$SnapFlyoutInstance_CalculateFlyoutBounds@AEAURect@Foundation@Windows@winrt@@@SnapFlyoutTelemetry@@SAXAEAURect@Foundation@Windows@winrt@@@Z @ 0x1805B71CC
 * Callers:
 *     ?CalculateFlyoutBounds@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@CA?AURect@Foundation@67@PEAUHMONITOR__@@AEBUFrameworkElement@Xaml@UI@67@PEAUHWND__@@_NAEBU8967@@Z @ 0x1805B87B8 (-CalculateFlyoutBounds@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@wi.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800C50A0 (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     ?IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z @ 0x1805AFAB0 (-IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z.c)
 *     ?SnapFlyoutInstance_CalculateFlyoutBounds_@SnapFlyoutTelemetry@@QEBAXAEAURect@Foundation@Windows@winrt@@@Z @ 0x1805BAA30 (-SnapFlyoutInstance_CalculateFlyoutBounds_@SnapFlyoutTelemetry@@QEBAXAEAURect@Foundation@Windows.c)
 */

void __fastcall SnapFlyoutTelemetry::SnapFlyoutInstance_CalculateFlyoutBounds<winrt::Windows::Foundation::Rect &>(
        struct winrt::Windows::Foundation::Rect *a1)
{
  SnapFlyoutTelemetry *v2; // rcx
  union _RTL_RUN_ONCE *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+48h] [rbp+10h] BYREF
  LPVOID Context; // [rsp+50h] [rbp+18h] BYREF

  if ( SnapFlyoutTelemetry::IsEnabled((char)a1) )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`SnapFlyoutTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v3 = &`SnapFlyoutTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1807B4728;
        qword_1807B4728 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_9927b359eceb7275e94a8a7346ff996f_::_lambda_invoker_cdecl_);
        v4 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v3);
      }
    }
    SnapFlyoutTelemetry::SnapFlyoutInstance_CalculateFlyoutBounds_(v2, a1);
  }
}
