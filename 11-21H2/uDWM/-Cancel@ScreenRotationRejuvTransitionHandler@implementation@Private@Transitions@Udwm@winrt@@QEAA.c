/*
 * XREFs of ?Cancel@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18003FDCC
 * Callers:
 *     ?Cancel@?$produce@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x18003FDA0 (-Cancel@-$produce@UScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@.c)
 *     ??1ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F3660 (--1ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?OnAnimationComplete@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAAJI@Z @ 0x1800F44A0 (-OnAnimationComplete@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udw.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ReleaseTransitionState@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18003FED0 (-ReleaseTransitionState@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180040038 (--0-$shared_ptr@V-$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@deta.c)
 *     ?ensure_data@?$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@XZ @ 0x180040068 (-ensure_data@-$tip_test@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV-$s.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800401A0 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180042010 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?Captured@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAA_NXZ @ 0x180042064 (-Captured@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QE.c)
 *     ?StopAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x1800F5444 (-StopAnimation@ScreenRotationRejuvTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::Cancel(
        CBaseObject **this)
{
  _QWORD *v2; // rbx
  CBaseObject *v3; // rcx
  CBaseObject *v4; // rcx
  void **v5; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v6[24]; // [rsp+28h] [rbp-40h] BYREF
  int v7; // [rsp+40h] [rbp-28h]
  char v8[8]; // [rsp+50h] [rbp-18h] BYREF
  std::_Ref_count_base *v9; // [rsp+58h] [rbp-10h]

  v2 = (_QWORD *)tip::tip_test<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>::ensure_data(this + 17);
  v5 = &tip::test_watcher<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v6,
    (struct wil::details::IFailureCallback *)&v5,
    0LL,
    *v2 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>(
    v8,
    v2);
  if ( winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::Captured((winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *)this) )
    winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::StopAnimation((winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *)this);
  *((_BYTE *)this + 76) = 0;
  *((_BYTE *)this + 108) = 0;
  *((_BYTE *)this + 116) = 0;
  v3 = this[6];
  this[6] = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  v4 = this[7];
  this[7] = 0LL;
  if ( v4 )
    CBaseObject::Release((CBaseObject *)((char *)v4 + 8));
  winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::ReleaseTransitionState((winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler *)this);
  if ( v9 )
    std::_Ref_count_base::_Decref(v9);
  if ( v7 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v6);
}
