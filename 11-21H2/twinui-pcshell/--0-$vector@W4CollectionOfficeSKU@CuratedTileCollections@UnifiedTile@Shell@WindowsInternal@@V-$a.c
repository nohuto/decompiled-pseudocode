/*
 * XREFs of ??0?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18031B0B0
 * Callers:
 *     ?ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_NW4CollectionOfficeSKU@2345@@Z @ 0x18031B83C (-ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_.c)
 *     ?GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAHAEBU12345@@Z @ 0x18031BC70 (-GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAH.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180087484 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x18031AEE0 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 */

_QWORD *__fastcall std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>(
        _QWORD *a1,
        __int64 a2)
{
  const void *v3; // r14
  __int64 v4; // rbp
  signed __int64 v5; // rbp
  size_t size_of; // rax
  char *v7; // rax
  char *v8; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v3 = *(const void **)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v4 )
  {
    v5 = v4 - (_QWORD)v3;
    size_of = std::_Get_size_of_n<4>(v5 >> 2);
    v7 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    *a1 = v7;
    a1[1] = v7;
    v8 = v7;
    a1[2] = &v7[4 * (v5 >> 2)];
    memmove_0(v7, v3, v5);
    a1[1] = &v8[4 * (v5 >> 2)];
  }
  return a1;
}
