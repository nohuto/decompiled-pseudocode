/*
 * XREFs of ?SetLastAppBackupListenerStartTimeForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAXXZ @ 0x18019E79C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x18025A570 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_18025A570.c)
 * Callees:
 *     ?Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18046AC88 (-Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::SetLastAppBackupListenerStartTimeForStateCapture(
        winrt::Windows::Internal::Shell::implementation *this)
{
  unsigned int v1; // eax
  unsigned int lpData; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF
  __int64 Data; // [rsp+68h] [rbp+10h] BYREF

  hKey = 0LL;
  v1 = RegCreateKeyExW(
         HKEY_CURRENT_USER,
         L"Software\\Microsoft\\Windows\\CurrentVersion\\AppListBackup",
         0,
         0LL,
         0,
         0x20006u,
         0LL,
         &hKey,
         0LL);
  if ( v1 )
    wil::details::in1diag3::Throw_Win32(
      retaddr,
      (void *)0x9E,
      (unsigned int)"pcshell\\twinui\\appbackuplistener\\lib\\appbackuplistener.cpp",
      (const char *)v1,
      lpData);
  Data = _Xtime_get_ticks() / 10000;
  RegSetKeyValueW(
    HKEY_CURRENT_USER,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\AppListBackup",
    L"LastAppBackupListenerStartTime",
    0xBu,
    &Data,
    8u);
  if ( hKey )
    RegCloseKey(hKey);
}
