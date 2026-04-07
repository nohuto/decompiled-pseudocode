/*
 * XREFs of ?Cancel@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x1800121F8
 * Callers:
 *     ?PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18003EF80 (-PostTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winr.c)
 *     ??1WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ @ 0x1800F73F4 (--1WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UEAA@XZ.c)
 *     ?Cancel@?$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@UITransitionHandler@456@@impl@winrt@@UEAAHXZ @ 0x1800F7560 (-Cancel@-$produce@UWindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@w.c)
 * Callees:
 *     ?OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x180012304 (-OnPositionAnimationComplete@WindowMaximizeSnapTransitionHandler@implementation@Private@Transiti.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@XZ @ 0x18003F594 (-ensure_data@-$tip_test@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEA.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180040038 (--0-$shared_ptr@V-$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@deta.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800401A0 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180040770 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180042010 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::Cancel(
        winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler *this)
{
  char v2; // r14
  _QWORD *v3; // rbx
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  char v7; // si
  int v8; // eax
  int v9; // eax
  void **v10; // [rsp+20h] [rbp-40h] BYREF
  _BYTE v11[24]; // [rsp+28h] [rbp-38h] BYREF
  int v12; // [rsp+40h] [rbp-20h]
  _BYTE v13[8]; // [rsp+50h] [rbp-10h] BYREF
  std::_Ref_count_base *v14; // [rsp+58h] [rbp-8h]
  __int64 v15; // [rsp+80h] [rbp+20h] BYREF

  v2 = 0;
  LODWORD(v15) = 0;
  v3 = (_QWORD *)tip::tip_test<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::ensure_data((char *)this + 96);
  v10 = &tip::test_watcher<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v11,
    (struct wil::details::IFailureCallback *)&v10,
    0LL,
    *v3 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>(
    v13,
    v3);
  v15 = 0LL;
  if ( !(unsigned __int8)winrt::Windows::Foundation::operator==((char *)this + 32, &v15) )
  {
    v4 = **((_QWORD **)this + 4);
    if ( *((_BYTE *)this + 72) )
    {
      v8 = (*(__int64 (**)(void))(v4 + 96))();
      if ( v8 < 0 )
        winrt::throw_hresult((unsigned int)v8);
    }
    else
    {
      v5 = (*(__int64 (**)(void))(v4 + 104))();
      if ( v5 < 0 )
        winrt::throw_hresult((unsigned int)v5);
    }
  }
  if ( *((_BYTE *)this + 72) )
  {
    v6 = 0LL;
    v15 = 0LL;
    v2 = 1;
    if ( !(unsigned __int8)winrt::Windows::Foundation::operator==((char *)this + 40, &v15) )
    {
      v7 = 1;
      goto LABEL_7;
    }
  }
  else
  {
    v6 = v15;
  }
  v7 = 0;
LABEL_7:
  if ( (v2 & 1) != 0 && v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  if ( v7 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 120LL))(*((_QWORD *)this + 5));
    if ( v9 < 0 )
      winrt::throw_hresult((unsigned int)v9);
  }
  *((_BYTE *)this + 72) = 0;
  winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::OnPositionAnimationComplete(this);
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  if ( v12 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v11);
}
