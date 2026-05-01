/*
 * XREFs of ?GetFolderFromPathAsync@?$consume_Windows_Storage_IStorageFolderStatics@UIStorageFolderStatics@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800AF890
 * Callers:
 *     ??$call@AEAV_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_@@@?$factory_cache_entry@UStorageFolder@Storage@Windows@winrt@@UIStorageFolderStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_@@@Z @ 0x1800AF788 (--$call@AEAV_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_@@@-$factory_cache_entry@UStorageFolder@Sto.c)
 *     ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x1800B08F4 (-Create@JsonGameMruManager@@SA-AV-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMr.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_Storage_IStorageFolderStatics<winrt::Windows::Storage::IStorageFolderStatics>::GetFolderFromPathAsync(
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
