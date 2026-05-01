/*
 * XREFs of ??$SnapFlyoutInstance_CalculateFlyoutBounds@AEAURect@Foundation@Windows@winrt@@AEAW4FlyoutBoundsSource@SnapComponentTelemetry@@@SnapFlyoutTelemetry@@SAXAEAURect@Foundation@Windows@winrt@@AEAW4FlyoutBoundsSource@SnapComponentTelemetry@@@Z @ 0x18068D09C
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_ResumeCoro$1 @ 0x18022C660 (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance-_ea_18022C660.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ @ 0x1800173DC (--1Completer@-$static_lazy@VTabletModeTelemetry@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x1801C6CEC (atexit.c)
 *     ?IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z @ 0x18067B720 (-IsEnabled@SnapFlyoutTelemetry@@SA_NE_K@Z.c)
 *     ?SnapFlyoutInstance_CalculateFlyoutBounds_@SnapFlyoutTelemetry@@QEBAXAEAURect@Foundation@Windows@winrt@@W4FlyoutBoundsSource@SnapComponentTelemetry@@@Z @ 0x1806917BC (-SnapFlyoutInstance_CalculateFlyoutBounds_@SnapFlyoutTelemetry@@QEBAXAEAURect@Foundation@Windows.c)
 */

char __fastcall SnapFlyoutTelemetry::SnapFlyoutInstance_CalculateFlyoutBounds<winrt::Windows::Foundation::Rect &,enum SnapComponentTelemetry::FlyoutBoundsSource &>(
        __int64 a1,
        unsigned int *a2)
{
  char result; // al
  __int64 v5; // rcx
  union _RTL_RUN_ONCE *v6; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+20h] BYREF

  result = SnapFlyoutTelemetry::IsEnabled(a1);
  if ( result )
  {
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`SnapFlyoutTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context) )
    {
      if ( fPending )
      {
        v6 = &`SnapFlyoutTelemetry::Instance'::`2'::wrapper;
        Context = &qword_18098EBE8;
        qword_18098EBE8 = (__int64)&IamTraceLogging::`vftable';
        atexit(_lambda_9927b359eceb7275e94a8a7346ff996f_::_lambda_invoker_cdecl_);
        v7 = 0;
        wil::details::static_lazy<TabletModeTelemetry>::Completer::~Completer((__int64)&v6);
      }
    }
    return SnapFlyoutTelemetry::SnapFlyoutInstance_CalculateFlyoutBounds_(v5, a1, *a2);
  }
  return result;
}
