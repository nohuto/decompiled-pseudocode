/*
 * XREFs of ??$get_activation_factory@UIPackageManagerStatics@Deployment@Management@WindowsUdk@winrt@@@winrt@@YA?AUIPackageManagerStatics@Deployment@Management@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x1800678F8
 * Callers:
 *     ??$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@?$factory_cache_entry@UPackageManager@Deployment@Management@WindowsUdk@winrt@@UIPackageManagerStatics@2345@@impl@winrt@@QEAA?AUhstring@2@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@Z @ 0x180067020 (--$call@AEAV_lambda_720477a61d445079ad03f3ff7eed504d_@@@-$factory_cache_entry@UPackageManager@De.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIPackageManagerStatics@Deployment@Management@WindowsUdk@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180068688 (--$get_runtime_activation_factory@UIPackageManagerStatics@Deployment@Management@WindowsUdk@winrt.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::WindowsUdk::Management::Deployment::IPackageManagerStatics>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
