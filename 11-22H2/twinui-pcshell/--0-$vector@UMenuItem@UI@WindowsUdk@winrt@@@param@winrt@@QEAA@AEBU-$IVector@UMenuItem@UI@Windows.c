/*
 * XREFs of ??0?$vector@UMenuItem@UI@WindowsUdk@winrt@@@param@winrt@@QEAA@AEBU?$IVector@UMenuItem@UI@WindowsUdk@winrt@@@Collections@Foundation@Windows@2@@Z @ 0x1806CB7CC
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180257360 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::param::vector<winrt::WindowsUdk::UI::MenuItem>::vector<winrt::WindowsUdk::UI::MenuItem>(
        winrt::Windows::Foundation::IUnknown *a1,
        __int64 *a2)
{
  __int64 v3; // rdi

  *(_QWORD *)a1 = 0LL;
  *((_BYTE *)a1 + 8) = 0;
  v3 = *a2;
  if ( *(_QWORD *)a1 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(a1);
  *(_QWORD *)a1 = v3;
  return a1;
}
