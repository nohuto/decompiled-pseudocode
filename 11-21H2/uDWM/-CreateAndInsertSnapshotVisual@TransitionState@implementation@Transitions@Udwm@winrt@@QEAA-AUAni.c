/*
 * XREFs of ?CreateAndInsertSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUAnimatedTransitionVisualWrapper@345@UTopLevelWindow3DWrapper@345@@Z @ 0x1800448B4
 * Callers:
 *     ?CreateAndInsertSnapshotVisual@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x180013340 (-CreateAndInsertSnapshotVisual@-$produce@UTransitionState@implementation@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x1800126F8 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800141A0 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$as@UITransitionAnimationVisualNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800442B0 (--$as@UITransitionAnimationVisualNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windo.c)
 *     ??$make@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWindow3D@@@winrt@@YA?AUAnimatedTransitionVisualWrapper@Transitions@Udwm@0@$$QEAPEAVCTopLevelWindow3D@@@Z @ 0x18004497C (--$make@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWin.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Foundation::IUnknown *__fastcall winrt::Udwm::Transitions::implementation::TransitionState::CreateAndInsertSnapshotVisual(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  winrt::Windows::Foundation::IUnknown *v6; // r14
  winrt::Windows::Foundation::IUnknown *v7; // rbx
  __int64 v8; // rcx
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  winrt::Windows::Foundation::IUnknown *v11; // [rsp+58h] [rbp+10h] BYREF
  winrt::Windows::Foundation::IUnknown *v12; // [rsp+60h] [rbp+18h]
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v12 = a3;
  v11 = a2;
  winrt::impl::as<Udwm::Transitions::ITransitionAnimationVisualNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v10,
    *(__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 104));
  v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 56LL))(v10);
  v6 = (winrt::Windows::Foundation::IUnknown *)winrt::make<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,CTopLevelWindow3D *>(
                                                 &v11,
                                                 &v13);
  v7 = (winrt::Windows::Foundation::IUnknown *)(a1 + 112);
  if ( v7 != v6 )
  {
    if ( *(_QWORD *)v7 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v7);
    v8 = *(_QWORD *)v6;
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)v7 = v8;
  }
  if ( v11 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
  *(_QWORD *)a2 = *(_QWORD *)v7;
  winrt::Windows::Foundation::IUnknown::add_ref(a2);
  winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(&v10);
  if ( *(_QWORD *)a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a3);
  return a2;
}
