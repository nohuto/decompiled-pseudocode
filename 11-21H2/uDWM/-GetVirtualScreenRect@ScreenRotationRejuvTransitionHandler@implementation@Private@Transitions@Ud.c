/*
 * XREFs of ?GetVirtualScreenRect@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEBA?AUtagRECT@@XZ @ 0x1800F416C
 * Callers:
 *     ?Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F3A98 (-Capture@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEA.c)
 *     ?PrepareForFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800F4938 (-PrepareForFirstAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transition.c)
 *     ?StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F4E6C (-StartSecondAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Ud.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800141A0 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$as@UITransitionStateNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionStateNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800F266C (--$as@UITransitionStateNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@.c)
 */

// Hidden C++ exception states: #wind=1
struct tagRECT *__fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::GetVirtualScreenRect(
        winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *this,
        struct tagRECT *__return_ptr retstr)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  winrt::impl::as<Udwm::Transitions::ITransitionStateNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v4,
    *((__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))this + 5));
  (*(void (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v4 + 88LL))(v4, retstr);
  winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(&v4);
  return retstr;
}
