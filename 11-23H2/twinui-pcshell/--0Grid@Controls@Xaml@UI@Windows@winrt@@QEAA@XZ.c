/*
 * XREFs of ??0Grid@Controls@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180658A94
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x18065988C (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 *     ?CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z @ 0x1806E6F40 (-CreateXamlHost@SharedDesktopBackgroundVisualHost@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$call@AEAV_lambda_9a02dbc61a31b6bc534907489be5df7c_@@@?$factory_cache_entry@UGrid@Controls@Xaml@UI@Windows@winrt@@UIGridFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_9a02dbc61a31b6bc534907489be5df7c_@@@Z @ 0x180657F14 (--$call@AEAV_lambda_9a02dbc61a31b6bc534907489be5df7c_@@@-$factory_cache_entry@UGrid@Controls@Xam.c)
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_Controls_IGridFactory@UIGridFactory@Controls@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x180659658 (-CreateInstance@-$consume_Windows_UI_Xaml_Controls_IGridFactory@UIGridFactory@Controls@Xaml@UI@W.c)
 */

winrt::Windows::UI::Xaml::Controls::Grid *__fastcall winrt::Windows::UI::Xaml::Controls::Grid::Grid(
        winrt::Windows::UI::Xaml::Controls::Grid *this)
{
  _QWORD v3[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF
  __int64 v5; // [rsp+70h] [rbp+28h] BYREF
  __int64 v6; // [rsp+78h] [rbp+30h] BYREF

  *(_QWORD *)this = 0LL;
  v6 = 0LL;
  v4 = 0LL;
  v3[0] = &v6;
  v3[1] = &v4;
  _InterlockedIncrement64(&qword_180991788);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Controls::Grid,winrt::Windows::UI::Xaml::Controls::IGridFactory> )
  {
    winrt::impl::consume_Windows_UI_Xaml_Controls_IGridFactory<winrt::Windows::UI::Xaml::Controls::IGridFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Controls::Grid,winrt::Windows::UI::Xaml::Controls::IGridFactory>,
      &v5,
      &v6,
      &v4);
    _InterlockedDecrement64(&qword_180991788);
  }
  else
  {
    _InterlockedDecrement64(&qword_180991788);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Controls::Grid,winrt::Windows::UI::Xaml::Controls::IGridFactory>::call<_lambda_9a02dbc61a31b6bc534907489be5df7c_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)&v5,
      v3);
  }
  winrt::Windows::Foundation::IUnknown::operator=(this, (winrt::Windows::Foundation::IUnknown *)&v5);
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return this;
}
