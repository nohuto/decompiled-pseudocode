/*
 * XREFs of ??$?0UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@P8012345@EAA?AUfire_and_forget@5@UTile@StartScreen@UI@WindowsUdk@5@UTileChangedEventArgs@89WindowsUdk@5@@Z@?$TypedEventHandler@UTile@StartScreen@UI@WindowsUdk@winrt@@UTileChangedEventArgs@2345@@Foundation@Windows@winrt@@QEAA@$$QEAU?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@3@P8AppBackupListener@implementation@Shell@Internal@23@EAA?AUfire_and_forget@3@UTile@StartScreen@UI@WindowsUdk@3@UTileChangedEventArgs@StartScreen@UI@WindowsUdk@3@@Z@Z @ 0x1806EDDAC
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1 @ 0x18025AD50 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x1800D9200 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>(
        _QWORD *a1,
        __int64 *a2,
        __int128 *a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h]
  _QWORD *v9; // [rsp+50h] [rbp+8h]

  v4 = *a2;
  *a2 = 0LL;
  v7 = v4;
  v8 = *a3;
  v9 = operator new(0x28uLL);
  v5 = v7;
  v7 = 0LL;
  v9[1] = v5;
  *((_OWORD *)v9 + 1) = v8;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v9 + 8) = 1;
  *v9 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::WindowsUdk::UI::StartScreen::Tile,winrt::WindowsUdk::UI::StartScreen::TileChangedEventArgs>,_lambda_09ec479edf7333951db41c7f2e8a33bc_>::`vftable';
  *a1 = v9;
  if ( v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v7);
  return a1;
}
