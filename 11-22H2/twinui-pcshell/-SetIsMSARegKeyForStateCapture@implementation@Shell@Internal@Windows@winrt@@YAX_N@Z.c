/*
 * XREFs of ?SetIsMSARegKeyForStateCapture@implementation@Shell@Internal@Windows@winrt@@YAX_N@Z @ 0x18019E74C
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_ResumeCoro$1 @ 0x18025A570 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBa_ea_18025A570.c)
 * Callees:
 *     <none>
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::SetIsMSARegKeyForStateCapture(
        winrt::Windows::Internal::Shell::implementation *this)
{
  int Data; // [rsp+40h] [rbp+8h] BYREF

  Data = (unsigned __int8)this;
  RegSetKeyValueW(
    HKEY_CURRENT_USER,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\AppListBackup",
    L"IsMSAAttached",
    4u,
    &Data,
    4u);
}
