/*
 * XREFs of ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BEI@AA@impl@winrt@@QEAA@XZ @ 0x180129978
 * Callers:
 *     ?subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800A3070 (-subscribe_to_services@ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAAXPE.c)
 *     ??1ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAA@XZ @ 0x180129594 (--1ThemeCoordinator@implementation@Themes@UI@Internal@Windows@winrt@@UEAA@XZ.c)
 *     ??1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180129678 (--1AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 *     _winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::ThemeCoordinator_::_1_::dtor$9 @ 0x1802B48DA (_winrt--Windows--Internal--UI--Themes--implementation--ThemeCoordinator--ThemeCoord_ea_1802B48DA.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::AppBackupListener_::_1_::dtor$2 @ 0x1802B49A7 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--AppBackupListe_ea_1802B49A7.c)
 *     ??4?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BEI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1806E1D00 (--4-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@_ea_1806E1D00.c)
 *     ?RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F4A4C (-RegisterPackageListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18012B378 (-get@-$weak_ref@UIPackageCatalog@ApplicationModel@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BEI@AA@impl@winrt@@AEAAXUIPackageCatalog@ApplicationModel@Windows@3@@Z @ 0x18012B3D0 (-revoke_impl@-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@UIP.c)
 */

void __fastcall __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BEI_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = winrt::weak_ref<winrt::Windows::ApplicationModel::IPackageCatalog>::get(a1, &v3);
    _revoke_impl___event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BEI_AA_impl_winrt__AEAAXUIPackageCatalog_ApplicationModel_Windows_3__Z(
      a1,
      v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
}
