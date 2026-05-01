/*
 * XREFs of ?SetWindowLivePreviewAsync@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAA?AUfire_and_forget@6@XZ @ 0x1801BD12C
 * Callers:
 *     ?v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180020CA0 (-v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_InitCoro$2 @ 0x1801BC598 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Init.c)
 */

_BYTE *__fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync(
        __int64 a1,
        _BYTE *a2)
{
  char *v4; // rax
  int v6; // [rsp+788h] [rbp+10h] BYREF

  v4 = (char *)operator new(0x749uLL);
  v6 = 0;
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync__InitCoro_2(
    &v6,
    v4,
    a2,
    a1);
  return a2;
}
