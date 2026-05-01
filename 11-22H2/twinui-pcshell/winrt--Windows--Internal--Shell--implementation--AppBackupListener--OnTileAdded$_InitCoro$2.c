/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_InitCoro$2 @ 0x18025AC5C
 * Callers:
 *     ?OnTileAdded@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UTileCollection@StartScreen@UI@WindowsUdk@6@UTileAddedEventArgs@9UI@WindowsUdk@6@@Z @ 0x18025B230 (-OnTileAdded@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_forg.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1 @ 0x18025AD50 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_ResumeCoro$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded_::_6_::_parameters_::_parameters_ @ 0x1806F0558 (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded_--_6_--_paramet.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _DWORD *v7; // r10
  _BYTE *v8; // r11

  winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded_::_6_::_parameters_::_parameters_(
    (char *)a2 + 193,
    a6,
    a4,
    a5);
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded__ResumeCoro_1;
  a2[2] = *v7 != 0 ? 2 : 65538;
  *v8 = 0;
  *((_BYTE *)a2 + 192) = 0;
  return winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded__ResumeCoro_1(a2);
}
