/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x180242400
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_InitCoro$2 @ 0x18024234C (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasDelayedInitial.c)
 * Callees:
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@Uguid@2@W4DashboardInvokeType@Dashboard@5UI@WindowsUdk@2@URect@Foundation@72@@experimental@std@@@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@implementation@Shell@Internal@Windows@2@Uguid@2@W4DashboardInvokeType@Dashboard@5UI@WindowsUdk@2@URect@Foundation@72@@experimental@std@@@experimental@std@@@Z @ 0x1800715E8 (--$await_suspend@Upromise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUDashboardManager@i.c)
 *     ?await_ready@?$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ @ 0x18007386C (-await_ready@-$notify_awaiter@AEAUapartment_context@winrt@@@impl@winrt@@QEAA_NXZ.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??$wait_get@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBUIAsyncAction@Foundation@Windows@1@@Z @ 0x1800AE684 (--$wait_get@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBUIAsyncAction@Foundati.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?await_resume@?$notify_awaiter@Uawaitable@?1??resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@XZ @ 0x1801BA18C (-await_resume@-$notify_awaiter@Uawaitable@-1--resume_background@winrt@@YA@XZ@@impl@winrt@@QEAA@X.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1801F0838 (-complete@-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2.c)
 *     ??$PackageInstalledResultWPR@AEBH_N@DashboardManagerTelemetry@@SAXAEBH$$QEA_N@Z @ 0x18022EFEC (--$PackageInstalledResultWPR@AEBH_N@DashboardManagerTelemetry@@SAXAEBH$$QEA_N@Z.c)
 *     ??0StartExperiencePackageHelper@@QEAA@W4PackageInstallScenario@@@Z @ 0x180234B78 (--0StartExperiencePackageHelper@@QEAA@W4PackageInstallScenario@@@Z.c)
 *     ??0WebExperiencePackageHelper@@QEAA@W4PackageInstallScenario@@@Z @ 0x180234BF4 (--0WebExperiencePackageHelper@@QEAA@W4PackageInstallScenario@@@Z.c)
 *     ??0WidgetPlatformPackageHelper@@QEAA@W4PackageInstallScenario@@@Z @ 0x180234C50 (--0WidgetPlatformPackageHelper@@QEAA@W4PackageInstallScenario@@@Z.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802350A8 (--1-$com_ptr_t@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180235758 (--1-$test_data_control@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@detai.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@1@XZ @ 0x180235D6C (--C-$tip_test@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@.c)
 *     ?InstallInboxedPackageAsync@LockScreenWidgetPackageHelperBase@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@XZ @ 0x18023E75C (-InstallInboxedPackageAsync@LockScreenWidgetPackageHelperBase@@QEAA-AU-$IAsyncOperation@_N@Found.c)
 *     ?IsLockWidgetCanvasDisabledByPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18023F338 (-IsLockWidgetCanvasDisabledByPolicy@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 *     ?IsLockWidgetCanvasDisabledByUser@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA_NXZ @ 0x18023F474 (-IsLockWidgetCanvasDisabledByUser@DashboardManager@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?IsPackageInstalled@LockScreenWidgetPackageHelperBase@@QEAA_NXZ @ 0x18023FA40 (-IsPackageInstalled@LockScreenWidgetPackageHelperBase@@QEAA_NXZ.c)
 *     ?RunWidgetCanvasDelayedInitializeAsync@DashboardManagerTelemetry@@SAXXZ @ 0x180242B54 (-RunWidgetCanvasDelayedInitializeAsync@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?RunWidgetCanvasDisabledByPolicy@DashboardManagerTelemetry@@SAXXZ @ 0x180242B80 (-RunWidgetCanvasDisabledByPolicy@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?RunWidgetCanvasDisabledByUser@DashboardManagerTelemetry@@SAXXZ @ 0x180242BAC (-RunWidgetCanvasDisabledByUser@DashboardManagerTelemetry@@SAXXZ.c)
 *     ?TryInstallAsync@LockScreenWidgetPackageHelperBase@@QEAA?AUIAsyncAction@Foundation@Windows@winrt@@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@0@Z @ 0x180244ECC (-TryInstallAsync@LockScreenWidgetPackageHelperBase@@QEAA-AUIAsyncAction@Foundation@Windows@winrt.c)
 *     ?WasPreviouslyInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NPEBG@Z @ 0x180247AEC (-WasPreviouslyInstalled@LockScreenWidgetPackageHelperBase@@IEAA_NPEBG@Z.c)
 *     ?WasPreviouslyInstalled@StartExperiencePackageHelper@@QEAAX_N@Z @ 0x180247BBC (-WasPreviouslyInstalled@StartExperiencePackageHelper@@QEAAX_N@Z.c)
 *     ?WasPreviouslyInstalled@WebExperiencePackageHelper@@QEAAX_N@Z @ 0x180247BF8 (-WasPreviouslyInstalled@WebExperiencePackageHelper@@QEAAX_N@Z.c)
 *     ?WasPreviouslyInstalled@WidgetPlatformPackageHelper@@QEAAX_N@Z @ 0x180247C34 (-WasPreviouslyInstalled@WidgetPlatformPackageHelper@@QEAAX_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55116415@@@details@wil@@QEAA_NXZ @ 0x180248838 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55116415@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55480066@@@details@wil@@QEAA_NXZ @ 0x1802488EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55480066@@@details@wil@@QEAA_NXZ.c)
 *     ?close@?$test_data_control@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x180249668 (-close@-$test_data_control@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@d.c)
 *     ?open_helper@?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@AEAA_NPEAU_GUID@@@Z @ 0x18024B02C (-open_helper@-$tip_test@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@deta.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x18024BF3C (-start@-$tip_test@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@ti.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@implementation@Shell@Internal@Windows@2@UTile@StartScreen@UI@WindowsUdk@2@UTileChangedEventArgs@9UI@WindowsUdk@2@@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x1802D3764 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@PEAUAppBackupListener@imp.c)
 *     ??$wait_get@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@_N@Foundation@Windows@1@@Z @ 0x18062EC90 (--$wait_get@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBU-$IAsyncOpera.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=2
void __fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync__ResumeCoro_1(
        char *a1)
{
  __int64 v2; // rcx
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v3; // rcx
  winrt::Windows::Internal::Shell::implementation::DashboardManager *v4; // rcx
  __int64 v5; // rdx
  LockScreenWidgetPackageHelperBase *v6; // rcx
  unsigned int v7; // r8d
  LockScreenWidgetPackageHelperBase *v8; // rcx
  _QWORD *v9; // rax
  WebExperiencePackageHelper *v10; // rcx
  __int64 v11; // rdx
  unsigned int v12; // r8d
  LockScreenWidgetPackageHelperBase *v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // r8d
  _QWORD *v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // r8d
  LockScreenWidgetPackageHelperBase *v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // r8d
  winrt::Windows::Foundation::IUnknown *v22; // rax
  char v23; // di
  WidgetPlatformPackageHelper *v24; // rcx
  int v25; // eax
  WidgetPlatformPackageHelper *v26; // rcx
  __int64 v27; // rdx
  unsigned int v28; // r8d
  LockScreenWidgetPackageHelperBase *v29; // rcx
  _QWORD *v30; // rax
  StartExperiencePackageHelper *v31; // rcx
  __int64 v32; // rdx
  unsigned int v33; // r8d
  bool IsPackageInstalled; // al
  __int64 v35; // rdx
  unsigned int v36; // r8d
  bool v37; // al
  __int64 v38; // rdx
  unsigned int v39; // r8d
  int v40; // [rsp+28h] [rbp-90h]

  v40 = 6;
  switch ( *((_WORD *)a1 + 4) )
  {
    case 0xFFFF:
    case 3:
    case 5:
      goto LABEL_36;
    case 2:
      a1[16] = 0;
      *((_QWORD *)a1 + 3) = a1 + 16;
      if ( winrt::impl::notify_awaiter<winrt::apartment_context &>::await_ready() )
        goto LABEL_4;
      *((_WORD *)a1 + 4) = 4;
      ___await_suspend_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUDashboardManager_implementation_Shell_Internal_Windows_2_Uguid_2_W4DashboardInvokeType_Dashboard_5UI_WindowsUdk_2_URect_Foundation_72__experimental_std_____notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_A_PU__coroutine_handle_Upromise_type___coroutine_traits_Ufire_and_forget_winrt__PEAUDashboardManager_implementation_Shell_Internal_Windows_2_Uguid_2_W4DashboardInvokeType_Dashboard_5UI_WindowsUdk_2_URect_Foundation_72__experimental_std___experimental_std___Z(
        v2,
        a1);
      break;
    case 4:
LABEL_4:
      _await_resume___notify_awaiter_Uawaitable__1__resume_background_winrt__YA_XZ__impl_winrt__QEAA_XZ();
      DashboardManagerTelemetry::RunWidgetCanvasDelayedInitializeAsync();
      if ( winrt::Windows::Internal::Shell::implementation::DashboardManager::IsLockWidgetCanvasDisabledByPolicy(v3) )
      {
        DashboardManagerTelemetry::RunWidgetCanvasDisabledByPolicy();
      }
      else if ( winrt::Windows::Internal::Shell::implementation::DashboardManager::IsLockWidgetCanvasDisabledByUser(v4) )
      {
        DashboardManagerTelemetry::RunWidgetCanvasDisabledByUser();
      }
      else
      {
        *((_QWORD *)a1 + 4) = 0LL;
        if ( !(unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::open_helper(a1 + 32) )
          tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::start(
            a1 + 32,
            a1 + 40);
        WebExperiencePackageHelper::WebExperiencePackageHelper((__int64)(a1 + 64), 0);
        if ( LockScreenWidgetPackageHelperBase::IsPackageInstalled(v6, v5, v7) )
        {
          if ( !LockScreenWidgetPackageHelperBase::WasPreviouslyInstalled(v8, L"WebExperienceInstalled") )
            WebExperiencePackageHelper::WasPreviouslyInstalled(v10, 1);
        }
        else if ( !LockScreenWidgetPackageHelperBase::WasPreviouslyInstalled(v8, L"WebExperienceInstalled") )
        {
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::operator->(
                        (__int64)(a1 + 32),
                        (__int64 *)a1 + 20)
                   + 266) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::~test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>((void **)a1 + 20);
          *((_QWORD *)a1 + 28) = 0LL;
          *((_QWORD *)a1 + 29) = off_1807C9540;
          *((_QWORD *)a1 + 36) = a1 + 232;
          v9 = (_QWORD *)LockScreenWidgetPackageHelperBase::TryInstallAsync(a1 + 64, a1 + 296, a1 + 232, a1 + 168);
          winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncAction>(v9);
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 296));
        }
        WidgetPlatformPackageHelper::WidgetPlatformPackageHelper((_QWORD *)a1 + 38);
        if ( LockScreenWidgetPackageHelperBase::IsPackageInstalled(
               (LockScreenWidgetPackageHelperBase *)(a1 + 304),
               v11,
               v12) )
        {
          if ( !LockScreenWidgetPackageHelperBase::WasPreviouslyInstalled(v13, L"WidgetPlatformInstalled") )
            WidgetPlatformPackageHelper::WasPreviouslyInstalled(v26, 1);
        }
        else if ( !LockScreenWidgetPackageHelperBase::WasPreviouslyInstalled(v13, L"WidgetPlatformInstalled")
               && LockScreenWidgetPackageHelperBase::IsPackageInstalled(
                    (LockScreenWidgetPackageHelperBase *)(a1 + 64),
                    v14,
                    v15) )
        {
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::operator->(
                        (__int64)(a1 + 32),
                        (__int64 *)a1 + 50)
                   + 267) = 1;
          tip2::test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::~test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>((void **)a1 + 50);
          *((_QWORD *)a1 + 58) = 0LL;
          *((_QWORD *)a1 + 59) = off_1807C9570;
          *((_QWORD *)a1 + 66) = a1 + 472;
          v16 = (_QWORD *)LockScreenWidgetPackageHelperBase::TryInstallAsync(a1 + 304, a1 + 536, a1 + 472, a1 + 408);
          winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncAction>(v16);
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 536));
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55116415>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55116415>::GetImpl'::`2'::impl) )
          {
            if ( !LockScreenWidgetPackageHelperBase::IsPackageInstalled(
                    (LockScreenWidgetPackageHelperBase *)(a1 + 304),
                    v17,
                    v18)
              && !LockScreenWidgetPackageHelperBase::WasPreviouslyInstalled(v19, L"WidgetPlatformInstalled")
              && LockScreenWidgetPackageHelperBase::IsPackageInstalled(
                   (LockScreenWidgetPackageHelperBase *)(a1 + 64),
                   v20,
                   v21) )
            {
              *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::operator->(
                            (__int64)(a1 + 32),
                            (__int64 *)a1 + 68)
                       + 268) = 1;
              tip2::test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::~test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>((void **)a1 + 68);
              v22 = LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync(
                      (__int64)(a1 + 304),
                      (winrt::Windows::Foundation::IUnknown *)(a1 + 552));
              v23 = winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<bool>>(v22);
              winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 552));
              if ( v23 )
              {
                WidgetPlatformPackageHelper::WasPreviouslyInstalled(v24, 1);
                v25 = 6;
              }
              else
              {
                v25 = 9;
                v40 = 9;
              }
              *((_DWORD *)a1 + 140) = v25;
              *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::operator->(
                             (__int64)(a1 + 32),
                             (__int64 *)a1 + 71)
                        + 284) = v40;
              tip2::test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::~test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>((void **)a1 + 71);
              a1[576] = 0;
              DashboardManagerTelemetry::PackageInstalledResultWPR<int const &,bool>((int *)a1 + 140, a1 + 576);
            }
          }
        }
        StartExperiencePackageHelper::StartExperiencePackageHelper((_QWORD *)a1 + 74);
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55480066>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55480066>::GetImpl'::`2'::impl) )
        {
          if ( LockScreenWidgetPackageHelperBase::IsPackageInstalled(
                 (LockScreenWidgetPackageHelperBase *)(a1 + 592),
                 v27,
                 v28) )
          {
            if ( !LockScreenWidgetPackageHelperBase::WasPreviouslyInstalled(v29, L"StartExperiencesInstalled") )
              StartExperiencePackageHelper::WasPreviouslyInstalled(v31, 1);
          }
          else if ( !LockScreenWidgetPackageHelperBase::WasPreviouslyInstalled(v29, L"StartExperiencesInstalled") )
          {
            *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::operator->(
                          (__int64)(a1 + 32),
                          (__int64 *)a1 + 86)
                     + 269) = 1;
            tip2::test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::~test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>((void **)a1 + 86);
            *((_QWORD *)a1 + 94) = 0LL;
            *((_QWORD *)a1 + 95) = off_1807C95A0;
            *((_QWORD *)a1 + 102) = a1 + 760;
            v30 = (_QWORD *)LockScreenWidgetPackageHelperBase::TryInstallAsync(a1 + 592, a1 + 824, a1 + 760, a1 + 696);
            winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncAction>(v30);
            winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 824));
          }
        }
        tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::operator->(
          (__int64)(a1 + 32),
          (__int64 *)a1 + 104);
        IsPackageInstalled = LockScreenWidgetPackageHelperBase::IsPackageInstalled(
                               (LockScreenWidgetPackageHelperBase *)(a1 + 64),
                               v32,
                               v33);
        v35 = *((_QWORD *)a1 + 104);
        *(_BYTE *)(v35 + 270) = IsPackageInstalled;
        v37 = LockScreenWidgetPackageHelperBase::IsPackageInstalled(
                (LockScreenWidgetPackageHelperBase *)(a1 + 304),
                v35,
                v36);
        v38 = *((_QWORD *)a1 + 104);
        *(_BYTE *)(v38 + 271) = v37;
        *(_BYTE *)(*((_QWORD *)a1 + 104) + 272LL) = LockScreenWidgetPackageHelperBase::IsPackageInstalled(
                                                      (LockScreenWidgetPackageHelperBase *)(a1 + 592),
                                                      v38,
                                                      v39);
        tip2::test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::close(a1 + 832);
        tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyInvokedTest,_tip_CopilotHardwareKeyInvokedTest>>::complete((__int64 *)a1 + 4);
        tip2::test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::~test_data_control<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>((void **)a1 + 104);
        std::wstring::_Tidy_deallocate((__int64)(a1 + 640));
        std::wstring::_Tidy_deallocate((__int64)(a1 + 352));
        std::wstring::_Tidy_deallocate((__int64)(a1 + 112));
        wil::com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>((void **)a1 + 4);
      }
      std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::implementation::AppBackupListener *,winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::promise_type::final_suspend(
        a1,
        a1 + 840);
LABEL_36:
      if ( *((_WORD *)a1 + 5) )
        operator delete(a1);
      break;
    default:
      __debugbreak();
      break;
  }
}
