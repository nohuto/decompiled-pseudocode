/*
 * XREFs of ??$get_activation_factory@UIApplicationFactory@Xaml@UI@Microsoft@winrt@@@winrt@@YA?AUIApplicationFactory@Xaml@UI@Microsoft@0@AEBUhstring@param@0@@Z @ 0x18002E074
 * Callers:
 *     ??$call@AEAV_lambda_403c633736a1bddadba4817f5f4a752e_@@@?$factory_cache_entry@UApplication@Xaml@UI@Microsoft@winrt@@UIApplicationFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_403c633736a1bddadba4817f5f4a752e_@@@Z @ 0x18002DDE0 (--$call@AEAV_lambda_403c633736a1bddadba4817f5f4a752e_@@@-$factory_cache_entry@UApplication@Xaml@.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Microsoft::UI::Xaml::IApplicationFactory>(
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
    &winrt::impl::guid_v<winrt::Microsoft::UI::Xaml::IApplicationFactory>,
    &v5);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  result = a1;
  *a1 = v5;
  return result;
}
