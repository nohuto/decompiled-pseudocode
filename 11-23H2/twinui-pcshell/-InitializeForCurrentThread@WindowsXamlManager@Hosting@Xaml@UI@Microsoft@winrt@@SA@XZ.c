/*
 * XREFs of ?InitializeForCurrentThread@WindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@SA@XZ @ 0x1804F5A40
 * Callers:
 *     ??0?$heap_implements@UWASDKInitializationWrapper@@@impl@winrt@@QEAA@XZ @ 0x1801F9CD0 (--0-$heap_implements@UWASDKInitializationWrapper@@@impl@winrt@@QEAA@XZ.c)
 * Callees:
 *     ??$call@P6A?AUWindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@AEBUIWindowsXamlManagerStatics@23456@@Z@?$factory_cache_entry@UWindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@UIWindowsXamlManagerStatics@23456@@impl@winrt@@QEAA?A_P$$QEAP6A?AUWindowsXamlManager@Hosting@Xaml@UI@Microsoft@2@AEBUIWindowsXamlManagerStatics@45672@@Z@Z @ 0x18002EAFC (--$call@P6A-AUWindowsXamlManager@Hosting@Xaml@UI@Microsoft@winrt@@AEBUIWindowsXamlManagerStatics.c)
 *     ?InitializeForCurrentThread@?$consume_Microsoft_UI_Xaml_Hosting_IWindowsXamlManagerStatics@UIWindowsXamlManagerStatics@Hosting@Xaml@UI@Microsoft@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006FBF8 (-InitializeForCurrentThread@-$consume_Microsoft_UI_Xaml_Hosting_IWindowsXamlManagerStatics@UIWin.c)
 */

_QWORD *__fastcall winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager::InitializeForCurrentThread(_QWORD *a1)
{
  const struct winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics *(__fastcall *v3)(const struct winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics *, __int64); // [rsp+48h] [rbp+10h] BYREF

  _InterlockedIncrement64(&qword_18098E7C8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager,winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics> )
  {
    winrt::impl::consume_Microsoft_UI_Xaml_Hosting_IWindowsXamlManagerStatics<winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics>::InitializeForCurrentThread(
      &winrt::impl::factory_cache_entry_v<winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager,winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics>,
      a1);
    _InterlockedDecrement64(&qword_18098E7C8);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E7C8);
    v3 = _lambda_36ad6dd647f5d7183876adc9415cc816_::_lambda_invoker_cdecl_;
    winrt::impl::factory_cache_entry<winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager,winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics>::call<winrt::Microsoft::UI::Xaml::Hosting::WindowsXamlManager (*)(winrt::Microsoft::UI::Xaml::Hosting::IWindowsXamlManagerStatics const &)>(
      (__int64)a1,
      (__int64)a1,
      (void (__fastcall **)(__int64, __int64 *))&v3);
  }
  return a1;
}
