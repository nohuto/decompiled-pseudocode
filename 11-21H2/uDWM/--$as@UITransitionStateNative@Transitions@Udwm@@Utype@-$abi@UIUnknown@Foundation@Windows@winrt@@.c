/*
 * XREFs of ??$as@UITransitionStateNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionStateNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800F266C
 * Callers:
 *     ?UpdateScene@?$produce@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x18000A020 (-UpdateScene@-$produce@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@.c)
 *     ?Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F3A98 (-Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?GetVirtualScreenRect@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEBA?AUtagRECT@@XZ @ 0x1800F416C (-GetVirtualScreenRect@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Ud.c)
 *     ?SetBlurEffect@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXAEAV?$com_ptr_t@VCAnimatedTransitionVisual@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800F4A94 (-SetBlurEffect@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ?StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4E6C (-StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Ud.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::as<Udwm::Transitions::ITransitionStateNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, __int64 *, __int64 *))
{
  signed int v3; // eax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = 0LL;
    v3 = (**a2)(a2, &winrt::impl::guid_v<Udwm::Transitions::ITransitionStateNative>, &v5);
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
