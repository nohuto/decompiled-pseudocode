/*
 * XREFs of ?push_back@?$vector@UMenuItem@UI@WindowsUdk@winrt@@V?$allocator@UMenuItem@UI@WindowsUdk@winrt@@@std@@@std@@QEAAX$$QEAUMenuItem@UI@WindowsUdk@winrt@@@Z @ 0x1805DC704
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1801D8C10 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

char *__fastcall std::vector<winrt::WindowsUdk::UI::MenuItem>::push_back(__int64 *a1, __int64 *a2)
{
  char **v2; // r9
  char *result; // rax

  v2 = (char **)a1[1];
  if ( v2 == (char **)a1[2] )
    return std::vector<winrt::WindowsUdk::UI::MenuItem>::_Emplace_reallocate<winrt::WindowsUdk::UI::MenuItem>(
             a1,
             a1[1],
             a2);
  result = (char *)*a2;
  *a2 = 0LL;
  *v2 = result;
  a1[1] += 8LL;
  return result;
}
