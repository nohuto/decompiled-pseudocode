/*
 * XREFs of ?TryUpdatePrelaunchSettingsAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x180245DE8
 * Callers:
 *     ?StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z @ 0x180697FE0 (-StartSwipe@DashboardManager@implementation@Shell@Internal@Windows@winrt@@UEAAJIUtagPOINT@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettingsAsync$_InitCoro$2 @ 0x180245BF4 (winrt--Windows--Internal--Shell--implementation--DashboardManager--TryUpdatePrelaunchSettingsAsy.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettingsAsync(
        __int64 a1,
        _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+78h] [rbp+10h] BYREF

  v4 = operator new(0x32uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::TryUpdatePrelaunchSettingsAsync__InitCoro_2(
    &v6,
    (__int64)v4,
    a2,
    a1);
  return a2;
}
