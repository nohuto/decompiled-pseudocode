/*
 * XREFs of ?GetMenuItemsAsyncHelper@CLauncherTipContextMenu@@AEAA?AU?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UtagRECT@@@Z @ 0x180257FE0
 * Callers:
 *     ?GetMenuItemsAsync@CLauncherTipContextMenu@@UEAAJUtagRECT@@PEAPEAUIUnknown@@@Z @ 0x1806CD4C0 (-GetMenuItemsAsync@CLauncherTipContextMenu@@UEAAJUtagRECT@@PEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_InitCoro$2 @ 0x180257238 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_InitCoro$2.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall CLauncherTipContextMenu::GetMenuItemsAsyncHelper(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        _OWORD *a3)
{
  void *v6; // rax
  _DWORD v8[238]; // [rsp+30h] [rbp-3B8h] BYREF

  v6 = operator new(0x389uLL);
  v8[0] = 0;
  CLauncherTipContextMenu::GetMenuItemsAsyncHelper__InitCoro_2(v8, (__int64)v6 + 112, a2, a3, a1);
  return a2;
}
