/*
 * XREFs of ??$get_activation_factory@UIRectHelperStatics@Xaml@UI@Windows@winrt@@@winrt@@YA?AUIRectHelperStatics@Xaml@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1805B3210
 * Callers:
 *     ??$call@AEAV_lambda_628681d27142a38a5eac87ccb28ad64e_@@@?$factory_cache_entry@URectHelper@Xaml@UI@Windows@winrt@@UIRectHelperStatics@2345@@impl@winrt@@QEAA?AURect@Foundation@Windows@2@AEAV_lambda_628681d27142a38a5eac87ccb28ad64e_@@@Z @ 0x1805B2E44 (--$call@AEAV_lambda_628681d27142a38a5eac87ccb28ad64e_@@@-$factory_cache_entry@URectHelper@Xaml@U.c)
 * Callees:
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$get_runtime_activation_factory@UIRectHelperStatics@Xaml@UI@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1805B3254 (--$get_runtime_activation_factory@UIRectHelperStatics@Xaml@UI@Windows@winrt@@@impl@winrt@@YA-AUh.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::UI::Xaml::IRectHelperStatics>(_QWORD *a1, __int64 a2)
{
  signed int v3; // ecx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(_DWORD *)winrt::impl::get_runtime_activation_factory<winrt::Windows::UI::Xaml::IRectHelperStatics>(
                    &v5,
                    a2,
                    &v6);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
