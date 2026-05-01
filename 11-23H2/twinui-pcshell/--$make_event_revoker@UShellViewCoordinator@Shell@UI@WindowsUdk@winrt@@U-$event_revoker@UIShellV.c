/*
 * XREFs of ??$make_event_revoker@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@U?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@impl@5@PEBU?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@75@@impl@winrt@@YA?AU?$event_revoker@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@$MP8type@?$abi@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@01@PEBU?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator3@UShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@01@Uevent_token@1@@Z @ 0x1800DC168
 * Callers:
 *     ?DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ @ 0x1800DBDF8 (-DelayInitialize@TouchEdgeGestureManager@@QEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$from_com_ref@AEBUIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@@?$weak_ref@UIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@@winrt@@AEAAXAEBUIShellViewCoordinator3@Shell@UI@WindowsUdk@1@@Z @ 0x1800DC2BC (--$from_com_ref@AEBUIShellViewCoordinator3@Shell@UI@WindowsUdk@winrt@@@-$weak_ref@UIShellViewCoo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall ___make_event_revoker_UShellViewCoordinator_Shell_UI_WindowsUdk_winrt__U__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_impl_5_PEBU__consume_WindowsUdk_UI_Shell_IShellViewCoordinator3_UShellViewCoordinator_Shell_UI_WindowsUdk_winrt___75__impl_winrt__YA_AU__event_revoker_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt___MP8type___abi_UIShellViewCoordinator3_Shell_UI_WindowsUdk_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BEI_AA_01_PEBU__consume_WindowsUdk_UI_Shell_IShellViewCoordinator3_UShellViewCoordinator_Shell_UI_WindowsUdk_winrt___01_Uevent_token_1__Z(
        _QWORD *a1,
        void (__fastcall ****a2)(_QWORD, void *, _QWORD **),
        __int64 a3)
{
  void (__fastcall ***v5)(_QWORD, void *, _QWORD **); // rcx
  _QWORD *v6; // rsi
  _QWORD *v8; // [rsp+40h] [rbp+8h] BYREF
  _QWORD *v9; // [rsp+48h] [rbp+10h]

  v8 = a1;
  v5 = *a2;
  v8 = 0LL;
  if ( v5 )
  {
    (**v5)(v5, &winrt::impl::guid_v<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator3>, &v8);
    v6 = v8;
  }
  else
  {
    v6 = 0LL;
  }
  v9 = a1;
  *a1 = 0LL;
  winrt::weak_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator3>::from_com_ref<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator3 const &>(
    a1,
    &v8);
  a1[1] = a3;
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v8);
  return a1;
}
