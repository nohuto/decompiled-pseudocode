/*
 * XREFs of CopilotHotkeyManager::LaunchHardwareKeySettings$_ResumeCoro$1 @ 0x180271830
 * Callers:
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_InitCoro$2 @ 0x180271714 (CopilotHotkeyManager--LaunchHardwareKeySettings$_InitCoro$2.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800B25FC (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@PEAUHWND__@@@experimental@std@@U?$IAsyncOperation@URect@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@X@impl@winrt@@UEAA@XZ @ 0x180225988 (--1-$promise_base@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@URect@Foundation@Windows@w.c)
 *     ?final_suspend@?$promise_base@Upromise_type@?$coroutine_traits@UIAsyncAction@Foundation@Windows@winrt@@PEAVLockScreenWidgetPackageHelperBase@@Uhstring@4@U64@UPackageVersion@ApplicationModel@34@V?$function@$$A6AXAEBUAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@winrt@@@Z@std@@V9std@@@experimental@std@@UIAsyncAction@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x180228D8C (-final_suspend@-$promise_base@Upromise_type@-$coroutine_traits@UIAsyncAction@Founda_ea_180228D8C.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHotkeyManager@@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHotkeyManager@@@experimental@std@@@experimental@std@@@Z @ 0x18022F954 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_18022F954.c)
 *     ??$await_transform@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHotkeyManager@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAA?A_P$$QEAU?$IAsyncOperation@_N@Foundation@Windows@2@@Z @ 0x18022F9C4 (--$await_transform@U-$IAsyncOperation@_N@Foundation@Windows@winrt@@@-$promise_base@Upromise_type.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180248A54 (-await_ready@-$notify_awaiter@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Manage.c)
 *     ??$SettingsLaunched@AEA_N@CopilotHotkeyManagerTelemetry@@SAXAEA_N@Z @ 0x18025DE4C (--$SettingsLaunched@AEA_N@CopilotHotkeyManagerTelemetry@@SAXAEA_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes@@@details@wil@@QEAA_NXZ @ 0x180274AE8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_CopilotHardwareKeyBu_ea_180274AE8.c)
 *     ?await_suspend@final_suspend_awaiter@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHotkeyManager@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA_NU?$coroutine_handle@X@experimental@std@@@Z @ 0x180274D88 (-await_suspend@final_suspend_awaiter@-$promise_base@Upromise_type@-$coroutine_trait_ea_180274D88.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF128 (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@?$notify_awaiter@AEAU?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF640 (-await_resume@-$notify_awaiter@AEAU-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@Q.c)
 *     ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x1803F9020 (--0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z.c)
 *     ?LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@@Z @ 0x180401F94 (-LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@@Z.c)
 *     ??$CoCreateInstance@VApplicationActivationManager@@UIApplicationActivationManager@@Uerr_exception_policy@wil@@@wil@@YA?AV?$com_ptr_t@UIApplicationActivationManager@@Uerr_exception_policy@wil@@@0@K@Z @ 0x18062D8D0 (--$CoCreateInstance@VApplicationActivationManager@@UIApplicationActivationManager@@Uerr_exceptio.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
void __fastcall CopilotHotkeyManager::LaunchHardwareKeySettings__ResumeCoro_1(__int64 a1)
{
  _WORD *v2; // r14
  char v3; // bl
  char *v4; // r15
  __int64 v5; // rax
  __int64 v6; // rbx
  _QWORD *v7; // rax

  v2 = (_WORD *)(a1 + 8);
  switch ( *(_WORD *)(a1 + 8) )
  {
    case 0xFFFF:
    case 1:
    case 3:
      goto LABEL_9;
    case 2:
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_CopilotHardwareKeyBugFixes>::GetImpl'::`2'::impl) )
      {
        wil::CoCreateInstance<ApplicationActivationManager,IApplicationActivationManager,wil::err_exception_policy>(a1 + 24);
        *(_DWORD *)(a1 + 32) = 0;
        v3 = (*(int (__fastcall **)(_QWORD, const wchar_t *, const wchar_t *, _QWORD, __int64))(**(_QWORD **)(a1 + 24)
                                                                                              + 24LL))(
               *(_QWORD *)(a1 + 24),
               L"windows.immersivecontrolpanel_cw5n1h2txyewy!microsoft.windows.immersivecontrolpanel",
               L"page=SettingsPagePersonalizationTextInput&target=SystemSettings_Personalize_TextInput_CopilotHardwareKeyb"
                "oardChoice&invoke=true&internal=true",
               0LL,
               a1 + 32) >= 0;
        v4 = (char *)(a1 + 16);
        *(_BYTE *)(a1 + 16) = v3;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a1 + 24));
      }
      else
      {
        winrt::param::hstring::hstring((winrt::param::hstring *)(a1 + 48), word_18098F1F8);
        winrt::Windows::Foundation::Uri::Uri(
          (winrt::Windows::Foundation::Uri *)(a1 + 40),
          (const struct winrt::param::hstring *)(a1 + 48));
        v5 = winrt::Windows::System::Launcher::LaunchUriAsync((const struct winrt::Windows::Foundation::Uri *)(a1 + 80));
        v6 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,CopilotHotkeyManager *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::await_transform<winrt::Windows::Foundation::IAsyncOperation<bool>>(
               a1 - 112,
               a1 + 88,
               v5);
        *(_QWORD *)(a1 + 144) = v6;
        if ( !winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::await_ready() )
        {
          *v2 = 4;
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<bool>>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,CopilotHotkeyManager *>::promise_type>(
            v6,
            a1);
          return;
        }
LABEL_7:
        v3 = winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<bool> &>::await_resume(*(_QWORD *)(a1 + 144));
        v4 = (char *)(a1 + 16);
        *(_BYTE *)(a1 + 16) = v3;
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 88);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 80));
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 40));
      }
      CopilotHotkeyManagerTelemetry::SettingsLaunched<bool &>(v4);
      *(_BYTE *)(a1 - 16) = v3;
      v7 = winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncAction,LockScreenWidgetPackageHelperBase *,winrt::hstring,winrt::hstring,winrt::Windows::ApplicationModel::PackageVersion,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>,std::function<void (winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem const &)>>::promise_type,winrt::Windows::Foundation::IAsyncAction,void>::final_suspend(
             a1 - 112,
             (_QWORD *)(a1 + 128));
      *(_QWORD *)(a1 + 120) = v7;
      *v2 = 0;
      if ( !(unsigned __int8)winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,CopilotHotkeyManager *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::final_suspend_awaiter::await_suspend(v7) )
      {
LABEL_9:
        winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,void>::~promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,HWND__ *>::promise_type,winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::Rect>,void>(a1 - 112);
        if ( *(_WORD *)(a1 + 10) )
          operator delete((void *)(a1 - 112));
      }
      return;
    case 4:
      goto LABEL_7;
    case 5:
      winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 88);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 80));
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 40));
      goto LABEL_9;
    default:
      __debugbreak();
      return;
  }
}
