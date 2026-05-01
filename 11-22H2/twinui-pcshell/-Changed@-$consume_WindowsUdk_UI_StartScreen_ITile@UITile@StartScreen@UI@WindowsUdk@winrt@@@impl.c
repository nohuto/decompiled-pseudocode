/*
 * XREFs of ?Changed@?$consume_WindowsUdk_UI_StartScreen_ITile@UITile@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AU?$event_revoker@UITile@StartScreen@UI@WindowsUdk@winrt@@$MP8type@?$abi@UITile@StartScreen@UI@WindowsUdk@winrt@@X@impl@5@EAAHUevent_token@5@@_E1??_96785@$BOA@AA@23@Uauto_revoke_t@3@AEBU?$TypedEventHandler@UTile@StartScreen@UI@WindowsUdk@winrt@@UTileChangedEventArgs@2345@@Foundation@Windows@3@@Z @ 0x1806F245C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1 @ 0x18025AD50 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_ResumeCoro$1.c)
 *     ?RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1806F505C (-RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$from_com_ref@AEBUITile@StartScreen@UI@WindowsUdk@winrt@@@?$weak_ref@UITile@StartScreen@UI@WindowsUdk@winrt@@@winrt@@AEAAXAEBUITile@StartScreen@UI@WindowsUdk@1@@Z @ 0x1806F01A8 (--$from_com_ref@AEBUITile@StartScreen@UI@WindowsUdk@winrt@@@-$weak_ref@UITile@StartScreen@UI@Win.c)
 */

__int64 *__fastcall winrt::impl::consume_WindowsUdk_UI_StartScreen_ITile<winrt::WindowsUdk::UI::StartScreen::ITile>::Changed(
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
  v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64 *))(**a1)[27])(*a1, *a4, &v9);
  if ( v6 < 0 )
    winrt::throw_hresult(v6);
  v7 = v9;
  v10 = a2;
  *a2 = 0LL;
  winrt::weak_ref<winrt::WindowsUdk::UI::StartScreen::ITile>::from_com_ref<winrt::WindowsUdk::UI::StartScreen::ITile const &>(
    a2,
    a1);
  a2[1] = v7;
  return a2;
}
