/*
 * XREFs of ?PreTransitionWithNativeWindow@TransitionManager@implementation@Transitions@Udwm@winrt@@UEAAJPEAVCTopLevelWindow3D@@W4ShellTransition@345@@Z @ 0x18003F600
 * Callers:
 *     <none>
 * Callees:
 *     ?PreTransition@?$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXAEBW4ShellTransition@Transitions@Udwm@3@AEBUTransitionState@563@@Z @ 0x180013D58 (-PreTransition@-$consume_Udwm_Transitions_ITransitionHandler@UITransitionHandler@Transitions@Udw.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800141A0 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA?AUITransitionHandler@345@W4ShellTransition@345@@Z @ 0x180040C14 (-GetHandler@TransitionManager@implementation@Transitions@Udwm@winrt@@AEAA-AUITransitionHandler@3.c)
 *     ??$as@UITransitionStateNativePrivate@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionStateNativePrivate@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180044464 (--$as@UITransitionStateNativePrivate@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windows@.c)
 *     ??$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA?AUTransitionState@Transitions@Udwm@0@XZ @ 0x180044C10 (--$make@UTransitionState@implementation@Transitions@Udwm@winrt@@$$V@winrt@@YA-AUTransitionState@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall winrt::Udwm::Transitions::implementation::TransitionManager::PreTransitionWithNativeWindow(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  const char *v4; // r9
  __int64 result; // rax
  __int64 v6; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7[2]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF
  __int64 v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = a3;
  winrt::Udwm::Transitions::implementation::TransitionManager::GetHandler(a1, &v6, a3);
  try
  {
    if ( v6 )
    {
      winrt::make<winrt::Udwm::Transitions::implementation::TransitionState,>(&v10);
      winrt::impl::as<Udwm::Transitions::ITransitionStateNativePrivate,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
        v7,
        v10);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7[0] + 48LL))(v7[0], a2);
      winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(v7);
      winrt::impl::consume_Udwm_Transitions_ITransitionHandler<winrt::Udwm::Transitions::ITransitionHandler>::PreTransition(
        &v6,
        &v9,
        &v10);
      if ( v10 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
    }
    if ( v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x7C,
                           (unsigned int)"clientcore\\windows\\dwm\\udwm\\udwm.transitions.transitionmanager.cpp",
                           v4);
  }
  return result;
}
