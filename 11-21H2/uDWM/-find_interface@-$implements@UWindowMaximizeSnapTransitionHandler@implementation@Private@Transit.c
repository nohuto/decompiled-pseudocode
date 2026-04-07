/*
 * XREFs of ?find_interface@?$implements@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800079A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler,winrt::Udwm::Transitions::Private::WindowMaximizeSnapTransitionHandler>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *a2 - winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionHandler>;
  if ( *a2 == winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionHandler> )
    v2 = a2[1] + 0x339BEF0A3E5A7575LL;
  v3 = 0LL;
  if ( !v2 )
    return (a1 + 16) & -(__int64)(a1 != 0);
  return v3;
}
