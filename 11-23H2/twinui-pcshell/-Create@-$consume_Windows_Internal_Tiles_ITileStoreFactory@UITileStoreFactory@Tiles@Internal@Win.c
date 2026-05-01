/*
 * XREFs of ?Create@?$consume_Windows_Internal_Tiles_ITileStoreFactory@UITileStoreFactory@Tiles@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUUser@System@Windows@3@@Z @ 0x1800FDF08
 * Callers:
 *     ?Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ @ 0x1800A4778 (-Initialize@TabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@QEAAJXZ.c)
 *     ?subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800FD1E0 (-subscribe_to_services@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServ.c)
 *     ??$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@?$factory_cache_entry@UTileStore@Tiles@Internal@Windows@winrt@@UITileStoreFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@Z @ 0x1800FDDB0 (--$call@AEAV_lambda_6df14372073018d27f98c8bc6eefd2b7_@@@-$factory_cache_entry@UTileStore@Tiles@I.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Tiles_ITileStoreFactory<winrt::Windows::Internal::Tiles::ITileStoreFactory>::Create(
        __int64 *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  int v5; // eax
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a1;
  v7 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v3 + 48LL))(v3, *a3, &v7);
  if ( v5 < 0 )
    winrt::throw_hresult((unsigned int)v5);
  *a2 = v7;
  return a2;
}
