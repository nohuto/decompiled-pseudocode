/*
 * XREFs of ?OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180012304
 * Callers:
 *     winrt::impl::delegate_winrt::Udwm::Transitions::AnimationCompletedHandler__lambda_298ff7ed3f48e3f8f0577bc4e02d17e0___::Invoke @ 0x180007910 (winrt--impl--delegate_winrt--Udwm--Transitions--AnimationCompletedHandler__lambda_298ff7ed3f48e3.c)
 *     ?Cancel@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800121F8 (-Cancel@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAX.c)
 * Callees:
 *     ?Release@CAnimationResource@@UEAAKXZ @ 0x180002660 (-Release@CAnimationResource@@UEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?CompleteState@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18003F454 (-CompleteState@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 *     ?ensure_data@?$tip_test@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@XZ @ 0x18003F594 (-ensure_data@-$tip_test@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEA.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180040038 (--0-$shared_ptr@V-$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@deta.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800401A0 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180042010 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::OnPositionAnimationComplete(
        winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rbx
  CAnimationResource *v4; // rcx
  _QWORD *v5; // rbx
  void **v6; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v7[24]; // [rsp+28h] [rbp-40h] BYREF
  int v8; // [rsp+40h] [rbp-28h]
  _BYTE v9[8]; // [rsp+50h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+58h] [rbp-10h]
  char v11; // [rsp+70h] [rbp+8h] BYREF

  v2 = (_QWORD *)tip::tip_test<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::ensure_data((char *)this + 96);
  v6 = &tip::test_watcher<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v7,
    (struct wil::details::IFailureCallback *)&v6,
    0LL,
    *v2 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>(
    v9,
    v2);
  v3 = (_QWORD *)((char *)this + 32);
  if ( (char *)this + 32 != &v11 )
  {
    if ( *v3 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *)((char *)this + 32));
    *v3 = 0LL;
  }
  v4 = (CAnimationResource *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v4 )
    CAnimationResource::Release(v4);
  v5 = (_QWORD *)((char *)this + 40);
  if ( (char *)this + 40 != &v11 )
  {
    if ( *v5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *)((char *)this + 40));
    *v5 = 0LL;
  }
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::CompleteState(this);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  if ( v8 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v7);
}
