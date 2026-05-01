/*
 * XREFs of ??$get_activation_factory@UIXamlExtensionsStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@winrt@@YA?AUIXamlExtensionsStatics@AppExtensions@ApplicationModel@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180067BB0
 * Callers:
 *     ??$call@P6A?AUXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@AEBUIXamlExtensionsStatics@2345@@Z@?$factory_cache_entry@UXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIXamlExtensionsStatics@2345@@impl@winrt@@QEAA?AUXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@2@$$QEAP6A?AU34562@AEBUIXamlExtensionsStatics@4562@@Z@Z @ 0x180067A4C (--$call@P6A-AUXamlExtensions@AppExtensions@ApplicationModel@WindowsUdk@winrt@@AEBUIXamlExtension.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UIXamlExtensionsStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x180068210 (--$get_runtime_activation_factory@UIXamlExtensionsStatics@AppExtensions@ApplicationModel@Windows.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::IXamlExtensionsStatics>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
