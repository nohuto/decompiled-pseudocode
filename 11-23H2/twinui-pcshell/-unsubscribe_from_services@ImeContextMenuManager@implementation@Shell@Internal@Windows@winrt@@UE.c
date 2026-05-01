/*
 * XREFs of ?unsubscribe_from_services@ImeContextMenuManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1801B8750
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18012C584 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?get@?$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ @ 0x18012C6A8 (-get@-$weak_ref@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEBA@XZ.c)
 *     ?revoke_impl@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BHA@AA@impl@winrt@@AEAAXUIShellViewCoordinator@Shell@UI@WindowsUdk@3@@Z @ 0x18012C7A8 (-revoke_impl@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8_ea_18012C7A8.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::unsubscribe_from_services(
        winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager *this,
        struct IServiceProvider *a2)
{
  char *v2; // rdi
  __int64 v3; // rbx
  winrt::Windows::Foundation::IUnknown *v5; // rax
  __int64 v6; // [rsp+40h] [rbp+20h] BYREF
  __int64 v7; // [rsp+50h] [rbp+30h] BYREF
  __int64 v8; // [rsp+58h] [rbp+38h] BYREF

  v6 = 0LL;
  v2 = (char *)this + 104;
  v3 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  v7 = v3;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 13, &v6);
  v5 = (winrt::Windows::Foundation::IUnknown *)winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::get(
                                                 &v7,
                                                 &v8);
  _revoke_impl___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BHA_AA_impl_winrt__AEAAXUIShellViewCoordinator_Shell_UI_WindowsUdk_3__Z(
    (__int64)v2,
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
