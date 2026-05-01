/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@HV?$allocator@H@std@@@std@@@std@@QEAA@XZ @ 0x180560190
 * Callers:
 *     ??0?$vector@HV?$allocator@H@std@@@std@@QEAA@V?$initializer_list@H@1@AEBV?$allocator@H@1@@Z @ 0x1801C4140 (--0-$vector@HV-$allocator@H@std@@@std@@QEAA@V-$initializer_list@H@1@AEBV-$allocator@H@1@@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x180187B70 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 */

void __fastcall std::_Tidy_guard<std::vector<int>>::~_Tidy_guard<std::vector<int>>(__int64 *a1)
{
  __int64 v1; // rcx

  v1 = *a1;
  if ( v1 )
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(v1);
}
