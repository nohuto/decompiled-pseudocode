/*
 * XREFs of ?CreateCommand@MenuItem@UI@WindowsUdk@winrt@@SA@AEBUhstring@param@4@0AEBUFontIconInfo@234@AEBU?$TypedEventHandler@UMenuItem@UI@WindowsUdk@winrt@@UMenuItemInvokedArgs@234@@Foundation@Windows@4@@Z @ 0x1806CCCA0
 * Callers:
 *     CLauncherTipContextMenu::GetMenuItemsAsyncHelper$_ResumeCoro$1 @ 0x180257360 (CLauncherTipContextMenu--GetMenuItemsAsyncHelper$_ResumeCoro$1.c)
 * Callees:
 *     ??$call@AEAV_lambda_7c04563311270235dbf91af2d25c417e_@@@?$factory_cache_entry@UMenuItem@UI@WindowsUdk@winrt@@UIMenuItemStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_7c04563311270235dbf91af2d25c417e_@@@Z @ 0x1806CA27C (--$call@AEAV_lambda_7c04563311270235dbf91af2d25c417e_@@@-$factory_cache_entry@UMenuItem@UI@Windo.c)
 *     ??R_lambda_7c04563311270235dbf91af2d25c417e_@@QEBA@AEBUIMenuItemStatics@UI@WindowsUdk@winrt@@@Z @ 0x1806CC058 (--R_lambda_7c04563311270235dbf91af2d25c417e_@@QEBA@AEBUIMenuItemStatics@UI@WindowsUdk@winrt@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::WindowsUdk::UI::MenuItem::CreateCommand(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v7[6]; // [rsp+28h] [rbp-30h] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v7[3] = a5;
  _InterlockedIncrement64(&qword_180991258);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics> )
  {
    _lambda_7c04563311270235dbf91af2d25c417e_::operator()(
      v7,
      a1,
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics>);
    _InterlockedDecrement64(&qword_180991258);
  }
  else
  {
    _InterlockedDecrement64(&qword_180991258);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::UI::MenuItem,winrt::WindowsUdk::UI::IMenuItemStatics>::call<_lambda_7c04563311270235dbf91af2d25c417e_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      (__int64)v7);
  }
  return a1;
}
