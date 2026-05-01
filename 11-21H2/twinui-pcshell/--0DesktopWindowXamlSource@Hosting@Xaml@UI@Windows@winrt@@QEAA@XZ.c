/*
 * XREFs of ??0DesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1800F3F24
 * Callers:
 *     ??0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@KAEBURect@Foundation@56@@Z @ 0x18002FDCC (--0XamlExplorerHostWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@KAE.c)
 *     ??0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAA@PEAUHWND__@@AEBUhstring@6@@Z @ 0x1800F536C (--0XamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEA.c)
 * Callees:
 *     ??$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@?$factory_cache_entry@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@UIDesktopWindowXamlSourceFactory@23456@@impl@winrt@@QEAA?AUDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@2@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@Z @ 0x1800668E4 (--$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@-$factory_cache_entry@UDesktopWindowXaml.c)
 *     ?CreateInstance@?$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@QEBA?AUDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@3@AEBUIInspectable@Foundation@83@AEAU9Foundation@83@@Z @ 0x18006909C (-CreateInstance@-$consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory@UIDesktopWindo.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x1800F6DA0 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource *__fastcall winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource::DesktopWindowXamlSource(
        winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource *this)
{
  _QWORD v3[4]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF
  __int64 v5; // [rsp+70h] [rbp+28h] BYREF
  __int64 v6; // [rsp+78h] [rbp+30h] BYREF

  *(_QWORD *)this = 0LL;
  v6 = 0LL;
  v5 = 0LL;
  v3[0] = &v6;
  v3[1] = &v5;
  _InterlockedIncrement64(&qword_1807B43B8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory> )
  {
    winrt::impl::consume_Windows_UI_Xaml_Hosting_IDesktopWindowXamlSourceFactory<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>::CreateInstance(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>,
      &v4,
      &v6,
      (__int64)&v5);
    _InterlockedDecrement64(&qword_1807B43B8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B43B8);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Xaml::Hosting::DesktopWindowXamlSource,winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>::call<_lambda_d63d41a61067fdc865c7dff1a7493050_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))this,
      (__int64)&v4,
      v3);
  }
  winrt::Windows::Foundation::IUnknown::operator=(this, &v4);
  if ( v4 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v4);
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  if ( v6 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v6);
  return this;
}
