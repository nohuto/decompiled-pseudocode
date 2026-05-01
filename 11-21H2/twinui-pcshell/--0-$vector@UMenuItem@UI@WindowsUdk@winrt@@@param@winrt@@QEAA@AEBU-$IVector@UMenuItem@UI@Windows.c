/*
 * XREFs of ??0?$vector@UMenuItem@UI@WindowsUdk@winrt@@@param@winrt@@QEAA@AEBU?$IVector@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@2@@Z @ 0x1805D8214
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1801D8C10 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::param::vector<winrt::WindowsUdk::UI::MenuItem>::vector<winrt::WindowsUdk::UI::MenuItem>(
        __int64 a1,
        _QWORD *a2)
{
  *(_QWORD *)a1 = 0LL;
  *(_BYTE *)(a1 + 8) = 0;
  *(_QWORD *)a1 = *a2;
  return a1;
}
