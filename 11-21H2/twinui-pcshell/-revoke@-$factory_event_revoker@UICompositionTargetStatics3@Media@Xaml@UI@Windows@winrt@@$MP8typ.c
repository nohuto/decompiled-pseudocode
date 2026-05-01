/*
 * XREFs of ?revoke@?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@winrt@@QEAAXXZ @ 0x18060FE28
 * Callers:
 *     _lambda_002af4b129f803392343893f362c92bd_::operator() @ 0x18060E65C (_lambda_002af4b129f803392343893f362c92bd_--operator().c)
 *     _lambda_08870fe2eff2466db8789d1669c06935_::operator() @ 0x180610F98 (_lambda_08870fe2eff2466db8789d1669c06935_--operator().c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?revoke_impl@?$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$MP8type@?$abi@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@X@impl@6@EAAHUevent_token@6@@_E1??_97896@$BDI@AA@impl@winrt@@AEAAXUICompositionTargetStatics3@Media@Xaml@UI@Windows@3@@Z @ 0x18060FE7C (-revoke_impl@-$factory_event_revoker@UICompositionTargetStatics3@Media@Xaml@UI@Windows@winrt@@$M.c)
 */

void __fastcall _revoke___factory_event_revoker_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt___MP8type___abi_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BDI_AA_impl_winrt__QEAAXXZ(
        winrt::Windows::Foundation::IUnknown *a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = *(_QWORD *)a1;
  v3 = 0LL;
  *(_QWORD *)a1 = 0LL;
  v4 = v1;
  winrt::Windows::Foundation::IUnknown::operator=(a1, (winrt::Windows::Foundation::IUnknown *)&v3);
  _revoke_impl___factory_event_revoker_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt___MP8type___abi_UICompositionTargetStatics3_Media_Xaml_UI_Windows_winrt__X_impl_6_EAAHUevent_token_6___E1___97896__BDI_AA_impl_winrt__AEAAXUICompositionTargetStatics3_Media_Xaml_UI_Windows_3__Z(
    a1,
    &v4);
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
}
