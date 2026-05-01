/*
 * XREFs of _lambda_92c90ed01b0d8642303ed5be6c53eb36_::operator() @ 0x1801615DC
 * Callers:
 *     wil::details::functor_wrapper_void__lambda_92c90ed01b0d8642303ed5be6c53eb36__&_::Run @ 0x1801615C0 (wil--details--functor_wrapper_void__lambda_92c90ed01b0d8642303ed5be6c53eb36__-_--Run.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?revoke@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@winrt@@QEAAXXZ @ 0x1800F6834 (-revoke@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@-$abi@UIShell.c)
 *     ?revoke@?$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAAXXZ @ 0x1800F68C0 (-revoke@-$event_revoker@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@$MP8type@_ea_1800F68C0.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4?$com_ptr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@winrt@@QEAAAEAU01@$$QEAU01@@Z @ 0x1801616EC (--4-$com_ptr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@winrt@@QEAAAEAU01@$$QEA.c)
 */

void __fastcall lambda_92c90ed01b0d8642303ed5be6c53eb36_::operator()(__int64 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // [rsp+30h] [rbp+10h] BYREF

  _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAAXXZ((__int64 *)(*a1 + 352));
  _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAAXXZ((__int64 *)(*a1 + 368));
  v2 = *a1;
  v7 = 0LL;
  winrt::com_ptr<Windows::Internal::Shell::Experience::IBaseExperienceManager>::operator=(v2 + 384, &v7);
  if ( v7 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v7);
  v3 = *a1;
  v7 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)(v3 + 344),
    (winrt::Windows::Foundation::IUnknown *)&v7);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  v4 = *a1;
  v7 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)(v4 + 440),
    (winrt::Windows::Foundation::IUnknown *)&v7);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
  _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAAXXZ((__int64 *)(*a1 + 400));
  _revoke___event_revoker_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_winrt__QEAAXXZ((__int64 *)(*a1 + 416));
  v5 = *a1;
  v7 = 0LL;
  winrt::com_ptr<Windows::Internal::Shell::Experience::IBaseExperienceManager>::operator=(v5 + 432, &v7);
  if ( v7 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v7);
  v6 = *a1;
  v7 = 0LL;
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)(v6 + 392),
    (winrt::Windows::Foundation::IUnknown *)&v7);
  if ( v7 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v7);
}
