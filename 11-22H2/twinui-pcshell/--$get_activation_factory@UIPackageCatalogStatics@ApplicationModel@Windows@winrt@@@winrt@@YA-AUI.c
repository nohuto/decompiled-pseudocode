/*
 * XREFs of ??$get_activation_factory@UIPackageCatalogStatics@ApplicationModel@Windows@winrt@@@winrt@@YA?AUIPackageCatalogStatics@ApplicationModel@Windows@0@AEBUhstring@param@0@@Z @ 0x180089114
 * Callers:
 *     ??$call@P6A?AUPackageCatalog@ApplicationModel@Windows@winrt@@AEBUIPackageCatalogStatics@234@@Z@?$factory_cache_entry@UPackageCatalog@ApplicationModel@Windows@winrt@@UIPackageCatalogStatics@234@@impl@winrt@@QEAA?A_P$$QEAP6A?AUPackageCatalog@ApplicationModel@Windows@2@AEBUIPackageCatalogStatics@452@@Z@Z @ 0x180088FFC (--$call@P6A-AUPackageCatalog@ApplicationModel@Windows@winrt@@AEBUIPackageCatalogStatics@234@@Z@-.c)
 * Callees:
 *     ??$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@AEBUguid@1@PEAPEAX@Z @ 0x1800B4384 (--$get_runtime_activation_factory_impl@$0A@@impl@winrt@@YA-AUhresult@1@AEBUhstring@param@1@AEBUg.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::ApplicationModel::IPackageCatalogStatics>(
        _QWORD *a1,
        __int64 a2)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF
  __int64 v5; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  winrt::impl::get_runtime_activation_factory_impl<0>(
    &v4,
    a2,
    &winrt::impl::guid_v<winrt::Windows::ApplicationModel::IPackageCatalogStatics>,
    &v5);
  if ( v4 < 0 )
    winrt::throw_hresult((unsigned int)v4);
  *a1 = v5;
  return a1;
}
