/*
 * XREFs of CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180274070
 * Callers:
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_InitCoro$2 @ 0x180273FA8 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_InitCoro$2.c)
 * Callees:
 *     ??$await_transform@U?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@PEAVCStartExperienceManager@@@experimental@std@@QEAA?A_P$$QEAU?$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@@Z @ 0x18006D86C (--$await_transform@U-$IAsyncOperation@UDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800B3E54 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180188BA0 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@U?$com_ptr@UIServiceProvider@@@2@AEBUCRect@Geometry@@I@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022B434 (-final_suspend@promise_type@-$coroutine_traits@Ufire_and_forget@winrt@@V-$vector@USnapLaunchTarg.c)
 *     ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHotkeyManager@@@experimental@std@@@?$notify_awaiter@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAA?A_PU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAVCopilotHotkeyManager@@@experimental@std@@@experimental@std@@@Z @ 0x18022F954 (--$await_suspend@Upromise_type@-$coroutine_traits@U-$IAsyncOperation@_N@Foundation@_ea_18022F954.c)
 *     ?await_ready@?$notify_awaiter@U?$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Management@Windows@winrt@@UDeploymentProgress@2345@@Foundation@Windows@winrt@@@impl@winrt@@QEAA_NXZ @ 0x180248A54 (-await_ready@-$notify_awaiter@U-$IAsyncOperationWithProgress@UDeploymentResult@Deployment@Manage.c)
 *     ??$CopilotHotkey_Output_Debug_String@PEBG@CopilotHotkeyManagerTelemetry@@SAX$$QEAPEBG@Z @ 0x18025DAF4 (--$CopilotHotkey_Output_Debug_String@PEBG@CopilotHotkeyManagerTelemetry@@SAX$$QEAPEBG@Z.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180261030 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x18026132C (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?GetLongPressHandlerUri@CopilotHotkeyManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N@Z @ 0x1802637A0 (-GetLongPressHandlerUri@CopilotHotkeyManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ?GetTargetAppPackageFamilyName@CopilotHotkeyManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x1802645D0 (-GetTargetAppPackageFamilyName@CopilotHotkeyManager@@AEAA-AV-$basic_string@GU-$char_traits@G@std.c)
 *     ?SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z @ 0x180273224 (-SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z.c)
 *     ?UpdatePressAndHoldSignalSentFlag@CopilotHotkeyManager@@AEAAX_N@Z @ 0x1802745F8 (-UpdatePressAndHoldSignalSentFlag@CopilotHotkeyManager@@AEAAX_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55121036@@@details@wil@@QEAA_NXZ @ 0x1802749AC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55121036@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID55478411@@@details@wil@@QEAA_NXZ @ 0x180274C1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID55478411@@@details@wil@@QEAA_NX.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x1802CED30 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ??1?$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF128 (--1-$notify_awaiter@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ.c)
 *     ?await_resume@?$notify_awaiter@AEAU?$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x1802DF640 (-await_resume@-$notify_awaiter@AEAU-$IAsyncOperation@_N@Foundation@Windows@winrt@@@impl@winrt@@Q.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180392DF0 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ??0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z @ 0x1803F9020 (--0Uri@Foundation@Windows@winrt@@QEAA@AEBUhstring@param@3@@Z.c)
 *     ??0LauncherOptions@System@Windows@winrt@@QEAA@XZ @ 0x18062F140 (--0LauncherOptions@System@Windows@winrt@@QEAA@XZ.c)
 *     ?LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@@Z @ 0x180630EF4 (-LaunchUriAsync@Launcher@System@Windows@winrt@@SA@AEBUUri@Foundation@34@AEBULauncherOptions@234@.c)
 *     ?TargetApplicationPackageFamilyName@?$consume_Windows_System_ILauncherOptions2@ULauncherOptions@System@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18063363C (-TargetApplicationPackageFamilyName@-$consume_Windows_System_ILauncherOptions2@ULauncherOptions@.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal__ResumeCoro_1(char *a1)
{
  __int64 v2; // rax
  int v3; // edx
  CopilotHotkeyManager *v4; // rcx
  __int64 v5; // r14
  const unsigned __int16 *v6; // rax
  _QWORD *TargetAppPackageFamilyName; // rax
  const unsigned __int16 *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rcx
  void **v13; // rbx
  const wchar_t *v14; // rdx
  _QWORD *v15; // rax
  __int64 *v16; // rdx
  const char *v17; // [rsp+28h] [rbp-A0h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  try
  {
    switch ( *((_WORD *)a1 + 4) )
    {
      case 0xFFFF:
      case 3:
        goto LABEL_26;
      case 2:
        if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55121036>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55121036>::GetImpl'::`2'::impl) )
          goto LABEL_10;
        v2 = *(_QWORD *)(a1 + 274);
        if ( a1[282] )
        {
          if ( !*(_BYTE *)(v2 + 328) )
            goto LABEL_10;
          v3 = *(_DWORD *)(v2 + 332);
        }
        else
        {
          if ( !*(_BYTE *)(v2 + 368) )
            goto LABEL_10;
          v3 = *(_DWORD *)(v2 + 372);
        }
        if ( CopilotHotkeyManager::SendWindowMessageOnInvocation(
               *(CopilotHotkeyManager **)(a1 + 274),
               v3,
               (HWND *)a1 + 2) )
        {
LABEL_24:
          CopilotHotkeyManager::UpdatePressAndHoldSignalSentFlag(v4, a1[282]);
          goto LABEL_25;
        }
LABEL_10:
        v5 = *(_QWORD *)(a1 + 274);
        CopilotHotkeyManager::GetLongPressHandlerUri(v5, (_QWORD *)a1 + 3, a1[282]);
        if ( *((_QWORD *)a1 + 5) )
        {
          v6 = (const unsigned __int16 *)std::wstring::c_str((_QWORD *)a1 + 3);
          winrt::param::hstring::hstring((winrt::param::hstring *)(a1 + 64), v6);
          winrt::Windows::Foundation::Uri::Uri(
            (winrt::Windows::Foundation::Uri *)(a1 + 56),
            (const struct winrt::param::hstring *)(a1 + 64));
          winrt::Windows::System::LauncherOptions::LauncherOptions((winrt::Windows::System::LauncherOptions *)(a1 + 96));
          TargetAppPackageFamilyName = CopilotHotkeyManager::GetTargetAppPackageFamilyName(v5, (_QWORD *)a1 + 17);
          v8 = (const unsigned __int16 *)std::wstring::c_str(TargetAppPackageFamilyName);
          winrt::param::hstring::hstring((winrt::param::hstring *)(a1 + 104), v8);
          winrt::impl::consume_Windows_System_ILauncherOptions2<winrt::Windows::System::LauncherOptions>::TargetApplicationPackageFamilyName(
            a1 + 96,
            a1 + 104);
          std::wstring::_Tidy_deallocate((__int64)(a1 + 136));
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID55478411>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ID55478411>::GetImpl'::`2'::impl)
            && *(_DWORD *)(v5 + 440) == 109 )
          {
            LockSetForegroundWindow(2 - (a1[282] != 0));
          }
          v9 = winrt::Windows::System::Launcher::LaunchUriAsync(
                 (const struct winrt::Windows::Foundation::Uri *)(a1 + 176),
                 (const struct winrt::Windows::System::LauncherOptions *)(a1 + 56));
          v11 = std::experimental::coroutine_traits<winrt::fire_and_forget,CStartExperienceManager *>::promise_type::await_transform<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection>>(
                  v10,
                  (__int64)(a1 + 184),
                  v9);
          *((_QWORD *)a1 + 21) = v11;
          if ( !winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperationWithProgress<winrt::Windows::Management::Deployment::DeploymentResult,winrt::Windows::Management::Deployment::DeploymentProgress>>::await_ready() )
          {
            *((_WORD *)a1 + 4) = 4;
            winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<bool>>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,CopilotHotkeyManager *>::promise_type>(
              v11,
              (__int64)a1);
            return;
          }
LABEL_23:
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncOperation<bool> &>::await_resume(*((_QWORD *)a1 + 21));
          winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 184);
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 176));
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 96));
          winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 56));
          std::wstring::_Tidy_deallocate((__int64)(a1 + 24));
          goto LABEL_24;
        }
        v12 = v5 + 432;
        if ( a1[282] )
        {
          v13 = (void **)(a1 + 216);
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                        v12,
                        (__int64 *)a1 + 27)
                   + 273) = 1;
        }
        else
        {
          v13 = (void **)(a1 + 224);
          *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                        v12,
                        (__int64 *)a1 + 28)
                   + 274) = 1;
        }
        tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(v13);
        std::wstring::wstring(
          (_QWORD *)a1 + 29,
          L"No target URI found in TrySendingCopilotHardwareKeyLongPressSignal() with ");
        v14 = L"true";
        if ( !a1[282] )
          v14 = L"false";
        std::wstring::append(a1 + 232, v14);
        v15 = std::wstring::c_str((_QWORD *)a1 + 29);
        *v16 = (__int64)v15;
        CopilotHotkeyManagerTelemetry::CopilotHotkey_Output_Debug_String<unsigned short const *>(v16);
        wil::details::in1diag3::Log_HrMsg(
          retaddr,
          (void *)0x554,
          (unsigned int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
          (const char *)0x8000FFFFLL,
          (int)"No target uri found.",
          v17);
        std::wstring::_Tidy_deallocate((__int64)(a1 + 232));
        std::wstring::_Tidy_deallocate((__int64)(a1 + 24));
LABEL_25:
        std::experimental::coroutine_traits<winrt::fire_and_forget,std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int>::promise_type::final_suspend(
          (__int64)a1,
          a1 + 272);
LABEL_26:
        if ( *((_WORD *)a1 + 5) )
          operator delete(a1);
        break;
      case 4:
        goto LABEL_23;
      case 5:
        winrt::impl::notify_awaiter<winrt::Windows::Foundation::IAsyncAction>::~notify_awaiter<winrt::Windows::Foundation::IAsyncAction>(a1 + 184);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 176));
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 96));
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)(a1 + 56));
        std::wstring::_Tidy_deallocate((__int64)(a1 + 24));
        goto LABEL_26;
      default:
        __debugbreak();
        return;
    }
  }
  catch ( ... )
  {
    *((_WORD *)a1 + 4) = -1;
    std::experimental::coroutine_traits<winrt::fire_and_forget,winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *>::promise_type::unhandled_exception((winrt *)0xFFFFFFFFLL);
  }
}
