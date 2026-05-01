/*
 * XREFs of ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180697554
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ?TryUpdatePrelaunchSettings@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x18006E9C0 (-TryUpdatePrelaunchSettings@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXX.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??B?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800D5B58 (--B-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180155034 (-ShouldDeferWidgetsInitialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?complete@?$test_watcher@V?$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802297D8 (-complete@-$test_watcher@V-$merged_data@U_tip_OutOfProcDesktopSnapLayoutManagerTest@@U1@@details.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x180233364 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@detai.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802356B0 (--1-$test_data_control@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802358C4 (--1-$test_watcher@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ??4IAsyncAction@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180235C1C (--4IAsyncAction@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??C?$test_watcher@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@1@XZ @ 0x180235C5C (--C-$test_watcher@V-$merged_data@U_tip_AppPrelaunchBackgroundTask@@U1@@details@tip2@@@tip2@@QEAA.c)
 *     ?RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4StartUpEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x180240D10 (-RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and.c)
 *     ?RunWidgetCanvasDelayedInitializeAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x180242AF0 (-RunWidgetCanvasDelayedInitializeAsync@DashboardManager@implementation@Shell@Internal@Windows@wi.c)
 *     ?StartWidgetsOverwatchAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUIAsyncAction@Foundation@56@XZ @ 0x18024431C (-StartWidgetsOverwatchAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA-A.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_50179255@@@details@wil@@QEAA_NXZ @ 0x1802487F8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_50179255@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::NotifyDesktopReady(
        winrt::Windows::Internal::Shell::implementation::DashboardManager *this)
{
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v1; // rbx
  __int64 v2; // rdx
  wil *v3; // rcx
  winrt::Windows::Foundation::IUnknown *started; // rax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  _BYTE v7[72]; // [rsp+20h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v11; // [rsp+78h] [rbp+10h] BYREF

  v1 = this;
  tip2::start_and_watch_errors<tip2::tip_test<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>>((struct wil::details::IFailureCallback *)v7);
  try
  {
    if ( winrt::Windows::Internal::Shell::implementation::DashboardManager::ShouldDeferWidgetsInitialization() )
      winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent((__int64)v1, &v11, 1);
    winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent((__int64)v1, &v11, 0);
    winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettings(v1);
    *(_DWORD *)(*tip2::test_watcher<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>::operator->(
                   (__int64)v7,
                   &v11)
              + 264LL) = 0;
    tip2::test_data_control<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>::~test_data_control<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>(
      &v11,
      v2);
    if ( !wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool((_QWORD *)v1 + 15) )
    {
      started = winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync(
                  (__int64)v1,
                  (winrt::Windows::Foundation::IUnknown *)&v11);
      winrt::Windows::Foundation::IAsyncAction::operator=(
        (winrt::Windows::Internal::Shell::implementation::DashboardManager *)((char *)v1 + 120),
        started);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)&v11);
    }
  }
  catch ( ... )
  {
    v5 = wil::ResultFromCaughtException(v3);
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x82F,
      (__int64)"pcshell\\twinui\\dashboardmanager\\lib\\dashboardmanager.cpp",
      (const char *)v5);
    *(_DWORD *)(*tip2::test_watcher<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>::operator->(
                   (__int64)v7,
                   &v11)
              + 264LL) = v5;
    tip2::test_data_control<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>::~test_data_control<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>(
      &v11,
      v6);
    v1 = this;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_50179255>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_50179255>::GetImpl'::`2'::impl) )
    winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync(
      (__int64)v1,
      &v11);
  tip2::test_watcher<tip2::details::merged_data<_tip_OutOfProcDesktopSnapLayoutManagerTest,_tip_OutOfProcDesktopSnapLayoutManagerTest>>::complete((__int64)v7);
  tip2::test_watcher<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>::~test_watcher<tip2::details::merged_data<_tip_AppPrelaunchBackgroundTask,_tip_AppPrelaunchBackgroundTask>>((__int64)v7);
}
