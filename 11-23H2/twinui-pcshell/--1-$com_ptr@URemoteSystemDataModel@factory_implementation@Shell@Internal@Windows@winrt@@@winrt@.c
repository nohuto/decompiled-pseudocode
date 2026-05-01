/*
 * XREFs of ??1?$com_ptr@URemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@@winrt@@QEAA@XZ @ 0x18047F168
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::SetPhysicalDeviceAccessState_::_1_::dtor$0 @ 0x1802795EE (_winrt--Windows--Internal--Shell--implementation--RemoteSystemDataModel--SetPhysicalDeviceAccess.c)
 *     _winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs::GetDeferral_::_1_::dtor$0 @ 0x1802B9650 (_winrt--WindowsUdk--UI--Shell--implementation--SearchAppActivatedEventArgs--GetDeferral_--_1_--d.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager::RecoverRemoteSessions_::_1_::dtor$0 @ 0x1802C6A1B (_winrt--Windows--Internal--Shell--implementation--RemoteSessionWindowManager--RecoverRemoteSessi.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::CloudPCComponent_winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemProviderExtension_::RegisterRemoteDesktopProcess_::_1_::dtor$1 @ 0x1807072D0 (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--CloudPCCompo_ea_1807072D0.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::CloudPCComponent_winrt::Windows::Internal::Shell::RemoteSystems::IRemoteSystemProviderExtension_::UnregisterRemoteDesktopProcess_::_1_::dtor$1 @ 0x1807079B3 (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--CloudPCCompo_ea_1807079B3.c)
 *     _winrt::Windows::Internal::Shell::implementation::CloudPCComponent::UpdateCloudPCInfo_::_1_::dtor$0 @ 0x180707A96 (_winrt--Windows--Internal--Shell--implementation--CloudPCComponent--UpdateCloudPCInfo_--_1_--dto.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::CleanUpRemoteSystem_::_1_::dtor$0 @ 0x18070F81E (_winrt--Windows--Internal--Shell--implementation--RemoteSystemDataModel--CleanUpRemoteSystem_--_.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetRemoteSystem_::_1_::dtor$0 @ 0x180712F01 (_winrt--Windows--Internal--Shell--implementation--RemoteSystemDataModel--GetRemoteSystem_--_1_--.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::GetSystemId_::_1_::dtor$0 @ 0x18071353D (_winrt--Windows--Internal--Shell--implementation--RemoteSystemDataModel--GetSystemId_--_1_--dtor.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::LaunchRemoteSystemSettingsAsync_::_1_::dtor$0 @ 0x18071580D (_winrt--Windows--Internal--Shell--implementation--RemoteSystemDataModel--LaunchRemoteSystemSetti.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSystemDataModel::RemoveWindow_::_1_::dtor$0 @ 0x180717DBB (_winrt--Windows--Internal--Shell--implementation--RemoteSystemDataModel--RemoveWindow_--_1_--dto.c)
 *     _winrt::impl::produce_winrt::Windows::Internal::Shell::implementation::RemoteSessionWindowManager_winrt::Windows::Internal::Shell::IRemoteSessionWindowManager_::PerformLocalAction_::_1_::dtor$1 @ 0x180722B26 (_winrt--impl--produce_winrt--Windows--Internal--Shell--implementation--RemoteSessio_ea_180722B26.c)
 *     _winrt::Windows::Internal::Shell::implementation::BootProviderActivator::LaunchAsync_::_1_::dtor$1 @ 0x18072DF60 (_winrt--Windows--Internal--Shell--implementation--BootProviderActivator--LaunchAsync_--_1_--dtor.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::LaunchAsync_::_1_::dtor$2 @ 0x180730C70 (_winrt--Windows--Internal--Shell--implementation--SwitchProviderActivator--LaunchAsync_--_1_--dt.c)
 *     _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::SwitchToRemoteDesktop_::_1_::dtor$20 @ 0x18073346E (_winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--SwitchTo_ea_18073346E.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXXZ @ 0x1800B1AC0 (-unconditional_release_ref@-$com_ptr@USearchAppActivatedEventArgs@implementation@Shell@UI@Window.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel>::~com_ptr<winrt::Windows::Internal::Shell::factory_implementation::RemoteSystemDataModel>(
        volatile __int64 **a1)
{
  __int64 result; // rax

  if ( *a1 )
    return winrt::com_ptr<winrt::WindowsUdk::UI::Shell::implementation::SearchAppActivatedEventArgs>::unconditional_release_ref(a1);
  return result;
}
