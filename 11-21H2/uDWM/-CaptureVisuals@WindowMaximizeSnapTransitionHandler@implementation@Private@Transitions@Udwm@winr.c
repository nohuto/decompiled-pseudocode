/*
 * XREFs of ?CaptureVisuals@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@AEAAXW4ShellTransition@456@@Z @ 0x1800119AC
 * Callers:
 *     ?PreTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt@@QEAAXW4ShellTransition@456@AEBUTransitionState@456@@Z @ 0x18003F290 (-PreTransition@WindowMaximizeSnapTransitionHandler@implementation@Private@Transitions@Udwm@winrt.c)
 * Callees:
 *     ?GetAbsoluteWindowRect@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA?AURect@Foundation@Windows@3@XZ @ 0x180011B5C (-GetAbsoluteWindowRect@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWra.c)
 *     ?BeginRect@?$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisualWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBAXAEBURect@Foundation@Windows@3@@Z @ 0x180011BA4 (-BeginRect@-$consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper@UIAnimatedTransitionVisua.c)
 *     ?CreateAndInsertSnapshotVisual@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA?AUAnimatedTransitionVisualWrapper@Transitions@Udwm@3@AEBUTopLevelWindow3DWrapper@563@@Z @ 0x180011BE8 (-CreateAndInsertSnapshotVisual@-$consume_Udwm_Transitions_ITransitionState@UITransitionState@Tra.c)
 *     ?TransferTransitionVisualAndAnimationEngine@?$consume_Udwm_Transitions_ITransitionState@UITransitionState@Transitions@Udwm@winrt@@@impl@winrt@@QEBA?AUTopLevelWindow3DWrapper@Transitions@Udwm@3@XZ @ 0x180011C40 (-TransferTransitionVisualAndAnimationEngine@-$consume_Udwm_Transitions_ITransitionState@UITransi.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180037B78 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@XZ @ 0x18003F594 (-ensure_data@-$tip_test@U_tip_WindowMaximizeSnapTest@Tip@Private@Transitions@Udwm@@@tip@@AEBAAEA.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180040038 (--0-$shared_ptr@V-$test_merged_data@U_tip_ScreenRotationTest@Tip@Private@Transitions@Udwm@@@deta.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800401A0 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ??8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z @ 0x180040770 (--8Foundation@Windows@winrt@@YA_NAEBUIUnknown@012@0@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x180040BB0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180042010 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800D3CDC (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?SkipRestoreFromMaximizeTransition@?$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLevelWindow3DWrapper@Transitions@Udwm@winrt@@@impl@winrt@@QEBA_NXZ @ 0x1800F768C (-SkipRestoreFromMaximizeTransition@-$consume_Udwm_Transitions_ITopLevelWindow3DWrapper@UITopLeve.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Udwm::Transitions::Private::implementation::WindowMaximizeSnapTransitionHandler::CaptureVisuals(
        __int64 a1,
        int a2)
{
  _QWORD *v4; // rbx
  __int64 *v5; // rdi
  __int64 *v6; // rbx
  __int64 v7; // rax
  float *AbsoluteWindowRect; // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 *inserted; // rsi
  _QWORD *v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  __int128 v15; // [rsp+28h] [rbp-29h] BYREF
  __int64 v16; // [rsp+38h] [rbp-19h]
  char v17; // [rsp+40h] [rbp-11h]
  _BYTE v18[16]; // [rsp+48h] [rbp-9h] BYREF
  void **v19; // [rsp+58h] [rbp+7h] BYREF
  _BYTE v20[24]; // [rsp+60h] [rbp+Fh] BYREF
  int v21; // [rsp+78h] [rbp+27h]
  _BYTE v22[8]; // [rsp+88h] [rbp+37h] BYREF
  std::_Ref_count_base *v23; // [rsp+90h] [rbp+3Fh]
  __int64 v24; // [rsp+B8h] [rbp+67h] BYREF

  v4 = (_QWORD *)tip::tip_test<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::ensure_data(a1 + 96);
  v19 = &tip::test_watcher<Udwm::Transitions::Private::Tip::_tip_WindowMaximizeSnapTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v20,
    (struct wil::details::IFailureCallback *)&v19,
    0LL,
    *v4 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>::shared_ptr<tip::details::test_merged_data<Udwm::Transitions::Private::Tip::_tip_ScreenRotationTest>>(
    v22,
    v4);
  v16 = a1;
  v17 = 1;
  v5 = (__int64 *)winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::TransferTransitionVisualAndAnimationEngine(
                    a1 + 24,
                    &v24);
  v6 = (__int64 *)(a1 + 32);
  if ( (__int64 *)(a1 + 32) != v5 )
  {
    if ( *v6 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 32));
    v7 = *v5;
    *v5 = 0LL;
    *v6 = v7;
  }
  if ( v24 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
  if ( a2 != 2 )
  {
    if ( a2 != 3
      || !(unsigned __int8)winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::SkipRestoreFromMaximizeTransition(a1 + 32) )
    {
      goto LABEL_10;
    }
    goto LABEL_30;
  }
  AbsoluteWindowRect = (float *)winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::GetAbsoluteWindowRect(
                                  a1 + 32,
                                  v18);
  v15 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)*v6 + 48LL))(*v6, &v15);
  if ( v9 < 0 )
    winrt::throw_hresult((unsigned int)v9);
  if ( *(float *)&v15 == *AbsoluteWindowRect
    && *((float *)&v15 + 1) == AbsoluteWindowRect[1]
    && *((float *)&v15 + 2) == AbsoluteWindowRect[2]
    && *((float *)&v15 + 3) == AbsoluteWindowRect[3] )
  {
LABEL_30:
    LOBYTE(v10) = a2 == 2;
    v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)*v6 + 64LL))(*v6, v10);
    if ( v14 < 0 )
      winrt::throw_hresult((unsigned int)v14);
    if ( v6 != &v24 )
    {
      if ( *v6 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 32));
      *v6 = 0LL;
    }
  }
LABEL_10:
  v24 = 0LL;
  if ( !(unsigned __int8)winrt::Windows::Foundation::operator==(a1 + 32, &v24) )
  {
    inserted = (__int64 *)winrt::impl::consume_Udwm_Transitions_ITransitionState<winrt::Udwm::Transitions::ITransitionState>::CreateAndInsertSnapshotVisual(
                            a1 + 24,
                            &v24,
                            a1 + 32);
    v12 = (_QWORD *)(a1 + 40);
    if ( (__int64 *)(a1 + 40) != inserted )
    {
      if ( *v12 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)(a1 + 40));
      v13 = *inserted;
      *inserted = 0LL;
      *v12 = v13;
    }
    if ( v24 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
    *(_OWORD *)(a1 + 76) = *(_OWORD *)winrt::impl::consume_Udwm_Transitions_ITopLevelWindow3DWrapper<winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::GetAbsoluteWindowRect(
                                        a1 + 32,
                                        v18);
    winrt::impl::consume_Udwm_Transitions_IAnimatedTransitionVisualWrapper<winrt::Udwm::Transitions::IAnimatedTransitionVisualWrapper>::BeginRect(a1 + 40);
  }
  if ( v23 )
    std::_Ref_count_base::_Decref(v23);
  if ( v21 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v20);
}
