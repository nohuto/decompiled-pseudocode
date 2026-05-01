/*
 * XREFs of ??1?$event_revoker@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@impl@winrt@@QEAA@XZ @ 0x18071D138
 * Callers:
 *     ??1BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18071D31C (--1BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4?$event_revoker@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18072CAFC (--4-$event_revoker@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@$MP8type@-$abi@UINetwo.c)
 *     ?ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA?AUTransitionScreenId@TransitionScreen@CloudDesktop@3456@AEBU8893456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072CB80 (-ActivateProvider@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAA-AUTran.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18071D940 (-get@-$weak_ref@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@impl@winrt@@AEAAXUINetworkConnectionUtils@Shell@Internal@Windows@3@@Z @ 0x18071DA90 (-revoke_impl@-$event_revoker@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@$MP8type@-$a.c)
 */

void __fastcall __1__event_revoker_UINetworkConnectionUtils_Shell_Internal_Windows_winrt___MP8type___abi_UINetworkConnectionUtils_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEA_AA_impl_winrt__QEAA_XZ(
        __int64 *a1)
{
  __int64 v2; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 )
  {
    v2 = winrt::weak_ref<winrt::Windows::Internal::Shell::INetworkConnectionUtils>::get(a1, &v3);
    _revoke_impl___event_revoker_UINetworkConnectionUtils_Shell_Internal_Windows_winrt___MP8type___abi_UINetworkConnectionUtils_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEA_AA_impl_winrt__AEAAXUINetworkConnectionUtils_Shell_Internal_Windows_3__Z(
      a1,
      v2);
  }
  if ( *a1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
}
