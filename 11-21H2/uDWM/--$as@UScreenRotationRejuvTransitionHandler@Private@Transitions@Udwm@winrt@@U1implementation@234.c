/*
 * XREFs of ??$as@UScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@winrt@@U1implementation@2345@$0A@@impl@winrt@@YA?AUScreenRotationRejuvTransitionHandler@Private@Transitions@Udwm@1@PEAU2implementation@3451@@Z @ 0x1800F26D4
 * Callers:
 *     ?CreateTimeline@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXAEBW4RejuvRotationTimelineReason@23456@@Z @ 0x1800F3D88 (-CreateTimeline@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@win.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?query_interface@?$root_implements@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@U13456@UIScreenRotationRejuvTransitionHandler@3456@@impl@winrt@@AEAAHAEBUguid@3@PEAPEAX@Z @ 0x1800F6488 (-query_interface@-$root_implements@UScreenRotationRejuvTransitionHandler@implementation@Private@.c)
 */

_QWORD *__fastcall winrt::impl::as<winrt::Udwm::Transitions::Private::ScreenRotationRejuvTransitionHandler,winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,0>(
        _QWORD *a1,
        __int64 a2)
{
  signed int v3; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = winrt::impl::root_implements<winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler,winrt::Udwm::Transitions::Private::ScreenRotationRejuvTransitionHandler,winrt::Udwm::Transitions::Private::IScreenRotationRejuvTransitionHandler>::query_interface(
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
