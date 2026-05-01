/*
 * XREFs of ??4?$factory_event_revoker@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$MP8type@?$abi@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAAAEAU012@$$QEAU012@@Z @ 0x1800AA2D4
 * Callers:
 *     ?ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ @ 0x1800A8E70 (-ShellReadyCallback@GamingOverlayExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??1?$factory_event_revoker@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$MP8type@?$abi@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BDI@AA@impl@winrt@@QEAA@XZ @ 0x1801B1D14 (--1-$factory_event_revoker@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@$MP8type@.c)
 */

__int64 __fastcall __4__factory_event_revoker_UIUINavigationControllerStatics_Input_Gaming_Windows_winrt___MP8type___abi_UIUINavigationControllerStatics_Input_Gaming_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAAAEAU012___QEAU012__Z(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a2;
  *a2 = 0LL;
  v4 = a2[1];
  v7 = 0LL;
  v8 = v4;
  v9 = v2;
  winrt::Windows::Foundation::IUnknown::operator=(&v7, a1);
  winrt::Windows::Foundation::IUnknown::operator=(a1, &v9);
  if ( v9 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
  v5 = v8;
  v8 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = v5;
  __1__factory_event_revoker_UIUINavigationControllerStatics_Input_Gaming_Windows_winrt___MP8type___abi_UIUINavigationControllerStatics_Input_Gaming_Windows_winrt__X_impl_5_EAAHUevent_token_5___E1___96785__BDI_AA_impl_winrt__QEAA_XZ((winrt::Windows::Foundation::IUnknown *)&v7);
  return a1;
}
