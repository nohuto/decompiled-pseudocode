/*
 * XREFs of ?find_interface@?$implements@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIScreenRotationResponsiveTransitionHandler@3456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800F6D80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::Private::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::Private::IScreenRotationResponsiveTransitionHandler>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = *a2 - winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionHandler>;
  if ( *a2 == winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionHandler> )
    v2 = a2[1] + 0x339BEF0A3E5A7575LL;
  v3 = 0LL;
  if ( !v2 )
  {
    v4 = a1 + 16;
    return v4 & -(__int64)(a1 != 0);
  }
  v5 = *a2 - winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IScreenRotationResponsiveTransitionHandler>;
  if ( *a2 == winrt::impl::guid_v<winrt::Udwm::Transitions::Private::IScreenRotationResponsiveTransitionHandler> )
    v5 = a2[1] + 0x2827B3E4AC80C241LL;
  if ( !v5 )
  {
    v4 = a1 + 24;
    return v4 & -(__int64)(a1 != 0);
  }
  return v3;
}
