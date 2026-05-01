/*
 * XREFs of ?unsubscribe_from_services@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180142B60
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?get@?$weak_ref@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@winrt@@QEBA@XZ @ 0x18012B04C (-get@-$weak_ref@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@.c)
 *     ??4?$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x18012C584 (--4-$com_ptr@UIWeakReference@impl@winrt@@@winrt@@QEAAAEAU01@$$QEAU01@@Z.c)
 *     ?revoke_impl@?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@winrt@@AEAAXUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@3@@Z @ 0x18012C818 (-revoke_impl@-$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Win.c)
 *     ?revoke_impl@?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BFI@AA@impl@winrt@@AEAAXUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@3@@Z @ 0x18012C850 (-revoke_impl@-$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell_ea_18012C850.c)
 *     ?revoke_impl@?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BEI@AA@impl@winrt@@AEAAXUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@3@@Z @ 0x18012C888 (-revoke_impl@-$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell_ea_18012C888.c)
 *     ?revoke_impl@?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@AEAAXUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@3@@Z @ 0x18012C8C0 (-revoke_impl@-$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell_ea_18012C8C0.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 */

void __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::unsubscribe_from_services(
        winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *this,
        struct IServiceProvider *a2)
{
  __int64 v3; // rbx
  winrt::Windows::Foundation::IUnknown *v4; // rax
  __int64 v5; // rdi
  winrt::Windows::Foundation::IUnknown *v6; // rax
  __int64 v7; // rdi
  winrt::Windows::Foundation::IUnknown *v8; // rax
  __int64 v9; // rdi
  winrt::Windows::Foundation::IUnknown *v10; // rax
  __int64 v11; // [rsp+50h] [rbp+30h] BYREF
  __int64 v12; // [rsp+60h] [rbp+40h] BYREF
  __int64 v13; // [rsp+68h] [rbp+48h] BYREF

  SmartCookie::Unregister((winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent *)((char *)this + 160));
  v12 = *((_QWORD *)this + 63);
  v3 = v12;
  v11 = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 63, &v11);
  v4 = (winrt::Windows::Foundation::IUnknown *)winrt::weak_ref<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>::get(
                                                 &v12,
                                                 &v13);
  _revoke_impl___event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BDI_AA_impl_winrt__AEAAXUIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_3__Z(
    (__int64)this + 504,
    v4);
  if ( v3 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v12);
  if ( v11 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v11);
  v11 = 0LL;
  v12 = *((_QWORD *)this + 65);
  v5 = v12;
  *((_QWORD *)this + 65) = 0LL;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 65, &v11);
  v6 = (winrt::Windows::Foundation::IUnknown *)winrt::weak_ref<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>::get(
                                                 &v12,
                                                 &v13);
  _revoke_impl___event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BFI_AA_impl_winrt__AEAAXUIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_3__Z(
    (__int64)this + 520,
    v6);
  if ( v5 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v12);
  if ( v11 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v11);
  v11 = 0LL;
  v12 = *((_QWORD *)this + 67);
  v7 = v12;
  *((_QWORD *)this + 67) = 0LL;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 67, &v11);
  v8 = (winrt::Windows::Foundation::IUnknown *)winrt::weak_ref<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>::get(
                                                 &v12,
                                                 &v13);
  _revoke_impl___event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BEI_AA_impl_winrt__AEAAXUIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_3__Z(
    (__int64)this + 536,
    v8);
  if ( v7 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v12);
  if ( v11 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v11);
  v11 = 0LL;
  v12 = *((_QWORD *)this + 69);
  v9 = v12;
  *((_QWORD *)this + 69) = 0LL;
  winrt::com_ptr<winrt::impl::IWeakReference>::operator=((__int64 *)this + 69, &v11);
  v10 = (winrt::Windows::Foundation::IUnknown *)winrt::weak_ref<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>::get(
                                                  &v12,
                                                  &v13);
  _revoke_impl___event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__AEAAXUIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_3__Z(
    (__int64)this + 552,
    v10);
  if ( v9 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v12);
  if ( v11 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v11);
}
