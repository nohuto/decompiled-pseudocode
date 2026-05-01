/*
 * XREFs of ?TileRemoved@?$consume_WindowsUdk_UI_StartScreen_ITileCollection@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BFI@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@UTileRemovedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1806F6164
 * Callers:
 *     ?RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F505C (-RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$from_com_ref@AEBUITileCollection@StartScreen@UI@WindowsUdk@winrt@@@?$weak_ref@UITileCollection@StartScreen@UI@WindowsUdk@winrt@@@winrt@@AEAAXAEBUITileCollection@StartScreen@UI@WindowsUdk@1@@Z @ 0x1806F0260 (--$from_com_ref@AEBUITileCollection@StartScreen@UI@WindowsUdk@winrt@@@-$weak_ref@UITileCollectio.c)
 */

__int64 *__fastcall winrt::impl::consume_WindowsUdk_UI_StartScreen_ITileCollection<winrt::WindowsUdk::UI::StartScreen::ITileCollection>::TileRemoved(
        void (__fastcall ****a1)(_QWORD, __int64 *, __int64 *),
        __int64 *a2,
        __int64 a3,
        _QWORD *a4)
{
  signed int v6; // eax
  __int64 v7; // rbx
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v10; // [rsp+58h] [rbp+20h]

  v9 = 0LL;
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[10])(*a1, *a4, &v9);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  v7 = v9;
  v10 = a2;
  *a2 = 0LL;
  winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::ITileCollection>::from_com_ref<winrt::WindowsUdk::UI::StartScreen::ITileCollection const &>(
    a2,
    a1);
  a2[1] = v7;
  return a2;
}
