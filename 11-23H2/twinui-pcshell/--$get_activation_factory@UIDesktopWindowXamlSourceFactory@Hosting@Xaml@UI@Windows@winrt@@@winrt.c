/*
 * XREFs of ??$get_activation_factory@UIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIDesktopWindowXamlSourceFactory@Hosting@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1800AF2EC
 * Callers:
 *     ??$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@?$factory_cache_entry@UDesktopWindowXamlSource@Hosting@Xaml@UI@Windows@winrt@@UIDesktopWindowXamlSourceFactory@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@Z @ 0x1800AF1DC (--$call@AEAV_lambda_d63d41a61067fdc865c7dff1a7493050_@@@-$factory_cache_entry@UDesktopWindowXaml.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *result; // rax
  int v4; // [rsp+20h] [rbp-28h] BYREF
  __int64 v5; // [rsp+28h] [rbp-20h] BYREF

  v5 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    &winrt::impl::guid_v<winrt::Windows::UI::Xaml::Hosting::IDesktopWindowXamlSourceFactory>,
    &v5);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  result = a1;
  *a1 = v5;
  return result;
}
