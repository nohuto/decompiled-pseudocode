/*
 * XREFs of ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1800178C0
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800195D0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     CActionCenterExperienceManager::ShowRequested$_ResumeCoro$1 @ 0x1801DCA70 (CActionCenterExperienceManager--ShowRequested$_ResumeCoro$1.c)
 *     ?HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windows@@@Z @ 0x180418A50 (-HotKeyInvoked@CActionCenterExperienceManager@@UEAAJW4HotKeyKind@Experience@Shell@Internal@Windo.c)
 *     ?StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z @ 0x180419B80 (-StartSwipe@CActionCenterExperienceManager@@UEAAJIUtagPOINT@@@Z.c)
 *     ?put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z @ 0x18041AD30 (-put_IsVisible@CActionCenterExperienceManager@@UEAAJE@Z.c)
 * Callees:
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1800166B0 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?HideViewRequested@?$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UHideViewRequestedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x180017B6C (-HideViewRequested@-$consume_WindowsUdk_UI_Shell_IViewCoordinator@UIViewCoordinator@Shell@UI@Win.c)
 *     ??$call@P6A?AUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUIViewCoordinatorStatics@2345@@Z@?$factory_cache_entry@UViewCoordinator@Shell@UI@WindowsUdk@winrt@@UIViewCoordinatorStatics@2345@@impl@winrt@@QEAA?A_P$$QEAP6A?AUViewCoordinator@Shell@UI@WindowsUdk@2@AEBUIViewCoordinatorStatics@4562@@Z@Z @ 0x180017E84 (--$call@P6A-AUViewCoordinator@Shell@UI@WindowsUdk@winrt@@AEBUIViewCoordinatorStatics@2345@@Z@-$f.c)
 *     ?Current@?$consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics@UIViewCoordinatorStatics@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x180018018 (-Current@-$consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics@UIViewCoordinatorStatics@Shell@UI.c)
 *     winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_2e8c3009fb6c7eb5169b41625b9541b8___ @ 0x180018190 (winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsUdk--UI--Shell--ViewCoordinator_winr.c)
 *     ?PositionView@CActionCenterExperienceManager@@AEAAJXZ @ 0x180019278 (-PositionView@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18002B06C (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ensure_data@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_NotificationCenterShowTest@@@details@tip@@@std@@XZ @ 0x180040350 (-ensure_data@-$tip_test@U_tip_NotificationCenterShowTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_mer.c)
 *     ?end_update@?$test_common_data@$00@details@tip@@QEAAXXZ @ 0x1800404E8 (-end_update@-$test_common_data@$00@details@tip@@QEAAXXZ.c)
 *     ?begin_update@?$test_common_data@$00@details@tip@@QEAA_NXZ @ 0x1800405EC (-begin_update@-$test_common_data@$00@details@tip@@QEAA_NXZ.c)
 *     ??B?$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ @ 0x180040728 (--B-$tip_test@U_tip_TouchGestureTest@@@tip@@QEBA_NXZ.c)
 *     ?revoke@?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ @ 0x1800659EC (-revoke@-$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ.c)
 *     ??1?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@QEAA@XZ @ 0x180071EFC (--1-$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIViewCoordinator.c)
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ??B?$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ @ 0x180097490 (--B-$ComPtrRef@VWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAVWeakRef@23@XZ.c)
 *     ?reset@?$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ @ 0x180098ACC (-reset@-$shared_ptr@UPeoplePaneViewInfo@@@std@@QEAAXXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1?Destroy@?$DestroyThreadPoolTimer@USystemThreadPoolMethods@details@wil@@$0A@@details@wil@@SAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_TP_TIMER@@@Z @ 0x1800B30E8 (-reset@-$unique_storage@U-$resource_policy@PEAU_TP_TIMER@@P6AXPEAU1@@Z$1-Destroy@-$DestroyThread.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager@@PEAVWeakRef@01@@Z @ 0x180128278 (--$AsWeak@VCActionCenterExperienceManager@@@WRL@Microsoft@@YAJPEAVCActionCenterExperienceManager.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18012C584 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F194 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_TestNM@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?complete@?$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAAXXZ @ 0x1802D442C (-complete@-$tip_test@U_tip_NotificationCenterShowTest@@@tip@@QEAAXXZ.c)
 *     ?ActionCenterLaunchSkippedDueToDeviceLockdown@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x180417C14 (-ActionCenterLaunchSkippedDueToDeviceLockdown@NotificationCenterTelemetry@NotificationCenterUITe.c)
 *     ?ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x180417CAC (-ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@.c)
 *     ?ActionCenterLaunchSkippedDueToShellNotReady@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x180417D44 (-ActionCenterLaunchSkippedDueToShellNotReady@NotificationCenterTelemetry@NotificationCenterUITel.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CActionCenterExperienceManager::Show(CActionCenterExperienceManager *this)
{
  __int64 v2; // rcx
  PTP_TIMER ThreadpoolTimer; // rax
  __int64 v4; // rax
  int v5; // eax
  unsigned int v6; // esi
  __int64 v7; // r8
  __int64 *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  unsigned int v14; // ebx
  char *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  char *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  char *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  int v28; // eax
  int v29; // eax
  unsigned int v30; // esi
  int v31[2]; // [rsp+20h] [rbp-68h] BYREF
  std::_Ref_count_base *v32; // [rsp+28h] [rbp-60h]
  __int64 *v33; // [rsp+30h] [rbp-58h]
  _QWORD v34[2]; // [rsp+38h] [rbp-50h] BYREF
  _BYTE v35[16]; // [rsp+48h] [rbp-40h] BYREF
  __int64 v36; // [rsp+58h] [rbp-30h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+60h] [rbp-28h]
  __int64 v38; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  __int64 v40; // [rsp+98h] [rbp+10h] BYREF
  __int64 v41; // [rsp+A0h] [rbp+18h] BYREF
  _FILETIME pftDueTime; // [rsp+A8h] [rbp+20h] BYREF

  if ( *((_DWORD *)this + 42) == 2 )
    return 0LL;
  if ( (unsigned int)SHWindowsPolicy(&POLID_DisableNotificationCenter) )
  {
    v16 = (char *)this + 784;
    if ( (unsigned __int8)tip::tip_test<_tip_TouchGestureTest>::operator bool((char *)this + 784) )
    {
      v17 = tip::tip_test<_tip_NotificationCenterShowTest>::ensure_data((char *)this + 784);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        v31,
        v17);
      v18 = *(_QWORD *)v31;
      tip::details::test_common_data<1>::begin_update(*(_QWORD *)v31 + 8LL);
      v19 = v18 + 194;
      if ( !v18 )
        v19 = 18LL;
      *(_BYTE *)v19 = 1;
      if ( v18 )
      {
        tip::details::test_common_data<1>::end_update(v18 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(v31);
      }
      if ( v32 )
        std::_Ref_count_base::_Decref(v32);
      tip::tip_test<_tip_NotificationCenterShowTest>::complete(v16);
    }
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToPolicy();
    return 2147943660LL;
  }
  if ( *((_BYTE *)this + 752) )
  {
    v20 = (char *)this + 784;
    if ( (unsigned __int8)tip::tip_test<_tip_TouchGestureTest>::operator bool((char *)this + 784) )
    {
      v21 = tip::tip_test<_tip_NotificationCenterShowTest>::ensure_data((char *)this + 784);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        v31,
        v21);
      v22 = *(_QWORD *)v31;
      tip::details::test_common_data<1>::begin_update(*(_QWORD *)v31 + 8LL);
      v23 = v22 + 194;
      if ( !v22 )
        v23 = 18LL;
      *(_BYTE *)v23 = 1;
      if ( v22 )
      {
        tip::details::test_common_data<1>::end_update(v22 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(v31);
      }
      if ( v32 )
        std::_Ref_count_base::_Decref(v32);
      tip::tip_test<_tip_NotificationCenterShowTest>::complete(v20);
    }
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToDeviceLockdown();
    return 2147943660LL;
  }
  if ( *((_BYTE *)this + 484) )
  {
    if ( !*((_QWORD *)this + 85) )
    {
      ThreadpoolTimer = CreateThreadpoolTimer(
                          lambda_72bb965eb99aed160cfe5c3d112b1de9_::_lambda_invoker_cdecl_,
                          this,
                          0LL);
      wil::details::unique_storage<wil::details::resource_policy<_TP_TIMER *,void (*)(_TP_TIMER *),&public: static void wil::details::DestroyThreadPoolTimer<wil::details::SystemThreadPoolMethods,0>::Destroy(_TP_TIMER *),wistd::integral_constant<unsigned __int64,0>,_TP_TIMER *,_TP_TIMER *,0,std::nullptr_t>>::reset(
        (char *)this + 680,
        ThreadpoolTimer);
      pftDueTime.dwHighDateTime = -1;
      pftDueTime.dwLowDateTime = -100000000;
      SetThreadpoolTimer(*((PTP_TIMER *)this + 85), &pftDueTime, 0, 0);
    }
    v33 = &qword_18098E048;
    _InterlockedIncrement64(&qword_18098E048);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics> )
    {
      winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinatorStatics<winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::Current(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>,
        &v40);
      _InterlockedDecrement64(&qword_18098E048);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098E048);
      *(_QWORD *)v31 = _lambda_80fc32ba40679525b9bdda7c054c7fb2_::_lambda_invoker_cdecl_;
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::Shell::ViewCoordinator,winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics>::call<winrt::WindowsUdk::UI::Shell::ViewCoordinator (*)(winrt::WindowsUdk::UI::Shell::IViewCoordinatorStatics const &)>(
        v2,
        &v40,
        v31);
    }
    v41 = 0LL;
    *(_QWORD *)v31 = &v41;
    v4 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::WeakRef>::operator Microsoft::WRL::WeakRef *(v31);
    v5 = Microsoft::WRL::AsWeak<CActionCenterExperienceManager>(this, v4);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3AC,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v5,
        v31[0]);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
      if ( v40 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v40);
      return v6;
    }
    else
    {
      v34[0] = this;
      v34[1] = v41;
      if ( v41 )
        (*(void (**)(void))(*(_QWORD *)v41 + 8LL))();
      winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs_::TypedEventHandler_winrt::WindowsUdk::UI::Shell::ViewCoordinator_winrt::WindowsUdk::UI::Shell::HideViewRequestedEventArgs___lambda_2e8c3009fb6c7eb5169b41625b9541b8___(
        &pftDueTime,
        v34);
      v8 = (__int64 *)winrt::impl::consume_WindowsUdk_UI_Shell_IViewCoordinator<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::HideViewRequested(
                        &v40,
                        v35,
                        v7,
                        &pftDueTime);
      v9 = v8[1];
      v10 = *v8;
      *v8 = 0LL;
      v36 = v10;
      v37 =  winrt::impl::abi<winrt::WindowsUdk::UI::Shell::IViewCoordinator,void>::type::`vcall'{112,{flat}};
      v38 = v9;
      if ( (__int64 *)((char *)this + 760) != &v36 )
      {
        winrt::event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::revoke((char *)this + 760);
        winrt::com_ptr<winrt::impl::IWeakReference>::operator=((char *)this + 760, &v36);
        *((_QWORD *)this + 96) = v37;
        *((_QWORD *)this + 97) = v38;
      }
      winrt::event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::revoke(&v36);
      if ( v36 )
        winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v36);
      __1__event_revoker_UIViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__QEAA_XZ(v35);
      if ( pftDueTime )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&pftDueTime);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v41);
      if ( v40 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v40);
      if ( *((_QWORD *)this + 19) )
      {
        LOBYTE(v12) = 3;
        LOBYTE(v11) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_TestNM>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_TestNM>::GetImpl'::`2'::impl,
          v11,
          v12);
        v28 = CActionCenterExperienceManager::RaisePropertyChangedEvent(
                this,
                L"SuppressAnimations",
                *((_BYTE *)this + 432));
        if ( v28 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3CA,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v28,
            v31[0]);
        v29 = CActionCenterExperienceManager::PositionView(this);
        v30 = v29;
        if ( v29 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3CC,
            (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
            (const char *)(unsigned int)v29,
            v31[0]);
          return v30;
        }
      }
      v13 = CSingleViewShellExperience::Show((char *)this + 128, 0LL);
      v14 = v13;
      if ( v13 >= 0 )
        return 0LL;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3CF,
        (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\actioncenterexperiencemanager.cpp",
        (const char *)(unsigned int)v13,
        v31[0]);
      return v14;
    }
  }
  else
  {
    v24 = (char *)this + 784;
    if ( (unsigned __int8)tip::tip_test<_tip_TouchGestureTest>::operator bool((char *)this + 784) )
    {
      v25 = tip::tip_test<_tip_NotificationCenterShowTest>::ensure_data((char *)this + 784);
      std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
        v31,
        v25);
      v26 = *(_QWORD *)v31;
      tip::details::test_common_data<1>::begin_update(*(_QWORD *)v31 + 8LL);
      v27 = v26 + 195;
      if ( !v26 )
        v27 = 19LL;
      *(_BYTE *)v27 = 1;
      if ( v26 )
      {
        tip::details::test_common_data<1>::end_update(v26 + 8);
        std::shared_ptr<PeoplePaneViewInfo>::reset(v31);
      }
      if ( v32 )
        std::_Ref_count_base::_Decref(v32);
      tip::tip_test<_tip_NotificationCenterShowTest>::complete(v24);
    }
    NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToShellNotReady();
    return 2147549183LL;
  }
}
