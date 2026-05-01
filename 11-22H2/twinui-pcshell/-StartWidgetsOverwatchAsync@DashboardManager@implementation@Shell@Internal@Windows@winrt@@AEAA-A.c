/*
 * XREFs of ?StartWidgetsOverwatchAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUIAsyncAction@Foundation@56@XZ @ 0x18024431C
 * Callers:
 *     ?NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x180697554 (-NotifyDesktopReady@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync$_InitCoro$2 @ 0x180243C8C (winrt--Windows--Internal--Shell--implementation--DashboardManager--StartWidgetsOverwatchAsync$_I.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  void *v4; // rax
  int v6; // [rsp+188h] [rbp+10h] BYREF

  v4 = operator new(0x149uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::StartWidgetsOverwatchAsync__InitCoro_2(
    &v6,
    (__int64)v4 + 96,
    a2,
    a1);
  return a2;
}
