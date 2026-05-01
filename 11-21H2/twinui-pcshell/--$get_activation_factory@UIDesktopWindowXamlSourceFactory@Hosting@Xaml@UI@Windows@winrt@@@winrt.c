/*
 * XREFs of ??$get_activation_factory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x180067A08
 * Callers:
 *     ??$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@?$factory_cache_entry@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@UIDesktopWindowXamlSourceFactory@23456@@impl@winrt@@QEAA?AUDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@2@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@Z @ 0x1800668E4 (--$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@-$factory_cache_entry@UDesktopWindowXaml.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180068164 (--$get_runtime_activation_factory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@winrt.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
