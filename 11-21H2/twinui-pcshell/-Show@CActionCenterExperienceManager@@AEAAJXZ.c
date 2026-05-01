/*
 * XREFs of ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x18000AC38
 * Callers:
 *     ?HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x18000AAB0 (-HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windo.c)
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004AAD0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801935D0 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x18034FB90 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 *     ?put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z @ 0x180351720 (-put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_2e8c3009fb6c7eb5169b41625b9541b8___ @ 0x18000AAEC (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ViewCoordinator_winr.c)
 *     ?HideViewRequested@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUevent_token@3@AEBU?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x18000AB70 (-HideViewRequested@-$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@Win.c)
 *     ??1?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAA@XZ @ 0x18000ABBC (--1-$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIViewCoordinator.c)
 *     ?revoke@?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ @ 0x18000ABE0 (-revoke@-$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18000B4DC (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Current@?$consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics@UIViewCoordinatorStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUViewCoordinator@Shell@UI@WindowsUdk@3@XZ @ 0x180033B28 (-Current@-$consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics@UIViewCoordinatorStatics@Shell@UI.c)
 *     ?complete@?$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@@QEAAXXZ @ 0x180045564 (-complete@-$tip_test@U_tip_DesktopTouchKeyboardShowOnTryShowV1@TouchKeyboardExperienceTip@@@tip@.c)
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x18004945C (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x18004A334 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ??$call@P6A?AUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUIViewCoordinatorStatics@2345@@Z@?$factory_cache_entry@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIViewCoordinatorStatics@2345@@impl@winrt@@QEAA?AUViewCoordinator@Shell@UI@WindowsUdk@2@$$QEAP6A?AU34562@AEBUIViewCoordinatorStatics@4562@@Z@Z @ 0x18005508C (--$call@P6A-AUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUIViewCoordinatorStatics@2345@@Z@-$f.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x18006C1F8 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x18009E470 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x1800E1B24 (--$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800F4980 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x180120A64 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x180120B54 (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180149610 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??$make_event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@U?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@5@PEBU?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@75@@impl@winrt@@YA?AU?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@01@PEBU?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@01@Uevent_token@1@@Z @ 0x180191B84 (--$make_event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@U-$event_revoker@UIViewCoordi.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ @ 0x18022C5BC (--B-$tip_test@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@tip@@QEBA_NXZ.c)
 *     ??$?0$$V@?$_Ref_count_obj2@V?$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@@std@@QEAA@XZ @ 0x180345A8C (--$-0$$V@-$_Ref_count_obj2@V-$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@@.c)
 *     ??0?$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetrievalOptions@@@Z @ 0x18034C268 (--0-$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@QEAA@PEAU_GUID@@W4TestRetr.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18034D32C (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?ActionCenterLaunchSkippedDueToDeviceLockdown@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18034DA0C (-ActionCenterLaunchSkippedDueToDeviceLockdown@NotificationCenterTelemetry@NotificationCenterUITe.c)
 *     ?ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18034DAA4 (-ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?ActionCenterLaunchSkippedDueToShellNotReady@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x18034DB3C (-ActionCenterLaunchSkippedDueToShellNotReady@NotificationCenterTelemetry@NotificationCenterUITel.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CActionCenterExperienceManager::Show(char *pv)
{
  __int64 v2; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // edi
  _QWORD *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  unsigned int v11; // ebx
  std::_Ref_count_base *v13; // rdi
  std::_Ref_count_base *v14; // rax
  std::_Ref_count_base *v15; // rbx
  std::_Ref_count_base *v16; // r14
  char *v17; // rax
  std::_Ref_count_base *v18; // rdi
  std::_Ref_count_base *v19; // rax
  std::_Ref_count_base *v20; // rbx
  std::_Ref_count_base *v21; // r14
  char *v22; // rax
  std::_Ref_count_base *v23; // rdi
  std::_Ref_count_base *v24; // rax
  std::_Ref_count_base *v25; // rbx
  std::_Ref_count_base *v26; // r14
  char *v27; // rax
  int v28; // eax
  int v29; // eax
  unsigned int v30; // edi
  int v31[2]; // [rsp+20h] [rbp-88h] BYREF
  std::_Ref_count_base *v32; // [rsp+28h] [rbp-80h]
  __int64 *v33; // [rsp+30h] [rbp-78h]
  std::_Ref_count_base *v34[2]; // [rsp+38h] [rbp-70h] BYREF
  _DWORD *v35; // [rsp+48h] [rbp-60h] BYREF
  std::_Ref_count_base *v36; // [rsp+50h] [rbp-58h]
  _QWORD v37[2]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v38; // [rsp+68h] [rbp-40h] BYREF
  __int64 (__fastcall *v39)(_QWORD, _QWORD); // [rsp+70h] [rbp-38h]
  std::_Ref_count_base *v40; // [rsp+78h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+0h]
  std::_Ref_count_base *v42; // [rsp+B0h] [rbp+8h]
  void *v43; // [rsp+B0h] [rbp+8h]
  std::_Ref_count_base *v44; // [rsp+B0h] [rbp+8h]
  void *v45; // [rsp+B0h] [rbp+8h]
  std::_Ref_count_base *v46; // [rsp+B0h] [rbp+8h]
  void *v47; // [rsp+B0h] [rbp+8h]
  __int64 v48; // [rsp+B8h] [rbp+10h] BYREF
  __int64 v49; // [rsp+C0h] [rbp+18h] BYREF
  struct _FILETIME pftDueTime; // [rsp+C8h] [rbp+20h] BYREF

  if ( *((_DWORD *)pv + 42) == 2 )
    return 0LL;
  if ( (unsigned int)SHWindowsPolicy(&POLID_DisableNotificationCenter) )
  {
    *(_OWORD *)v34 = 0LL;
    v42 = (std::_Ref_count_base *)operator new(0xC0uLL);
    *(_OWORD *)v42 = 0LL;
    *((_DWORD *)v42 + 2) = 1;
    *((_DWORD *)v42 + 3) = 1;
    *(_QWORD *)v42 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_NotificationCenterShowTest>>::`vftable';
    tip::details::test_merged_data<_tip_NotificationCenterShowTest>::test_merged_data<_tip_NotificationCenterShowTest>(
      (char *)v42 + 16,
      0LL,
      0LL);
    v35 = (_DWORD *)((char *)v42 + 16);
    v36 = v42;
    std::shared_ptr<KBViewInfo>::operator=(v34, &v35);
    if ( v36 )
      std::_Ref_count_base::_Decref(v36);
    if ( !(unsigned __int8)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool(v34) )
    {
      v15 = v34[1];
      goto LABEL_43;
    }
    v13 = v34[0];
    if ( !v34[0] )
    {
      v43 = operator new(0xC0uLL);
      v14 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<_tip_NotificationCenterShowTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_NotificationCenterShowTest>>(v43);
      *(_QWORD *)v31 = (char *)v14 + 16;
      v32 = v14;
      std::shared_ptr<KBViewInfo>::operator=(v34, v31);
      if ( v32 )
        std::_Ref_count_base::_Decref(v32);
      v13 = v34[0];
    }
    v15 = v34[1];
    if ( v34[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)v34[1] + 2);
      v15 = v34[1];
      v13 = v34[0];
    }
    v16 = v15;
    tip::details::test_common_data<1>::begin_update((char *)v13 + 8);
    if ( v13 )
      v17 = (char *)v13 + 144;
    else
      v17 = 0LL;
    v17[18] = 1;
    if ( v13 )
    {
      tip::details::test_common_data<1>::end_update((char *)v13 + 8);
      v16 = 0LL;
      if ( !v15 )
      {
LABEL_41:
        tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::complete(v34);
LABEL_43:
        if ( v15 )
          std::_Ref_count_base::_Decref(v15);
        NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToPolicy();
        return 2147943660LL;
      }
      std::_Ref_count_base::_Decref(v15);
    }
    if ( v16 )
      std::_Ref_count_base::_Decref(v16);
    goto LABEL_41;
  }
  if ( pv[736] )
  {
    *(_OWORD *)v34 = 0LL;
    v44 = (std::_Ref_count_base *)operator new(0xC0uLL);
    *(_OWORD *)v44 = 0LL;
    *((_DWORD *)v44 + 2) = 1;
    *((_DWORD *)v44 + 3) = 1;
    *(_QWORD *)v44 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_NotificationCenterShowTest>>::`vftable';
    tip::details::test_merged_data<_tip_NotificationCenterShowTest>::test_merged_data<_tip_NotificationCenterShowTest>(
      (char *)v44 + 16,
      0LL,
      0LL);
    v35 = (_DWORD *)((char *)v44 + 16);
    v36 = v44;
    std::shared_ptr<KBViewInfo>::operator=(v34, &v35);
    if ( v36 )
      std::_Ref_count_base::_Decref(v36);
    if ( !(unsigned __int8)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool(v34) )
    {
      v20 = v34[1];
      goto LABEL_67;
    }
    v18 = v34[0];
    if ( !v34[0] )
    {
      v45 = operator new(0xC0uLL);
      v19 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<_tip_NotificationCenterShowTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_NotificationCenterShowTest>>(v45);
      *(_QWORD *)v31 = (char *)v19 + 16;
      v32 = v19;
      std::shared_ptr<KBViewInfo>::operator=(v34, v31);
      if ( v32 )
        std::_Ref_count_base::_Decref(v32);
      v18 = v34[0];
    }
    v20 = v34[1];
    if ( v34[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)v34[1] + 2);
      v20 = v34[1];
      v18 = v34[0];
    }
    v21 = v20;
    tip::details::test_common_data<1>::begin_update((char *)v18 + 8);
    if ( v18 )
      v22 = (char *)v18 + 144;
    else
      v22 = 0LL;
    v22[18] = 1;
    if ( v18 )
    {
      tip::details::test_common_data<1>::end_update((char *)v18 + 8);
      v21 = 0LL;
      if ( !v20 )
      {
LABEL_65:
        tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::complete(v34);
LABEL_67:
        if ( v20 )
          std::_Ref_count_base::_Decref(v20);
        NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToDeviceLockdown();
        return 2147943660LL;
      }
      std::_Ref_count_base::_Decref(v20);
    }
    if ( v21 )
      std::_Ref_count_base::_Decref(v21);
    goto LABEL_65;
  }
  if ( !pv[476] )
  {
    *(_OWORD *)v34 = 0LL;
    v46 = (std::_Ref_count_base *)operator new(0xC0uLL);
    *(_OWORD *)v46 = 0LL;
    *((_DWORD *)v46 + 2) = 1;
    *((_DWORD *)v46 + 3) = 1;
    *(_QWORD *)v46 = &std::_Ref_count_obj2<tip::details::test_merged_data<_tip_NotificationCenterShowTest>>::`vftable';
    tip::details::test_merged_data<_tip_NotificationCenterShowTest>::test_merged_data<_tip_NotificationCenterShowTest>(
      (char *)v46 + 16,
      0LL,
      0LL);
    v35 = (_DWORD *)((char *)v46 + 16);
    v36 = v46;
    std::shared_ptr<KBViewInfo>::operator=(v34, &v35);
    if ( v36 )
      std::_Ref_count_base::_Decref(v36);
    if ( !(unsigned __int8)tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>::operator bool(v34) )
    {
      v25 = v34[1];
      goto LABEL_88;
    }
    v23 = v34[0];
    if ( !v34[0] )
    {
      v47 = operator new(0xC0uLL);
      v24 = (std::_Ref_count_base *)std::_Ref_count_obj2<tip::details::test_merged_data<_tip_NotificationCenterShowTest>>::_Ref_count_obj2<tip::details::test_merged_data<_tip_NotificationCenterShowTest>>(v47);
      *(_QWORD *)v31 = (char *)v24 + 16;
      v32 = v24;
      std::shared_ptr<KBViewInfo>::operator=(v34, v31);
      if ( v32 )
        std::_Ref_count_base::_Decref(v32);
      v23 = v34[0];
    }
    v25 = v34[1];
    if ( v34[1] )
    {
      _InterlockedIncrement((volatile signed __int32 *)v34[1] + 2);
      v25 = v34[1];
      v23 = v34[0];
    }
    v26 = v25;
    tip::details::test_common_data<1>::begin_update((char *)v23 + 8);
    if ( v23 )
      v27 = (char *)v23 + 144;
    else
      v27 = 0LL;
    v27[19] = 1;
    if ( v23 )
    {
      tip::details::test_common_data<1>::end_update((char *)v23 + 8);
      v26 = 0LL;
      if ( !v25 )
      {
LABEL_86:
        tip::tip_test<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTryShowV1>::complete(v34);
LABEL_88:
        if ( v25 )
          std::_Ref_count_base::_Decref(v25);
        NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToShellNotReady();
        return 2147549183LL;
      }
      std::_Ref_count_base::_Decref(v25);
    }
    if ( v26 )
      std::_Ref_count_base::_Decref(v26);
    goto LABEL_86;
  }
  if ( !*((_QWORD *)pv + 84) )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(lambda_93f3fda036ffdd6460325e0ad9be81ff_::_lambda_invoker_cdecl_, pv, 0LL);
    wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
      pv + 672,
      ThreadpoolTimer);
    pftDueTime = (struct _FILETIME)-100000000LL;
    SetThreadpoolTimer(*((PTP_TIMER *)pv + 84), &pftDueTime, 0, 0);
  }
  v33 = &qword_1807B3EF8;
  _InterlockedIncrement64(&qword_1807B3EF8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics> )
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics<winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::Current(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>,
      &v48);
    _InterlockedDecrement64(&qword_1807B3EF8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B3EF8);
    *(_QWORD *)v31 = &_lambda_80fc32ba40679525b9bdda7c054c7fb2_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::call<winrt::WindowsUdk::UI::Shell::ViewCoordinator (*)(winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics const &)>(
      v2,
      &v48,
      v31);
  }
  v49 = 0LL;
  *(_QWORD *)v31 = &v49;
  v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v31);
  v5 = Microsoft::WRL::AsWeak<CActionCenterExperienceManager>(pv, v4);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33B,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5,
      v31[0]);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v49);
    if ( v48 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v48);
    return v6;
  }
  else
  {
    v37[0] = pv;
    v37[1] = v49;
    if ( v49 )
      (*(void (**)(void))(*(_QWORD *)v49 + 8LL))();
    winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_2e8c3009fb6c7eb5169b41625b9541b8___(
      &pftDueTime,
      v37);
    v7 = winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::HideViewRequested(
           &v48,
           v34,
           &pftDueTime);
    ___make_event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__U__event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_5_PEBU__consume_WindowsUdk_UI_Shell_IViewCoordinator_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___75__impl_winrt__YA_AU__event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_01_PEBU__consume_WindowsUdk_UI_Shell_IViewCoordinator_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___01_Uevent_token_1__Z(
      &v35,
      &v48,
      *v7);
    v8 = (__int64)v35;
    v35 = 0LL;
    v38 = v8;
    v39 =  winrt::impl::abi<winrt::WindowsUdk::UI::Shell::IViewCoordinator,void>::type::`vcall'{112,{flat}};
    v40 = v36;
    if ( pv + 744 != (char *)&v38 )
    {
      winrt::event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::revoke((__int64 *)pv + 93);
      winrt::com_ptr<winrt::impl::IWeakReference>::operator=(pv + 744, &v38);
      *((_QWORD *)pv + 94) = v39;
      *((_QWORD *)pv + 95) = v40;
    }
    winrt::event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::revoke(&v38);
    if ( v38 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v38);
    __1__event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__QEAA_XZ((__int64 *)&v35);
    if ( pftDueTime )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&pftDueTime);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v49);
    if ( v48 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v48);
    if ( *((_QWORD *)pv + 19) )
    {
      LOBYTE(v9) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
        v9);
      v28 = CActionCenterExperienceManager::RaisePropertyChangedEvent(
              (CActionCenterExperienceManager *)pv,
              L"SuppressAnimations",
              pv[424]);
      if ( v28 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x35A,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v28,
          v31[0]);
      v29 = CActionCenterExperienceManager::PositionView((CActionCenterExperienceManager *)pv);
      v30 = v29;
      if ( v29 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x35D,
          (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
          (const char *)(unsigned int)v29,
          v31[0]);
        return v30;
      }
    }
    v10 = CSingleViewShellExperience::Show(pv + 128, 0LL);
    v11 = v10;
    if ( v10 >= 0 )
      return 0LL;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x360,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
      (const char *)(unsigned int)v10,
      v31[0]);
    return v11;
  }
}
