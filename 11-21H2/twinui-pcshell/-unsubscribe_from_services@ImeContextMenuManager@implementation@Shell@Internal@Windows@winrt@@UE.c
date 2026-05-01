/*
 * XREFs of ?unsubscribe_from_services@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801718D0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1800F4980 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?get@?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA?AUIShellViewCoordinator@Shell@UI@WindowsUdk@2@XZ @ 0x1800F694C (-get@-$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA-AUIShellViewCoord.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?revoke_impl@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@AEAAXUIShellViewCoordinator@Shell@UI@WindowsUdk@3@@Z @ 0x180171964 (-revoke_impl@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8_ea_180171964.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::unsubscribe_from_services(
        winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *this,
        struct IServiceProvider *a2)
{
  char *v2; // rdi
  __int64 v3; // rbx
  _QWORD *v5; // rax
  __int64 v6; // [rsp+40h] [rbp+20h] BYREF
  __int64 v7; // [rsp+50h] [rbp+30h] BYREF
  __int64 v8; // [rsp+58h] [rbp+38h] BYREF

  v6 = 0LL;
  v2 = (char *)this + 104;
  v3 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  v7 = v3;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 13, &v6);
  v5 = winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::get(&v7, &v8);
  _revoke_impl___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__AEAAXUIShellViewCoordinator_Shell_UI_WindowsUdk_3__Z(
    v2,
    v5);
  if ( v3 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v7);
  if ( v6 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v6);
  v6 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *)((char *)this + 96),
    (winrt::Windows::Foundation::IUnknown *)&v6);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
}
