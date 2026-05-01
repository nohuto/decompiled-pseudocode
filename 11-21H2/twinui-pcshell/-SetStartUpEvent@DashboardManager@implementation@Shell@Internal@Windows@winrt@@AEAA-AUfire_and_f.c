/*
 * XREFs of ?SetStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4StartUpEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x1801CADC0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::SetStartUpEvent$_InitCoro$2 @ 0x1801CA94C (winrt--Windows--Internal--Shell--implementation--DashboardManager--SetStartUpEvent$_InitCoro$2.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::SetStartUpEvent(
        __int64 a1,
        _BYTE *a2,
        int a3)
{
  char *v5; // rax
  int v7[184]; // [rsp+30h] [rbp-2E8h] BYREF
  int v8; // [rsp+330h] [rbp+18h] BYREF

  v8 = a3;
  v7[0] = 0;
  v5 = (char *)operator new(0x2D1uLL);
  v8 = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::SetStartUpEvent__InitCoro_2(&v8, v5, a2, v7, a1);
  return a2;
}
