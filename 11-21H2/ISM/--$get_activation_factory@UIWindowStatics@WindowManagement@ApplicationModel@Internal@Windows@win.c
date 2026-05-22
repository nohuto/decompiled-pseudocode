/*
 * XREFs of ??$get_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@winrt@@YA?AUIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180081378
 * Callers:
 *     ??$call@AEAV_lambda_eae43cc28720a0d43884919512fd9bb9_@@@?$factory_cache_entry@UWindowInProc@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UIWindowStatics@23456@@impl@winrt@@QEAA?AUWindow@WindowManagement@ApplicationModel@Internal@Windows@2@AEAV_lambda_eae43cc28720a0d43884919512fd9bb9_@@@Z @ 0x180084488 (--$call@AEAV_lambda_eae43cc28720a0d43884919512fd9bb9_@@@-$factory_cache_entry@UWindowInProc@Wind.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x18003F70C (--$get_runtime_activation_factory@UIWindowStatics@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1800836D4 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  int v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = (unsigned int)*winrt::impl::get_runtime_activation_factory<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindowStatics>(
                        &v5,
                        a2,
                        (__int64)&v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
