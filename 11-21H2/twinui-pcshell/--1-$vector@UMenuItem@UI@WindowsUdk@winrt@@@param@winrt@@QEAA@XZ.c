/*
 * XREFs of ??1?$vector@UMenuItem@UI@WindowsUdk@winrt@@@param@winrt@@QEAA@XZ @ 0x18058DD54
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1801D8C10 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 *     _CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1_::_1_::dtor$21 @ 0x1801D9A3B (_CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1_--_1_--dtor$21.c)
 *     __lambda_3ef64bf90f44864a6bd4620ac4549ef0_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController__::_1_::dtor$1 @ 0x18058CB5B (__lambda_3ef64bf90f44864a6bd4620ac4549ef0_--operator()_winrt--Windows--UI--Internal_ea_18058CB5B.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::param::vector<winrt::WindowsUdk::UI::MenuItem>::~vector<winrt::WindowsUdk::UI::MenuItem>(
        winrt::Windows::Foundation::IUnknown *a1)
{
  if ( *((_BYTE *)a1 + 8) )
  {
    if ( *(_QWORD *)a1 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a1);
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
  }
}
