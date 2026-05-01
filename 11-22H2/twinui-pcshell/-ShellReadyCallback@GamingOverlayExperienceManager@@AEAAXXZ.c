/*
 * XREFs of ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800A8E70
 * Callers:
 *     wistd::__function::__func__lambda_6091c0fdf23ade5747cc93b1c5a66275__void___cdecl(void)_::operator() @ 0x1801BC010 (wistd--__function--__func__lambda_6091c0fdf23ade5747cc93b1c5a66275__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800A42E8 (-RegisterGameBarRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800A7650 (-RegisterGameDvrRegistryChangedEvent@GamingOverlayExperienceManager@@AEAAXXZ.c)
 *     ?StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1800A8F58 (-StartXusbDeviceMonitoring@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayControllerBarLaunchSignals@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A90A8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GamingOverlayControllerBarLaunchSignals@@.c)
 *     ??$?0VGamingOverlayExperienceManager@@P80@EAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavigationController@Input@Gaming@34@@Z@?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@PEAVGamingOverlayExperienceManager@@P84@EAAXUIInspectable@123@AEBUUINavigationController@Input@Gaming@23@@Z@Z @ 0x1800AA260 (--$-0VGamingOverlayExperienceManager@@P80@EAAXUIInspectable@Foundation@Windows@winrt@@AEBUUINavi.c)
 *     ??4?$factory_event_revoker@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$MP8type@?$abi@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1800AA2D4 (--4-$factory_event_revoker@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$MP8type@.c)
 *     ?UINavigationControllerAdded@UINavigationController@Input@Gaming@Windows@winrt@@SA?AU?$factory_event_revoker@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$MP8type@?$abi@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@5@Uauto_revoke_t@5@AEBU?$EventHandler@UUINavigationController@Input@Gaming@Windows@winrt@@@Foundation@45@@Z @ 0x1800AA63C (-UINavigationControllerAdded@UINavigationController@Input@Gaming@Windows@winrt@@SA-AU-$factory_e.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$factory_event_revoker@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$MP8type@?$abi@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x1801B1D14 (--1-$factory_event_revoker@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$MP8type@.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall GamingOverlayExperienceManager::ShellReadyCallback(GamingOverlayExperienceManager *this)
{
  int started; // eax
  __int64 v3; // rdx
  __int64 v4; // rax
  void (*v5)(GamingOverlayExperienceManager *__hidden, struct IInspectable, const struct winrt::Windows::Gaming::Input::UINavigationController *); // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF
  __time64_t Time; // [rsp+60h] [rbp+18h] BYREF

  GamingOverlayExperienceManager::RegisterGameBarRegistryChangedEvent(this);
  GamingOverlayExperienceManager::RegisterGameDvrRegistryChangedEvent((wil::details::registry_watcher_state **)this);
  started = GamingOverlayExperienceManager::StartXusbDeviceMonitoring(this);
  if ( started < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xFE9,
      (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)started,
      (int)v5);
  LOBYTE(v3) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamingOverlayControllerBarLaunchSignals>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_GamingOverlayControllerBarLaunchSignals>::GetImpl'::`2'::impl,
    v3);
  if ( !*((_QWORD *)this + 179) )
  {
    v5 = GamingOverlayExperienceManager::OnUINavigationControllerAdded;
    v6 = 0;
    winrt::Windows::Foundation::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>::EventHandler<winrt::Windows::Gaming::Input::UINavigationController>(
      &v9,
      this,
      &v5);
    v4 = winrt::Windows::Gaming::Input::UINavigationController::UINavigationControllerAdded((winrt::Windows::Foundation::IUnknown *)v7);
    __4__factory_event_revoker_UIUINavigationControllerStatics_Input_Gaming_Windows_winrt___MP8type___abi_UIUINavigationControllerStatics_Input_Gaming_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
      (char *)this + 1432,
      v4);
    __1__factory_event_revoker_UIUINavigationControllerStatics_Input_Gaming_Windows_winrt___MP8type___abi_UIUINavigationControllerStatics_Input_Gaming_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Foundation::IUnknown *)v7);
    if ( v9 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  }
  Time = 0LL;
  _time64(&Time);
  *((_QWORD *)this + 178) = Time;
}
