/*
 * XREFs of ??0AcrylicBrush@Media@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x180658990
 * Callers:
 *     ?CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z @ 0x18065988C (-CreateXamlContent@TouchEdgeGripperWindow@@AEAAXW4TouchEdgeGestureType@@@Z.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ??$call@AEAV_lambda_9385b473f465738bc2d277d457f6f118_@@@?$factory_cache_entry@UAcrylicBrush@Media@Xaml@UI@Windows@winrt@@UIAcrylicBrushFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_9385b473f465738bc2d277d457f6f118_@@@Z @ 0x180657DD4 (--$call@AEAV_lambda_9385b473f465738bc2d277d457f6f118_@@@-$factory_cache_entry@UAcrylicBrush@Medi.c)
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory@UIAcrylicBrushFactory@Media@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x1806596D8 (-CreateInstance@-$consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory@UIAcrylicBrushFactory@Media.c)
 */

// Hidden C++ exception states: #wind=4
winrt::Windows::UI::Xaml::Media::AcrylicBrush *__fastcall winrt::Windows::UI::Xaml::Media::AcrylicBrush::AcrylicBrush(
        winrt::Windows::UI::Xaml::Media::AcrylicBrush *this)
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
  _InterlockedIncrement64(&qword_180991D38);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::AcrylicBrush,winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory> )
  {
    winrt::impl::consume_Windows_UI_Xaml_Media_IAcrylicBrushFactory<winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Media::AcrylicBrush,winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory>,
      &v5,
      &v6,
      &v4);
    _InterlockedDecrement64(&qword_180991D38);
  }
  else
  {
    _InterlockedDecrement64(&qword_180991D38);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Media::AcrylicBrush,winrt::Windows::UI::Xaml::Media::IAcrylicBrushFactory>::call<_lambda_9385b473f465738bc2d277d457f6f118_ &>(
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
