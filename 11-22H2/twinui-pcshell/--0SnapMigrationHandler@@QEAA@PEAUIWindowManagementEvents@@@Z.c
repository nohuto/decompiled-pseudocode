/*
 * XREFs of ??0SnapMigrationHandler@@QEAA@PEAUIWindowManagementEvents@@@Z @ 0x18012AEB0
 * Callers:
 *     ??$make@USnapMigrationHandler@@PEAUIWindowManagementEvents@@@winrt@@YA?A_P$$QEAPEAUIWindowManagementEvents@@@Z @ 0x18012AE4C (--$make@USnapMigrationHandler@@PEAUIWindowManagementEvents@@@winrt@@YA-A_P$$QEAPEAUIWindowManage.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$convert_from_abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@wil@@YA?AUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18012AFEC (--$convert_from_abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winr.c)
 *     ??4?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x18012B0A4 (--4-$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt.c)
 *     ??1?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@impl@winrt@@QEAA@XZ @ 0x18012B0FC (--1-$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@_ea_18012B0FC.c)
 *     ??$get_weak@USnapMigrationHandler@@@?$root_implements@USnapMigrationHandler@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@IEAA?AU?$weak_ref@USnapMigrationHandler@@@2@XZ @ 0x18012B168 (--$get_weak@USnapMigrationHandler@@@-$root_implements@USnapMigrationHandler@@UIInspectable@Found.c)
 *     ?WindowMigrationEvent@?$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowManagementEvents2@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@$MP8type@?$abi@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BHI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@winrt@@UWindowMigrationEventArgs@23456@@Foundation@Windows@3@@Z @ 0x18012B1DC (-WindowMigrationEvent@-$consume_Windows_Internal_Shell_WindowManagementEvents_IWindowManagementE.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=6
SnapMigrationHandler *__fastcall SnapMigrationHandler::SnapMigrationHandler(
        SnapMigrationHandler *this,
        struct IWindowManagementEvents *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // [rsp+20h] [rbp-40h] BYREF
  __int128 v10; // [rsp+28h] [rbp-38h]
  _BYTE v11[16]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-18h] BYREF
  __int128 v13; // [rsp+50h] [rbp-10h]
  __int64 *v14; // [rsp+90h] [rbp+30h] BYREF
  __int64 v15; // [rsp+98h] [rbp+38h] BYREF

  *((_QWORD *)this + 2) = &winrt::impl::produce<SnapFlyoutHost,winrt::Windows::Foundation::IInspectable>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_QWORD *)this + 1) = 1LL;
  *(_QWORD *)this = &SnapMigrationHandler::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  wil::convert_from_abi<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>(&v9, a2);
  winrt::impl::root_implements<SnapMigrationHandler,winrt::Windows::Foundation::IInspectable>::get_weak<SnapMigrationHandler>(
    this,
    &v15);
  *(_QWORD *)&v10 = SnapMigrationHandler::OnWindowMigrationEvent;
  DWORD2(v10) = 0;
  v3 = v15;
  v15 = 0LL;
  v12 = v3;
  v13 = v10;
  v14 = &v12;
  v4 = operator new(0x28uLL);
  v6 = v12;
  v12 = 0LL;
  v4[1] = v6;
  *((_OWORD *)v4 + 1) = v13;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v4 + 8) = 1;
  *v4 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2,winrt::Windows::Internal::Shell::WindowManagementEvents::WindowMigrationEventArgs>,_lambda_688536045750b024e9c980c09e4232a8_>::`vftable';
  v14 = v4;
  if ( v12 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v12);
  v7 = winrt::impl::consume_Windows_Internal_Shell_WindowManagementEvents_IWindowManagementEvents2<winrt::Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2>::WindowMigrationEvent(
         &v9,
         v11,
         v5,
         &v14);
  __4__event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
    (char *)this + 24,
    v7);
  __1__event_revoker_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt___MP8type___abi_UIWindowManagementEvents2_WindowManagementEvents_Shell_Internal_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BHI_AA_impl_winrt__QEAA_XZ(v11);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
  if ( v15 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v15);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  return this;
}
