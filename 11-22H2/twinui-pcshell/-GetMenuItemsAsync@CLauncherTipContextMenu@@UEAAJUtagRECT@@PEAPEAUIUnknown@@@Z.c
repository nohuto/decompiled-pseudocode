/*
 * XREFs of ?GetMenuItemsAsync@CLauncherTipContextMenu@@UEAAJUtagRECT@@PEAPEAUIUnknown@@@Z @ 0x1806CD4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMenuItemsAsyncHelper@CLauncherTipContextMenu@@AEAA?AU?$IAsyncOperation@U?$IVectorView@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@UtagRECT@@@Z @ 0x180257FE0 (-GetMenuItemsAsyncHelper@CLauncherTipContextMenu@@AEAA-AU-$IAsyncOperation@U-$IVectorView@UMenuI.c)
 */

__int64 __fastcall CLauncherTipContextMenu::GetMenuItemsAsync(
        CLauncherTipContextMenu *this,
        struct tagRECT *a2,
        struct IUnknown **a3)
{
  char *v4; // rcx
  const char *v5; // r9
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IUnknown *v9; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  v4 = (char *)this - 88;
  v7 = (__int128)*a2;
  try
  {
    CLauncherTipContextMenu::GetMenuItemsAsyncHelper((__int64)v4, (winrt::Windows::Foundation::IUnknown *)&v9, &v7);
    *a3 = v9;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x729,
                           (int)"pcshell\\twinui\\launchertipcontextmenu\\lib\\launchertipcontextmenu.cpp",
                           v5);
  }
  return result;
}
