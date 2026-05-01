/*
 * XREFs of ??R_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@QEBA?AUMenuItem@UI@WindowsUdk@winrt@@AEBUIMenuItemStatics@234@@Z @ 0x1805D85EC
 * Callers:
 *     ??$call@AEAV_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@@?$factory_cache_entry@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@@impl@winrt@@QEAA?AUMenuItem@UI@WindowsUdk@2@AEAV_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@@Z @ 0x1805D7764 (--$call@AEAV_lambda_a2f7f7f06ceca043d5386b16a3f42495_@@@-$factory_cache_entry@UMenuItem@UI@Windo.c)
 *     ?CreateContainer@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU?$vector@UMenuItem@UI@WindowsUdk@winrt@@@64@@Z @ 0x1805D8B8C (-CreateContainer@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU.c)
 * Callees:
 *     ?CreateContainer@?$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUMenuItem@UI@WindowsUdk@3@AEBUhstring@param@3@0AEBUFontIconInfo@563@AEBU?$vector@UMenuItem@UI@WindowsUdk@winrt@@@83@@Z @ 0x1805D8B08 (-CreateContainer@-$consume_WindowsUdk_UI_IMenuItemStatics@UIMenuItemStatics@UI@WindowsUdk@winrt@.c)
 */

__int64 __fastcall _lambda_a2f7f7f06ceca043d5386b16a3f42495_::operator()(_QWORD *a1, __int64 a2, int a3)
{
  winrt::impl::consume_WindowsUdk_UI_IMenuItemStatics<winrt::WindowsUdk::UI::IMenuItemStatics>::CreateContainer(
    a3,
    a2,
    *a1,
    a1[1],
    a1[2],
    a1[3]);
  return a2;
}
