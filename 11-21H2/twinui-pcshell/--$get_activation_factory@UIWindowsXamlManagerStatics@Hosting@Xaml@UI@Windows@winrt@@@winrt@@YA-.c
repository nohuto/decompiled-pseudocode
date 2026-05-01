/*
 * XREFs of ??$get_activation_factory@UIWindowsXamlManagerStatics@Hosting@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIWindowsXamlManagerStatics@Hosting@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x180067BF4
 * Callers:
 *     ??$call@P6A?AUWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@AEBUIWindowsXamlManagerStatics@23456@@Z@?$factory_cache_entry@UWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@UIWindowsXamlManagerStatics@23456@@impl@winrt@@QEAA?AUWindowsXamlManager@Hosting@Xaml@UI@Windows@2@$$QEAP6A?AU345672@AEBUIWindowsXamlManagerStatics@45672@@Z@Z @ 0x180067268 (--$call@P6A-AUWindowsXamlManager@Hosting@Xaml@UI@Windows@winrt@@AEBUIWindowsXamlManagerStatics@2.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIWindowsXamlManagerStatics@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800682BC (--$get_runtime_activation_factory@UIWindowsXamlManagerStatics@Hosting@Xaml@UI@Windows@winrt@@@im.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::Xaml::Hosting::IWindowsXamlManagerStatics>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
