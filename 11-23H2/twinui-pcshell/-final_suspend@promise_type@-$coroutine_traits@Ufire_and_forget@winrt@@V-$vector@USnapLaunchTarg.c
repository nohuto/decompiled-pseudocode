/*
 * XREFs of ?final_suspend@promise_type@?$coroutine_traits@Ufire_and_forget@winrt@@V?$vector@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@V?$allocator@USnapLaunchTargetData@PlatformExtensions@Shell@Internal@Windows@winrt@@@std@@@std@@U?$com_ptr@UIServiceProvider@@@2@AEBUCRect@Geometry@@I@experimental@std@@QEBA?AUsuspend_never@34@XZ @ 0x18022B434
 * Callers:
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::LaunchSnappedWindowsInternalAsync$_ResumeCoro$1 @ 0x18022A840 (winrt--Windows--Internal--Shell--SnapComponent--implementation--DesktopSnapLayoutMa_ea_18022A840.c)
 *     winrt::impl::await_adapter_winrt::Windows::Foundation::IAsyncOperationWithProgress_winrt::Windows::Management::Deployment::DeploymentResult_winrt::Windows::Management::Deployment::DeploymentProgress___::cancel_asynchronously$_ResumeCoro$1 @ 0x1802493E0 (winrt--impl--await_adapter_winrt--Windows--Foundation--IAsyncOperationWithProgress__ea_1802493E0.c)
 *     CopilotHotkeyManager::CancelHoldAsync$_ResumeCoro$1 @ 0x180261610 (CopilotHotkeyManager--CancelHoldAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::MonitorForCopilotExtendedSignals$_ResumeCoro$1 @ 0x180271D90 (CopilotHotkeyManager--MonitorForCopilotExtendedSignals$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::TryInvokeCopilotFromHardwareKeyAsync$_ResumeCoro$1 @ 0x180273AE0 (CopilotHotkeyManager--TryInvokeCopilotFromHardwareKeyAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x180273D10 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180274070 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

_BYTE *__fastcall std::experimental::coroutine_traits<winrt::fire_and_forget,std::vector<winrt::Windows::Internal::Shell::PlatformExtensions::SnapLaunchTargetData>,winrt::com_ptr<IServiceProvider>,Geometry::CRect const &,unsigned int>::promise_type::final_suspend(
        __int64 a1,
        _BYTE *a2)
{
  if ( winrt_suspend_handler )
    winrt_suspend_handler();
  *a2 = 0;
  return a2;
}
