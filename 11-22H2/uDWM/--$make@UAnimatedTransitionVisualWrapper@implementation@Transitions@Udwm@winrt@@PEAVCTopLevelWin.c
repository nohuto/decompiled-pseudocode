/*
 * XREFs of ??$make@UAnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@PEAVCTopLevelWindow3D@@@winrt@@YA?A_P$$QEAPEAVCTopLevelWindow3D@@@Z @ 0x180100BDC
 * Callers:
 *     ?CreateAndInsertSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA?AUAnimatedTransitionVisualWrapper@345@UTopLevelWindow3DWrapper@345@@Z @ 0x180101734 (-CreateAndInsertSnapshotVisual@TransitionState@implementation@Transitions@Udwm@winrt@@QEAA-AUAni.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWindow3D@@@Z @ 0x1800ECFD0 (--0AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA@PEAVCTopLevelWind.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 *__fastcall winrt::make<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,CTopLevelWindow3D *>(
        unsigned __int64 *a1,
        struct CTopLevelWindow3D **a2)
{
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *v4; // rax
  winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *v5; // rbx

  v4 = (winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper *)(*(__int64 (__fastcall **)(WPF::HeapBase *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                                                      WPF::g_pProcessHeap,
                                                                                      64LL);
  v5 = v4;
  if ( v4 )
  {
    winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::AnimatedTransitionVisualWrapper(v4, *a2);
    *(_QWORD *)v5 = &winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper::`vftable'{for `winrt::impl::producers_base<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,std::tuple<winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>>'};
    *((_QWORD *)v5 + 2) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>::`vftable'{for `winrt::impl::root_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper,winrt::Udwm::Transitions::AnimatedTransitionVisualWrapper,Udwm::Transitions::ITransitionAnimationVisualNative>'};
    *((_QWORD *)v5 + 4) = &winrt::impl::heap_implements<winrt::Udwm::Transitions::implementation::AnimatedTransitionVisualWrapper>::`vftable';
  }
  else
  {
    v5 = 0LL;
  }
  *a1 = ((unsigned __int64)v5 + 8) & -(__int64)(v5 != 0LL);
  return a1;
}
