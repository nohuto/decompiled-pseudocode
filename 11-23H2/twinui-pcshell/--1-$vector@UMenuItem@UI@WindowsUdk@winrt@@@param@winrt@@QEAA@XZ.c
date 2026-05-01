/*
 * XREFs of ??1?$vector@UMenuItem@UI@WindowsUdk@winrt@@@param@winrt@@QEAA@XZ @ 0x1802E8DC8
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180257360 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 *     _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$22 @ 0x180257EAA (_CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1_--_1_--dtor$22.c)
 *     __lambda_3ef64bf90f44864a6bd4620ac4549ef0_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController__::_1_::dtor$1 @ 0x18064E563 (__lambda_3ef64bf90f44864a6bd4620ac4549ef0_--operator()_winrt--Windows--UI--Internal_ea_18064E563.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::param::vector<winrt::WindowsUdk::UI::MenuItem>::~vector<winrt::WindowsUdk::UI::MenuItem>(
        winrt::Windows::Foundation::IUnknown *a1)
{
  if ( !*((_BYTE *)a1 + 8) )
    *(_QWORD *)a1 = 0LL;
  if ( *(_QWORD *)a1 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a1);
}
