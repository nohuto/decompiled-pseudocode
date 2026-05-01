/*
 * XREFs of winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged$_InitCoro$2 @ 0x18025B2D0
 * Callers:
 *     ?OnTileChanged@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@UTile@StartScreen@UI@WindowsUdk@6@UTileChangedEventArgs@9UI@WindowsUdk@6@@Z @ 0x18025B710 (-OnTileChanged@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AUfire_and_fo.c)
 * Callees:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged$_ResumeCoro$1 @ 0x18025B3D0 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileChanged$_ResumeCoro$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged_::_8_::_parameters_::_parameters_ @ 0x1806F057C (_winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileChanged_--_8_--_param.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged__InitCoro_2(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _DWORD *v7; // r10
  _BYTE *v8; // r11

  winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged_::_8_::_parameters_::_parameters_(
    (char *)a2 + 110,
    a6,
    a4,
    a5);
  *(_QWORD *)a2 = winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged__ResumeCoro_1;
  a2[2] = *v7 != 0 ? 2 : 65538;
  *v8 = 0;
  *((_BYTE *)a2 + 109) = 0;
  return winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileChanged__ResumeCoro_1(a2);
}
