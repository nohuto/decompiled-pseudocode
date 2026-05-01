/*
 * XREFs of ?WaitForShellDesktopSwitchEvent@implementation@Shell@Internal@Windows@winrt@@YA?AUIAsyncAction@Foundation@45@XZ @ 0x1801CE1E8
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent$_InitCoro$2 @ 0x1801CDE68 (winrt--Windows--Internal--Shell--implementation--WaitForShellDesktopSwitchEvent$_InitCoro$2.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent(__int64 a1)
{
  void *v2; // rax
  int v4; // [rsp+1A0h] [rbp+8h] BYREF

  v2 = operator new(0x161uLL);
  v4 = 0;
  winrt::Windows::Internal::Shell::implementation::WaitForShellDesktopSwitchEvent__InitCoro_2(&v4, (__int64)v2 + 96, a1);
  return a1;
}
