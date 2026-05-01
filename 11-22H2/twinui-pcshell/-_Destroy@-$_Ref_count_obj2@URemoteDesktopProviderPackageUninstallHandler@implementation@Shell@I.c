/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@URemoteDesktopProviderPackageUninstallHandler@implementation@Shell@Internal@Windows@winrt@@@std@@EEAAXXZ @ 0x1801BF690
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??1?$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@?$abi@UIPackageCatalog@ApplicationModel@Windows@winrt@@X@impl@4@EAAHUevent_token@4@@_E1??_95674@$BGI@AA@impl@winrt@@QEAA@XZ @ 0x18012B330 (--1-$event_revoker@UIPackageCatalog@ApplicationModel@Windows@winrt@@$MP8type@-$abi@_ea_18012B330.c)
 */

void __fastcall std::_Ref_count_obj2<winrt::Windows::Internal::Shell::implementation::RemoteDesktopProviderPackageUninstallHandler>::_Destroy(
        __int64 a1)
{
  winrt::Windows::Foundation::IUnknown *v1; // rbx

  v1 = (winrt::Windows::Foundation::IUnknown *)(a1 + 16);
  __1__event_revoker_UIPackageCatalog_ApplicationModel_Windows_winrt___MP8type___abi_UIPackageCatalog_ApplicationModel_Windows_winrt__X_impl_4_EAAHUevent_token_4___E1___95674__BGI_AA_impl_winrt__QEAA_XZ((__int64 *)(a1 + 24));
  if ( *(_QWORD *)v1 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v1);
}
