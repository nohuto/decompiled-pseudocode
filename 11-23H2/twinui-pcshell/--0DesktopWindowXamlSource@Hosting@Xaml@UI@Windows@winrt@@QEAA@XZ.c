/*
 * XREFs of ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1800B1050
 * Callers:
 *     ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAEBURect@Foundation@56@I@Z @ 0x18007FE54 (--0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@IAE.c)
 *     ?Initialize@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x1800B0DB8 (-Initialize@XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@w.c)
 * Callees:
 *     ??$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@?$factory_cache_entry@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@UIDesktopWindowXamlSourceFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@Z @ 0x1800AF1DC (--$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@-$factory_cache_entry@UDesktopWindowXaml.c)
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUIInspectable@Foundation@Windows@3@AEAU4563@@Z @ 0x1800AF3FC (-CreateInstance@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory@UIDesktopWindo.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource *__fastcall winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource::DesktopWindowXamlSource(
        winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource *this)
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
  v4[3] = &qword_18098E728;
  _InterlockedIncrement64(&qword_18098E728);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory> )
  {
    winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>,
      &v3,
      &v6,
      &v5);
    _InterlockedDecrement64(&qword_18098E728);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E728);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>::call<_lambda_d63d41a61067fdc865c7dff1a7493050_ &>(
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
