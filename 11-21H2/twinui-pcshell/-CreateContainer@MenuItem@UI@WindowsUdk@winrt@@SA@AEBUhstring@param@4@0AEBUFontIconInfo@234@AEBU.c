/*
 * XREFs of ?CreateContainer@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU?$vector@UMenuItem@UI@WindowsUdk@winrt@@@64@@Z @ 0x1805D8B8C
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x1801D8C10 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ??$call@AEAV_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@@?$factory_cache_entry@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@@impl@winrt@@QEAA?AUMenuItem@UI@WindowsUdk@2@AEAV_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@@Z @ 0x1805D7764 (--$call@AEAV_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@@-$factory_cache_entry@UMenuItem@UI@Windo.c)
 *     ??R_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@QEBA?AUMenuItem@UI@WindowsUdk@winrt@@AEBUIMenuItemStatics@234@@Z @ 0x1805D85EC (--R_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@QEBA-AUMenuItem@UI@WindowsUdk@winrt@@AEBUIMenuItem.c)
 */

void (__fastcall ***__fastcall winrt::WindowsUdk::UI::MenuItem::CreateContainer(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5))(_QWORD, __int64 *, __int64 *)
{
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v7[3] = a5;
  _InterlockedIncrement64(&qword_1807B5F18);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics> )
  {
    _lambda_a2f7f7f06ceca043d5386b16a3f42495_::operator()(
      v7,
      (__int64)a1,
      (int)&winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics>);
    _InterlockedDecrement64(&qword_1807B5F18);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B5F18);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics>::call<_lambda_a2f7f7f06ceca043d5386b16a3f42495_ &>(
      a1,
      (__int64)a1,
      (__int64)v7);
  }
  return a1;
}
