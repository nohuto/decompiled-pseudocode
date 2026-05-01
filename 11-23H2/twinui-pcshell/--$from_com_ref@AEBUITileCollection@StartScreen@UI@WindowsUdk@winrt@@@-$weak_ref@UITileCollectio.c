/*
 * XREFs of ??$from_com_ref@AEBUITileCollection@StartScreen@UI@WindowsUdk@winrt@@@?$weak_ref@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@winrt@@AEAAXAEBUITileCollection@StartScreen@UI@WindowsUdk@1@@Z @ 0x1806F0260
 * Callers:
 *     ?TileAdded@?$consume_WindowsUdk_UI_StartScreen_ITileCollection@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BEI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UTileAddedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1806F60D8 (-TileAdded@-$consume_WindowsUdk_UI_StartScreen_ITileCollection@UITileCollection@StartScreen@UI@W.c)
 *     ?TileRemoved@?$consume_WindowsUdk_UI_StartScreen_ITileCollection@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UTileRemovedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1806F6164 (-TileRemoved@-$consume_WindowsUdk_UI_StartScreen_ITileCollection@UITileCollection@StartScreen@UI.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800B1FC4 (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

void __fastcall winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::ITileCollection>::from_com_ref<winrt::WindowsUdk::UI::StartScreen::ITileCollection const &>(
        __int64 *a1,
        void (__fastcall ****a2)(_QWORD, __int64 *, __int64 *))
{
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, __int64 *); // rsi
  signed int v6; // eax
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = *a2;
  if ( *a2 )
  {
    v7 = 0LL;
    (**v3)(v3, &winrt::impl::guid_v<winrt::impl::IWeakReferenceSource>, &v7);
    v4 = v7;
    v8 = v7;
    v5 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 24LL);
    if ( *a1 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(a1);
    v6 = v5(v4, a1);
    if ( v6 < 0 )
      winrt::throw_hresult(v6);
    if ( v4 )
      winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(&v8);
  }
}
