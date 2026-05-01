/*
 * XREFs of ?InitializeAppBackupListenerAsync@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@QEAA?AUfire_and_forget@6@XZ @ 0x18025A9FC
 * Callers:
 *     ?perform_delayed_initialization@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801BF6C0 (-perform_delayed_initialization@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@U.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync$_InitCoro$2 @ 0x18025A4BC (winrt--Windows--Internal--Shell--implementation--AppBackupListener--InitializeAppBackupListenerA.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync(
        __int64 a1,
        _BYTE *a2)
{
  char *v4; // rax
  int v6; // [rsp+B8h] [rbp+10h] BYREF

  v4 = (char *)operator new(0x72uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::AppBackupListener::InitializeAppBackupListenerAsync__InitCoro_2(
    &v6,
    v4,
    a2,
    a1);
  return a2;
}
