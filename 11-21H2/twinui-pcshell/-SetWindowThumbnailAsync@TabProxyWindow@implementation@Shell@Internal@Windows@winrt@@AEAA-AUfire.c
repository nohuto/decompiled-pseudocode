/*
 * XREFs of ?SetWindowThumbnailAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801BD878
 * Callers:
 *     ?v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180020CA0 (-v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView@3UI@456@AEBUWindowTabViewPropertyChangedEventArgs@38456@@Z @ 0x180024200 (-OnTabChanged@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowTabView.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync$_InitCoro$2 @ 0x1801BD190 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowThumbnailAsync$_InitCo.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync(
        __int64 a1,
        _BYTE *a2)
{
  char *v4; // rax
  int v6; // [rsp+448h] [rbp+10h] BYREF

  v4 = (char *)operator new(0x409uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowThumbnailAsync__InitCoro_2(&v6, v4, a2, a1);
  return a2;
}
