/*
 * XREFs of ?ShowExperience@CControlCenterExperienceManager@@AEAAJXZ @ 0x1804236E4
 * Callers:
 *     ?OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180420650 (-OnEventQueued@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING.c)
 * Callees:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18002B06C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??B?$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ @ 0x180040728 (--B-$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?has_ever_started@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x18008D6C8 (-has_ever_started@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?complete@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180095B9C (-complete@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$00@details@tip@@QEAA?AU_GUID@@XZ @ 0x180098400 (-start@-$test_common_data@$00@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?complete@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAAXXZ @ 0x1802D442C (-complete@-$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAAXXZ.c)
 *     ?ControlCenterLaunchSkippedDueToPolicy@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x18041E5F8 (-ControlCenterLaunchSkippedDueToPolicy@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ.c)
 *     ?ControlCenterLaunchSkippedDueToShellNotReady@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x18041E690 (-ControlCenterLaunchSkippedDueToShellNotReady@ControlCenterTelemetry@ControlCenterUITelemetry@@S.c)
 *     ?ControlCenterPage_PrelaunchFailed@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ @ 0x18041E7C0 (-ControlCenterPage_PrelaunchFailed@ControlCenterTelemetry@ControlCenterUITelemetry@@SAXXZ.c)
 *     ?PositionView@CControlCenterExperienceManager@@AEAAJXZ @ 0x1804217F8 (-PositionView@CControlCenterExperienceManager@@AEAAJXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_ControlCenterDisabledTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ControlCenterDisabledTest@@@details@tip@@@std@@XZ @ 0x180426AC8 (-ensure_data@-$tip_test@U_tip_ControlCenterDisabledTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merg.c)
 *     ?ensure_data@?$tip_test@U_tip_ControlCenterShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_ControlCenterShowTest@@@details@tip@@@std@@XZ @ 0x180426B14 (-ensure_data@-$tip_test@U_tip_ControlCenterShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merged_d.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CControlCenterExperienceManager::ShowExperience(CControlCenterExperienceManager *this)
{
  bool v2; // r15
  __int64 *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rbx
  std::_Ref_count_base *v6; // rsi
  __int64 v7; // rax
  _QWORD *v8; // rax
  char v9; // dl
  __int64 v10; // rcx
  __int64 *v11; // rdi
  _QWORD *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rbx
  std::_Ref_count_base *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // ebx
  __int64 *v22; // rdi
  __int64 v23; // rcx
  _QWORD *v24; // rax
  __int64 v25; // rbx
  __int64 v26; // rax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v28; // eax
  __int64 v29; // rdx
  char v30; // al
  std::_Ref_count_base *v32[2]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v33; // [rsp+30h] [rbp-40h] BYREF
  std::_Ref_count_base *v34; // [rsp+38h] [rbp-38h]
  __int64 v35; // [rsp+40h] [rbp-30h] BYREF
  std::_Ref_count_base *v36; // [rsp+48h] [rbp-28h]
  __int64 v37; // [rsp+50h] [rbp-20h] BYREF
  std::_Ref_count_base *v38; // [rsp+58h] [rbp-18h]
  __int128 v39; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  struct _FILETIME pftDueTime; // [rsp+A0h] [rbp+30h] BYREF

  if ( *((_DWORD *)this + 40) == 2 )
    return 0LL;
  *(_OWORD *)v32 = 0LL;
  v2 = (unsigned int)SHWindowsPolicy(&POLID_DisableControlCenter) != 0;
  v3 = (__int64 *)tip::tip_test<_tip_ControlCenterDisabledTest>::ensure_data(v32);
  v4 = v3[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  v5 = *v3;
  v33 = v5;
  v6 = (std::_Ref_count_base *)v3[1];
  v34 = v6;
  tip::details::test_common_data<1>::begin_update(v5 + 8);
  v7 = v5 + 184;
  if ( !v5 )
    v7 = 8LL;
  *(_BYTE *)v7 = v2;
  if ( v5 )
  {
    tip::details::test_common_data<1>::end_update(v5 + 8);
    std::shared_ptr<PeoplePaneViewInfo>::reset(&v33);
    v6 = v34;
  }
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  if ( v32[0] && tip::details::test_common_data<1>::has_ever_started((__int64)v32[0] + 8) )
    std::shared_ptr<PeoplePaneViewInfo>::reset(v32);
  v8 = (_QWORD *)tip::tip_test<_tip_ControlCenterDisabledTest>::ensure_data(v32);
  tip::details::test_common_data<1>::start(*v8 + 8LL, &v39);
  if ( (unsigned int)SHWindowsPolicy(&POLID_DisableControlCenter) )
  {
    v11 = (__int64 *)((char *)this + 768);
    if ( tip::tip_test<_tip_TouchGestureTest>::operator bool(v11) )
    {
      v12 = (_QWORD *)tip::tip_test<_tip_ControlCenterShowTest>::ensure_data(v11);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v35,
        v12);
      v13 = v35;
      tip::details::test_common_data<1>::begin_update(v35 + 8);
      v14 = v13 + 194;
      if ( !v13 )
        v14 = 18LL;
      *(_BYTE *)v14 = 1;
      if ( v13 )
      {
        tip::details::test_common_data<1>::end_update(v13 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v35);
      }
      if ( v36 )
        std::_Ref_count_base::_Decref(v36);
      tip::tip_test<_tip_NotificationCenterShowTest>::complete(v11);
    }
    v15 = (__int64 *)tip::tip_test<_tip_ControlCenterDisabledTest>::ensure_data(v32);
    v16 = v15[1];
    if ( v16 )
      _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
    v17 = *v15;
    v37 = v17;
    v18 = (std::_Ref_count_base *)v15[1];
    v38 = v18;
    tip::details::test_common_data<1>::begin_update(v17 + 8);
    v19 = v17 + 185;
    v20 = 9LL;
    if ( !v17 )
      v19 = 9LL;
    *(_BYTE *)v19 = 1;
    if ( v17 )
    {
      tip::details::test_common_data<1>::end_update(v17 + 8);
      std::shared_ptr<PeoplePaneViewInfo>::reset(&v37);
      v18 = v38;
    }
    if ( v18 )
      std::_Ref_count_base::_Decref(v18);
    ControlCenterUITelemetry::ControlCenterTelemetry::ControlCenterLaunchSkippedDueToPolicy(v20);
    v21 = -2147023636;
    goto LABEL_51;
  }
  if ( !*((_BYTE *)this + 444) )
  {
    v22 = (__int64 *)((char *)this + 768);
    if ( tip::tip_test<_tip_TouchGestureTest>::operator bool(v22) )
    {
      v24 = (_QWORD *)tip::tip_test<_tip_ControlCenterShowTest>::ensure_data(v22);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        &v37,
        v24);
      v25 = v37;
      tip::details::test_common_data<1>::begin_update(v37 + 8);
      v26 = v25 + 195;
      if ( !v25 )
        v26 = 19LL;
      *(_BYTE *)v26 = 1;
      if ( v25 )
      {
        tip::details::test_common_data<1>::end_update(v25 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(&v37);
      }
      if ( v38 )
        std::_Ref_count_base::_Decref(v38);
      tip::tip_test<_tip_NotificationCenterShowTest>::complete(v22);
    }
    ControlCenterUITelemetry::ControlCenterTelemetry::ControlCenterLaunchSkippedDueToShellNotReady(v23);
    v21 = -2147418113;
    goto LABEL_51;
  }
  if ( !*((_QWORD *)this + 80) )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(
                        (PTP_TIMER_CALLBACK)lambda_7fa9b7e674d0285f4ce406a80fa931b4_::_lambda_invoker_cdecl_,
                        this,
                        0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      (struct _TP_TIMER **)this + 80,
      ThreadpoolTimer);
    pftDueTime.dwHighDateTime = -1;
    pftDueTime.dwLowDateTime = -100000000;
    SetThreadpoolTimer(*((PTP_TIMER *)this + 80), &pftDueTime, 0, 0);
  }
  if ( !*((_QWORD *)this + 18) || (v28 = CControlCenterExperienceManager::PositionView(this, v9), v21 = v28, v28 >= 0) )
  {
    if ( *((_BYTE *)this + 763) )
    {
      *((_BYTE *)this + 763) = 0;
      ControlCenterUITelemetry::ControlCenterTelemetry::ControlCenterPage_PrelaunchFailed(v10);
    }
    v30 = *((_BYTE *)this + 761);
    *((_BYTE *)this + 761) = 1;
    v28 = CSingleViewShellExperience::Show(
            (__int64)this + 120,
            (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)(v30 == 0));
    v21 = v28;
    if ( v28 < 0 )
    {
      v29 = 1183LL;
      goto LABEL_50;
    }
    if ( v32[0] )
      tip::details::test_common_data<1>::complete((__int64)v32[0] + 8);
    if ( v32[1] )
      std::_Ref_count_base::_Decref(v32[1]);
    return 0LL;
  }
  v29 = 1170LL;
LABEL_50:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v29,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v28);
LABEL_51:
  if ( v32[1] )
    std::_Ref_count_base::_Decref(v32[1]);
  return v21;
}
