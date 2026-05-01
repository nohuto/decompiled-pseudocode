/*
 * XREFs of ?get_return_object@?$promise_base@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@PEAUPinManager@implementation@Shell@Internal@34@Uhstring@4@U94@USecondaryTile@StartScreen@UI@34@PEFBU_ITEMIDLIST@@_N_NW4PINNEDLISTMODIFYCALLER@@VPinManagerRequestPinItem@PinManagerTelemetry@@V?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@V?$test_watcher@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@@experimental@std@@U?$IAsyncOperation@_N@Foundation@Windows@winrt@@X@impl@winrt@@QEBA?AU?$IAsyncOperation@_N@Foundation@Windows@3@XZ @ 0x180069A58
 * Callers:
 *     JointResize::EnsureTileCollectionAsync$_InitCoro$2 @ 0x180213598 (JointResize--EnsureTileCollectionAsync$_InitCoro$2.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::DropDataOnUwpEndPointAsync$_InitCoro$2 @ 0x18021848C (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulatorComponent--.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::InsertAsync$_InitCoro$2 @ 0x180218B90 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_180218B90.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::IsSupportedAsync$_InitCoro$2 @ 0x180218F88 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_180218F88.c)
 *     winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::SimulateDrop$_InitCoro$2 @ 0x180219388 (winrt--Windows--Internal--Shell--DragDropSimulator--implementation--DragDropSimulat_ea_180219388.c)
 *     winrt::when_any$_InitCoro$2_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference__winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Storage::Streams::IRandomAccessStreamReference___ @ 0x18021AB94 (winrt--when_any$_InitCoro$2_winrt--Windows--Foundation--IAsyncOperation_winrt--Windows--Storage-.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_InitCoro$2 @ 0x18021D64C (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Ini.c)
 *     winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::CalculateFlyoutBoundsAsync$_InitCoro$2 @ 0x18022C50C (winrt--Windows--Internal--Shell--SnapComponent--implementation--SnapFlyoutInstance--CalculateFly.c)
 *     _anonymous_namespace_::EnsureWebExperiencePackageInstalled$_InitCoro$2 @ 0x1802394DC (_anonymous_namespace_--EnsureWebExperiencePackageInstalled$_InitCoro$2.c)
 *     _anonymous_namespace_::RepairWebExperiencePackage$_InitCoro$2 @ 0x180241554 (_anonymous_namespace_--RepairWebExperiencePackage$_InitCoro$2.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_InitCoro$2_PinManagerTelemetry::PinManagerPinItemToTaskbarShim_ @ 0x18024C1C4 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAsync$_InitCoro.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::HandleRequestPinItemAsync$_InitCoro$2_PinManagerTelemetry::PinManagerRequestPinItem_ @ 0x18024C374 (winrt--Windows--Internal--Shell--implementation--PinManager--HandleRequestPinItemAs_ea_18024C374.c)
 *     winrt::Windows::Internal::Shell::implementation::PinManager::ShowPinDialog$_InitCoro$2 @ 0x180251C70 (winrt--Windows--Internal--Shell--implementation--PinManager--ShowPinDialog$_InitCoro$2.c)
 *     RequestNotificationPinConsentAsync$_InitCoro$2 @ 0x1802536C8 (RequestNotificationPinConsentAsync$_InitCoro$2.c)
 *     winrt::Windows::Internal::Shell::implementation::MeetAndChatIris::GetFallbackContentAsync$_InitCoro$2 @ 0x180255F2C (winrt--Windows--Internal--Shell--implementation--MeetAndChatIris--GetFallbackContentAsync$_InitC.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_InitCoro$2 @ 0x180257238 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_InitCoro$2.c)
 *     Util::TryOpenFileMappingAsStreamForWindowAsync$_InitCoro$2 @ 0x18027960C (Util--TryOpenFileMappingAsStreamForWindowAsync$_InitCoro$2.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::impl::promise_base<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<bool>,winrt::Windows::Internal::Shell::implementation::PinManager *,winrt::hstring,winrt::hstring,winrt::Windows::UI::StartScreen::SecondaryTile,_ITEMIDLIST const __unaligned *,bool,bool,enum PINNEDLISTMODIFYCALLER,PinManagerTelemetry::PinManagerRequestPinItem,tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>,tip2::test_watcher<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>>::promise_type,winrt::Windows::Foundation::IAsyncOperation<bool>,void>::get_return_object(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  *(_QWORD *)a2 = a1 + 16;
  winrt::Windows::Foundation::IUnknown::add_ref(a2);
  return a2;
}
