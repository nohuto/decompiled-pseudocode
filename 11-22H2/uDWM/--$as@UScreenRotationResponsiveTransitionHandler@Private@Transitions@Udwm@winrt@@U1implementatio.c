/*
 * XREFs of ??$as@UScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@winrt@@U1implementation@2345@$0A@@impl@winrt@@YA?AUScreenRotationResponsiveTransitionHandler@Private@Transitions@Udwm@1@PEAU2implementation@3451@@Z @ 0x1800F474C
 * Callers:
 *     ?DelayNextAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4ResponsiveRotationTimelineReason@23456@@Z @ 0x1800F4FA0 (-DelayNextAnimation@ScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D894C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?query_interface@?$root_implements@UScreenRotationResponsiveTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIScreenRotationResponsiveTransitionHandler@3456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F6E98 (-query_interface@-$root_implements@UScreenRotationResponsiveTransitionHandler@implementation@Pri.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Udwm::Transitions::Private::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,0>(
        _QWORD *a1,
        __int64 a2)
{
  signed int v3; // eax
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::Private::ScreenRotationResponsiveTransitionHandler,winrt::Udwm::Transitions::Private::IScreenRotationResponsiveTransitionHandler>::query_interface(
           a2,
           &winrt::impl::guid_v<winrt::Udwm::Transitions::ITransitionHandler>,
           &v5);
    if ( v3 < 0 )
      winrt::throw_hresult(v3);
    *a1 = v5;
  }
  else
  {
    *a1 = 0LL;
  }
  return a1;
}
