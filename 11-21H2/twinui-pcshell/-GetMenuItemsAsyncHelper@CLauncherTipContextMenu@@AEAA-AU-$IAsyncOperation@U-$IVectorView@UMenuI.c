/*
 * XREFs of ?GetMenuItemsAsyncHelper@CLauncherTipContextMenu@@AEAA?AU?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UtagRECT@@@Z @ 0x1801D9B74
 * Callers:
 *     ?GetMenuItemsAsync@CLauncherTipContextMenu@@UEAAJUtagRECT@@PEAPEAUIUnknown@@@Z @ 0x1805D9100 (-GetMenuItemsAsync@CLauncherTipContextMenu@@UEAAJUtagRECT@@PEAPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_InitCoro$2 @ 0x1801D8AE8 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_InitCoro$2.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall CLauncherTipContextMenu::GetMenuItemsAsyncHelper(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        _OWORD *a3)
{
  void *v6; // rax
  _DWORD v8[574]; // [rsp+30h] [rbp-8F8h] BYREF

  v6 = operator new(0x8C9uLL);
  v8[0] = 0;
  CLauncherTipContextMenu::GetMenuItemsAsyncHelper__InitCoro_2(v8, (__int64)v6 + 112, a2, a3, a1);
  return a2;
}
