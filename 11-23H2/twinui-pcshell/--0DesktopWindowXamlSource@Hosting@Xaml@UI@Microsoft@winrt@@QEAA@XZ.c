/*
 * XREFs of ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@QEAA@XZ @ 0x18004A9F8
 * Callers:
 *     ?Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x18004A7A0 (-Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 *     ??0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x1804FADE8 (--0XamlExplorerHostWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QE.c)
 * Callees:
 *     ??$call@AEAV_lambda_9da9a377ea2426f3d5421a6be20021de_@@@?$factory_cache_entry@UDesktopWindowXamlSource@Hosting@Xaml@UI@Microsoft@winrt@@UIDesktopWindowXamlSourceFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_9da9a377ea2426f3d5421a6be20021de_@@@Z @ 0x18004A114 (--$call@AEAV_lambda_9da9a377ea2426f3d5421a6be20021de_@@@-$factory_cache_entry@UDesktopWindowXaml.c)
 *     ?CreateInstance@?$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x18004AC60 (-CreateInstance@-$consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory@UIDesktopWin.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource *__fastcall winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource::DesktopWindowXamlSource(
        winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource *this)
{
  __int64 v3; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v4[4]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v5; // [rsp+48h] [rbp-18h] BYREF
  __int64 v6; // [rsp+50h] [rbp-10h] BYREF

  v4[2] = this;
  *(_QWORD *)this = 0LL;
  v6 = 0LL;
  v5 = 0LL;
  v4[0] = &v6;
  v4[1] = &v5;
  v4[3] = &qword_18098E808;
  _InterlockedIncrement64(&qword_18098E808);
  if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory> )
  {
    winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory<winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>,
      &v3,
      &v6,
      &v5);
    _InterlockedDecrement64(&qword_18098E808);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E808);
    winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Microsoft::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>::call<_lambda_9da9a377ea2426f3d5421a6be20021de_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)&v3,
      v4);
  }
  winrt::Windows::Foundation::IUnknown::operator=(this, &v3);
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v3);
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return this;
}
