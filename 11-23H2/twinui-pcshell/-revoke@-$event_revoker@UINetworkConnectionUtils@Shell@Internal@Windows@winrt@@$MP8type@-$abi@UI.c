/*
 * XREFs of ?revoke@?$event_revoker@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@impl@winrt@@QEAAXXZ @ 0x18072E900
 * Callers:
 *     ?OnNetworkChanged@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUTransitionScreen@7CloudDesktop@3456@AEBURemoteDesktopProviderInfo@3456@@Z @ 0x18072E000 (-OnNetworkChanged@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUTr.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18012C584 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?get@?$weak_ref@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18071D940 (-get@-$weak_ref@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEA@AA@impl@winrt@@AEAAXUINetworkConnectionUtils@Shell@Internal@Windows@3@@Z @ 0x18071DA90 (-revoke_impl@-$event_revoker@UINetworkConnectionUtils@Shell@Internal@Windows@winrt@@$MP8type@-$a.c)
 */

void __fastcall _revoke___event_revoker_UINetworkConnectionUtils_Shell_Internal_Windows_winrt___MP8type___abi_UINetworkConnectionUtils_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEA_AA_impl_winrt__QEAAXXZ(
        __int64 *a1)
{
  __int64 v1; // rbx
  __int64 *v3; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v1 = *a1;
  v4 = 0LL;
  *a1 = 0LL;
  v5 = v1;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=(a1, &v4);
  v3 = winrt::weak_ref<winrt::Windows::Internal::Shell::INetworkConnectionUtils>::get(&v5, &v6);
  _revoke_impl___event_revoker_UINetworkConnectionUtils_Shell_Internal_Windows_winrt___MP8type___abi_UINetworkConnectionUtils_Shell_Internal_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEA_AA_impl_winrt__AEAAXUINetworkConnectionUtils_Shell_Internal_Windows_3__Z(
    (__int64)a1,
    v3);
  if ( v1 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v5);
  if ( v4 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v4);
}
