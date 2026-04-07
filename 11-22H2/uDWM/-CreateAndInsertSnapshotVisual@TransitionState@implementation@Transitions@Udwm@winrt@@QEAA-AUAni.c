/*
 * XREFs of ?CreateAndInsertSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUAnimatedTransitionVisualWrapper@345@UTopLevelWindow3DWrapper@345@@Z @ 0x180101734
 * Callers:
 *     ?CreateAndInsertSnapshotVisual@?$produce@UTransitionState@implementation@Transitions@Udwm@winrt@@UITransitionState@345@@impl@winrt@@UEAAHPEAXPEAPEAX@Z @ 0x180101690 (-CreateAndInsertSnapshotVisual@-$produce@UTransitionState@implementation@Transitions@Udwm@winrt@.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x18002FA10 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180056D18 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@@AEAAXXZ @ 0x1800F4054 (-unconditional_release_ref@-$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@winrt@.c)
 *     ??$as@UITransitionAnimationVisualNative@Transitions@Udwm@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@$0A@@impl@winrt@@YA?AU?$com_ptr@UITransitionAnimationVisualNative@Transitions@Udwm@@@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1800F73C8 (--$as@UITransitionAnimationVisualNative@Transitions@Udwm@@Utype@-$abi@UIUnknown@Foundation@Windo.c)
 *     ??$make@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWindow3D@@@winrt@@YA?A_P$$QEAPEAVCTopLevelWindow3D@@@Z @ 0x180100BDC (--$make@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWin.c)
 */

// Hidden C++ exception states: #wind=2
winrt::Windows::Foundation::IUnknown *__fastcall winrt::Udwm::Transitions::implementation::TransitionState::CreateAndInsertSnapshotVisual(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        winrt::Windows::Foundation::IUnknown *a3)
{
  __int64 v6; // rbx
  unsigned __int64 *v7; // r14
  winrt::Windows::Foundation::IUnknown *v8; // rdi
  unsigned __int64 v9; // rcx
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  winrt::Windows::Foundation::IUnknown *v12; // [rsp+68h] [rbp+10h] BYREF
  winrt::Windows::Foundation::IUnknown *v13; // [rsp+70h] [rbp+18h]
  struct CTopLevelWindow3D *v14; // [rsp+78h] [rbp+20h] BYREF

  v13 = a3;
  v12 = a2;
  winrt::impl::as<Udwm::Transitions::ITransitionAnimationVisualNative,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v11,
    *(__int64 (__fastcall ****)(_QWORD, __int64 *, __int64 *))(a1 + 104));
  v6 = v11;
  v14 = (struct CTopLevelWindow3D *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 56LL))(v11);
  v7 = winrt::make<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,CTopLevelWindow3D *>(
         (unsigned __int64 *)&v12,
         &v14);
  v8 = (winrt::Windows::Foundation::IUnknown *)(a1 + 112);
  if ( v8 != (winrt::Windows::Foundation::IUnknown *)v7 )
  {
    if ( *(_QWORD *)v8 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v8);
    v9 = *v7;
    *v7 = 0LL;
    *(_QWORD *)v8 = v9;
  }
  if ( v12 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  *(_QWORD *)a2 = *(_QWORD *)v8;
  winrt::Windows::Foundation::IUnknown::add_ref(a2);
  if ( v6 )
    winrt::com_ptr<Udwm::Transitions::ITransitionAnimationVisualNative>::unconditional_release_ref(&v11);
  if ( *(_QWORD *)a3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a3);
  return a2;
}
