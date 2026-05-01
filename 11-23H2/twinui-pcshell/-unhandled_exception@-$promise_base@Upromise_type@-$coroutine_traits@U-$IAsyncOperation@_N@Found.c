/*
 * XREFs of ?unhandled_exception@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerPinItemToTaskbarShim@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEAAXXZ @ 0x1804FDD20
 * Callers:
 *     _winrt::Windows::Internal::Shell::XamlExplorerHost::WASDK::implementation::UseMrtShim_WASDK$_ResumeCoro$1_::_1_::catch$12 @ 0x1801FB272 (_winrt--Windows--Internal--Shell--XamlExplorerHost--WASDK--implementation--UseMrtSh_ea_1801FB272.c)
 *     _JointResize::EnsureTileCollectionAsync$_ResumeCoro$1_::_1_::catch$9 @ 0x1802139C0 (_JointResize--EnsureTileCollectionAsync$_ResumeCoro$1_--_1_--catch$9.c)
 *     _CVirtualDesktopManager::SwitchContextForVDAnimation$_ResumeCoro$1_::_1_::catch$8 @ 0x180215C8A (_CVirtualDesktopManager--SwitchContextForVDAnimation$_ResumeCoro$1_--_1_--catch$8.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_ResumeCoro$1_::_1_::catch$16 @ 0x180218AB8 (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_180218AB8.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_ResumeCoro$1_::_1_::catch$8 @ 0x180218ECC (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_180218ECC.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_ResumeCoro$1_::_1_::catch$8 @ 0x1802192CC (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_1802192CC.c)
 *     _winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_ResumeCoro$1_::_1_::catch$83 @ 0x180219DDE (_winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimula_ea_180219DDE.c)
 *     _winrt::when_any$_ResumeCoro$1_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference____::_1_::catch$13 @ 0x18021AFDC (_winrt--when_any$_ResumeCoro$1_winrt--Windows--Foundation--IAsyncOperation_winrt--W_ea_18021AFDC.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1_::_1_::catch$25 @ 0x18021DEDA (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumb_ea_18021DEDA.c)
 *     _winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_ResumeCoro$1_::_1_::catch$8 @ 0x18022CBFC (_winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance_ea_18022CBFC.c)
 *     __anonymous_namespace_::EnsureWebExperiencePackageInstalled$_ResumeCoro$1_::_1_::catch$63 @ 0x18023A380 (__anonymous_namespace_--EnsureWebExperiencePackageInstalled$_ResumeCoro$1_--_1_--catch$63.c)
 *     __anonymous_namespace_::RepairWebExperiencePackage$_ResumeCoro$1_::_1_::catch$16 @ 0x180241AE6 (__anonymous_namespace_--RepairWebExperiencePackage$_ResumeCoro$1_--_1_--catch$16.c)
 *     _winrt::Windows::Internal::Shell::implementation::WaitConfigurableDurationAsync$_ResumeCoro$1_::_1_::catch$6 @ 0x180247611 (_winrt--Windows--Internal--Shell--implementation--WaitConfigurableDurationAsync$_Re_ea_180247611.c)
 *     _winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_ResumeCoro$1_::_1_::catch$9 @ 0x180247A04 (_winrt--Windows--Internal--Shell--implementation--WaitForShellDesktopSwitchEvent$_R_ea_180247A04.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerPinItemToTaskbarShim__::_1_::catch$34 @ 0x18024D216 (_winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemA_ea_18024D216.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_ResumeCoro$1_PinManagerTelemetry::PinManagerRequestPinItem__::_1_::catch$34 @ 0x18024DF46 (_winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemA_ea_18024DF46.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_ResumeCoro$1_::_1_::catch$16 @ 0x180252224 (_winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_Resume_ea_180252224.c)
 *     _RequestNotificationPinConsentAsync$_ResumeCoro$1_::_1_::catch$39 @ 0x18025408C (_RequestNotificationPinConsentAsync$_ResumeCoro$1_--_1_--catch$39.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::InstallForCurrentUserAsync$_ResumeCoro$1_::_1_::catch$27 @ 0x180254932 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatManager--InstallForCur_ea_180254932.c)
 *     _FallbackFlyoutView::Hide$_ResumeCoro$1_::_1_::catch$4 @ 0x18025531A (_FallbackFlyoutView--Hide$_ResumeCoro$1_--_1_--catch$4.c)
 *     _FallbackFlyoutView::Show$_ResumeCoro$1_::_1_::catch$4 @ 0x1802556D2 (_FallbackFlyoutView--Show$_ResumeCoro$1_--_1_--catch$4.c)
 *     _ApplicationFlyoutView::Hide$_ResumeCoro$1_::_1_::catch$5 @ 0x180255A40 (_ApplicationFlyoutView--Hide$_ResumeCoro$1_--_1_--catch$5.c)
 *     _ApplicationFlyoutView::Show$_ResumeCoro$1_::_1_::catch$6 @ 0x180255E42 (_ApplicationFlyoutView--Show$_ResumeCoro$1_--_1_--catch$6.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_ResumeCoro$1_::_1_::catch$27 @ 0x180256412 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackConte_ea_180256412.c)
 *     _winrt::Windows::Internal::Shell::implementation::MeetAndChatFallbackProp::LoadStreamAsync$_ResumeCoro$1_::_1_::catch$13 @ 0x180256C29 (_winrt--Windows--Internal--Shell--implementation--MeetAndChatFallbackProp--LoadStre_ea_180256C29.c)
 *     _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::catch$54 @ 0x180257F9D (_CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1_--_1_--catch$54.c)
 *     _Util::TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1_::_1_::catch$25 @ 0x180279DDD (_Util--TryOpenFileMappingAsStreamForWindowAsync$_ResumeCoro$1_--_1_--catch$25.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowsTracker::SetEventHookForWindowAsync$_ResumeCoro$1_::_1_::catch$9 @ 0x18027CB15 (_winrt--Windows--Internal--Shell--implementation--WindowsTracker--SetEventHookForWi_ea_18027CB15.c)
 *     _winrt::Windows::Internal::Shell::implementation::WindowsTracker::UnhookEventForAllWindowsAsync$_ResumeCoro$1_::_1_::catch$17 @ 0x18027CED6 (_winrt--Windows--Internal--Shell--implementation--WindowsTracker--UnhookEventForAll_ea_18027CED6.c)
 *     _TaskViewFrame::UpdateWorkAreaAsync$_ResumeCoro$1_::_1_::catch$9 @ 0x18028DC17 (_TaskViewFrame--UpdateWorkAreaAsync$_ResumeCoro$1_--_1_--catch$9.c)
 * Callees:
 *     ??0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z @ 0x18040F1F0 (--0slim_lock_guard@winrt@@QEAA@AEAUslim_mutex@1@@Z.c)
 *     ??0exception_ptr@std@@QEAA@AEBV01@@Z @ 0x1804DF9CC (--0exception_ptr@std@@QEAA@AEBV01@@Z.c)
 *     ??4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z @ 0x1804DFAC4 (--4exception_ptr@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?current_exception@std@@YA?AVexception_ptr@1@XZ @ 0x1804E0BAC (-current_exception@std@@YA-AVexception_ptr@1@XZ.c)
 *     ?rethrow_exception@std@@YAXVexception_ptr@1@@Z @ 0x1804E0BE0 (-rethrow_exception@std@@YAXVexception_ptr@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerPinItemToTaskbarShim,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::unhandled_exception(
        __int64 a1)
{
  void *v2; // rax
  std::exception_ptr *v3; // rcx
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  winrt::slim_lock_guard::slim_lock_guard((winrt::slim_lock_guard *)&SRWLock, (RTL_SRWLOCK *)(a1 + 48));
  v2 = std::current_exception(v4);
  std::exception_ptr::operator=((void *)(a1 + 32), v2);
  __ExceptionPtrDestroy(v4);
  v3 = std::exception_ptr::exception_ptr((std::exception_ptr *)v4, (const struct std::exception_ptr *)(a1 + 32));
  try
  {
    std::rethrow_exception(v3);
  }
  catch ( winrt::hresult_canceled )
  {
    std::_Atomic_storage<enum winrt::Windows::Foundation::AsyncStatus,4>::store((unsigned int *)(a1 + 88), 2);
  }
  catch ( ... )
  {
    std::_Atomic_storage<enum winrt::Windows::Foundation::AsyncStatus,4>::store((unsigned int *)(a1 + 88), 3);
  }
  ReleaseSRWLockExclusive_0(SRWLock);
}
