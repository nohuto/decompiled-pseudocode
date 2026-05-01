/*
 * XREFs of ??$get_activation_factory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@winrt@@YA?AUITileStoreFactory@Tiles@Internal@Windows@0@AEBUhstring@param@0@@Z @ 0x180067EAC
 * Callers:
 *     ??$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@?$factory_cache_entry@UTileStore@Tiles@Internal@Windows@winrt@@UITileStoreFactory@2345@@impl@winrt@@QEAA?AUTileStore@Tiles@Internal@Windows@2@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@Z @ 0x180066A10 (--$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@-$factory_cache_entry@UTileStore@Tiles@I.c)
 * Callees:
 *     ??$get_runtime_activation_factory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@impl@winrt@@YA?AUhresult@1@AEBUhstring@param@1@PEAPEAX@Z @ 0x1800689E4 (--$get_runtime_activation_factory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@impl@winrt@@.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::get_activation_factory<winrt::Windows::Internal::Tiles::ITileStoreFactory>(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v3; // rcx
  char v5; // [rsp+40h] [rbp+18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+20h] BYREF

  v6 = 0LL;
  v3 = *(unsigned int *)winrt::impl::get_runtime_activation_factory<winrt::Windows::Internal::Tiles::ITileStoreFactory>(
                          &v5,
                          a2,
                          &v6);
  if ( (int)v3 < 0 )
    winrt::throw_hresult(v3);
  *a1 = v6;
  return a1;
}
