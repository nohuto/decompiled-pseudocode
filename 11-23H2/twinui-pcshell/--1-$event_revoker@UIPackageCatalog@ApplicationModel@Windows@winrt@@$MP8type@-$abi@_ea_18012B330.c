/*
 * XREFs of ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x18012B330
 * Callers:
 *     ??0RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x1800899F0 (--0RemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@QEA.c)
 *     ??4?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x180089B24 (--4-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@UIPackageCata.c)
 *     ??1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180129678 (--1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ?_Destroy@?$_Ref_count_obj2@URemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x1801BF690 (-_Destroy@-$_Ref_count_obj2@URemoteDesktopProviderPackageUninstallHandler@implementation@Shell@I.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::AppBackupListener_::_1_::dtor$4 @ 0x1802B49D3 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--AppBackupListe_ea_1802B49D3.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler::RemoteDesktopProviderPackageUninstallHandler_::_1_::dtor$1 @ 0x1802B4B81 (_winrt--Windows--Internal--Shell--implementation--RemoteDesktopProviderPackageUnins_ea_1802B4B81.c)
 *     ?RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F4A4C (-RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?get@?$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18012B378 (-get@-$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@impl@winrt@@AEAAXUIPackageCatalog@ApplicationModel@Windows@3@@Z @ 0x18012C7E0 (-revoke_impl@-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8t_ea_18012C7E0.c)
 */

void __fastcall __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BGI_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = winrt::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>::get(a1, &v3);
    _revoke_impl___event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BGI_AA_impl_winrt__AEAAXUIPackageCatalog_ApplicationModel_Windows_3__Z(
      a1,
      v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
}
