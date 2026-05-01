/*
 * XREFs of _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$21 @ 0x1801D9A3B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@UMenuItem@UI@WindowsUdk@winrt@@@param@winrt@@QEAA@XZ @ 0x18058DD54 (--1-$vector@UMenuItem@UI@WindowsUdk@winrt@@@param@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall CLauncherTipContextMenu::GetMenuItemsAsyncHelper__ResumeCoro_1_::_1_::dtor_21(
        __int64 a1,
        __int64 a2)
{
  *(_QWORD *)(a2 + 272) = *(_QWORD *)(a2 + 368) + 704LL;
  return winrt::param::vector<winrt::WindowsUdk::UI::MenuItem>::~vector<winrt::WindowsUdk::UI::MenuItem>(*(_QWORD *)(a2 + 272));
}
