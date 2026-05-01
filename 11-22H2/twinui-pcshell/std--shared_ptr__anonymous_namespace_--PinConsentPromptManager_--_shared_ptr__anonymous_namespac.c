/*
 * XREFs of std::shared_ptr__anonymous_namespace_::PinConsentPromptManager_::_shared_ptr__anonymous_namespace_::PinConsentPromptManager_ @ 0x180234EAC
 * Callers:
 *     _winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable_::TypedEventHandler_winrt::Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem_winrt::Windows::Foundation::IInspectable___lambda_8f44ff5c8977fc530aba29e054e0c967____::_1_::dtor$0 @ 0x18022E9C2 (_winrt--Windows--Foundation--TypedEventHandler_winrt--Windows--ApplicationModel--Store--Preview-.c)
 *     _winrt::Windows::Internal::Shell::implementation::PinManager::PinManager_::_1_::dtor$1 @ 0x1802B464D (_winrt--Windows--Internal--Shell--implementation--PinManager--PinManager_--_1_--dtor$1.c)
 *     _winrt::Windows::Foundation::DeferralCompletedHandler::DeferralCompletedHandler__lambda_d2e2cf78e01620d7c4ea8812dfd8399a____::_1_::dtor$0 @ 0x1802BACE3 (_winrt--Windows--Foundation--DeferralCompletedHandler--DeferralCompletedHandler__lambda_d2e2cf78.c)
 *     _CAppThumbnailWindow::SetRectAndCallback_::_1_::dtor$1 @ 0x18055AAC4 (_CAppThumbnailWindow--SetRectAndCallback_--_1_--dtor$1.c)
 *     _StartupAppMonitor::ParentRegKeyCallback_::_1_::dtor$2 @ 0x18063EED6 (_StartupAppMonitor--ParentRegKeyCallback_--_1_--dtor$2.c)
 *     _StartupAppMonitor::RegKeyCallback_::_1_::dtor$1 @ 0x18063F1C1 (_StartupAppMonitor--RegKeyCallback_--_1_--dtor$1.c)
 *     _StartupAppMonitor::StartMonitor_::_1_::dtor$3 @ 0x18063FB66 (_StartupAppMonitor--StartMonitor_--_1_--dtor$3.c)
 *     _StartupAppMonitor::StartMonitor_::_1_::dtor$8 @ 0x18063FBB4 (_StartupAppMonitor--StartMonitor_--_1_--dtor$8.c)
 *     _GuidedSnapAssistControl::CancelIfActive_::_1_::dtor$2 @ 0x1806881FB (_GuidedSnapAssistControl--CancelIfActive_--_1_--dtor$2.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::shared_ptr__anonymous_namespace_::PinConsentPromptManager_::_shared_ptr__anonymous_namespace_::PinConsentPromptManager_(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 8);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
