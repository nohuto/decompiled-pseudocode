/*
 * XREFs of ??0?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1803E9630
 * Callers:
 *     ?ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_NW4CollectionOfficeSKU@2345@@Z @ 0x1803E9DDC (-ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_.c)
 *     ?GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAHAEBU12345@@Z @ 0x1803EA090 (-GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAH.c)
 * Callees:
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?_Buy_nonzero@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAX_K@Z @ 0x1803EB2EC (-_Buy_nonzero@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInt.c)
 */

__int64 *__fastcall std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>(
        __int64 *a1,
        __int64 a2)
{
  signed __int64 v4; // rbx
  __int64 v5; // rdi

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2 )
  {
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Buy_nonzero();
    v4 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    v5 = *a1;
    memmove_0((void *)*a1, *(const void **)a2, v4);
    a1[1] = v5 + 4 * (v4 >> 2);
  }
  return a1;
}
