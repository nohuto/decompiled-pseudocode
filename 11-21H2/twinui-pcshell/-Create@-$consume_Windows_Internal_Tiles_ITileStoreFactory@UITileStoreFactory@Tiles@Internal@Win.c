/*
 * XREFs of ?Create@?$consume_Windows_Internal_Tiles_ITileStoreFactory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUTileStore@Tiles@Internal@Windows@3@AEBUUser@System@73@@Z @ 0x180066B38
 * Callers:
 *     ??$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@?$factory_cache_entry@UTileStore@Tiles@Internal@Windows@winrt@@UITileStoreFactory@2345@@impl@winrt@@QEAA?AUTileStore@Tiles@Internal@Windows@2@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@Z @ 0x180066A10 (--$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@-$factory_cache_entry@UTileStore@Tiles@I.c)
 *     ?subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800DA040 (-subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 *     ?Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800E4958 (-Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Tiles_ITileStoreFactory<winrt::Windows::Internal::Tiles::ITileStoreFactory>::Create(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  *a2 = v7;
  return a2;
}
