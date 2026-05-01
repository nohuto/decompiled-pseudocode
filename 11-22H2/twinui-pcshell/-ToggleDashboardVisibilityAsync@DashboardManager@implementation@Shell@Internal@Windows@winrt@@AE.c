/*
 * XREFs of ?ToggleDashboardVisibilityAsync@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@Uguid@6@W4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x180244908
 * Callers:
 *     ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x18005A0D0 (-ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync$_InitCoro$2 @ 0x180244384 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ToggleDashboardVisibilityAsyn.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync(
        __int64 a1,
        _BYTE *a2,
        _OWORD *a3,
        __int64 a4,
        _OWORD *a5)
{
  char *v8; // rax
  int v10; // [rsp+40h] [rbp-1F8h] BYREF
  _DWORD v11[124]; // [rsp+48h] [rbp-1F0h] BYREF

  v10 = 1;
  v8 = (char *)operator new(0x1B1uLL);
  v11[0] = 0;
  winrt::Windows::Internal::Shell::implementation::DashboardManager::ToggleDashboardVisibilityAsync__InitCoro_2(
    v11,
    v8,
    a2,
    a3,
    &v10,
    a5,
    a1);
  return a2;
}
