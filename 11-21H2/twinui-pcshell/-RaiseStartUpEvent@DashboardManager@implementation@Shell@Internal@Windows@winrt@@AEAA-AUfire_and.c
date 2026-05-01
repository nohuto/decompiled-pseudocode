/*
 * XREFs of ?RaiseStartUpEvent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@W4StartUpEvent@Dashboard@3UI@WindowsUdk@6@@Z @ 0x1801C9DD0
 * Callers:
 *     ?perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAXXZ @ 0x1801805B0 (-perform_delayed_initialization@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UE.c)
 *     ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801C91E0 (-NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x1801CCCE0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent$_InitCoro$2 @ 0x1801C9A58 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RaiseStartUpEvent$_InitCoro$2.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent(
        __int64 a1,
        _BYTE *a2,
        int a3)
{
  char *v5; // rax
  int v7; // [rsp+248h] [rbp+10h] BYREF
  int v8; // [rsp+250h] [rbp+18h] BYREF

  v8 = a3;
  v5 = (char *)operator new(0x1F1uLL);
  v7 = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::RaiseStartUpEvent__InitCoro_2(&v7, v5, a2, &v8, a1);
  return a2;
}
