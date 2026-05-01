/*
 * XREFs of ?Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z @ 0x1803E9F08
 * Callers:
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x1803E96B4 (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ??4ParsedTaskbarLayout@@QEAAXAEBU0@@Z @ 0x1803E99B8 (--4ParsedTaskbarLayout@@QEAAXAEBU0@@Z.c)
 *     ??4ParsedPenWorkspaceLayout@@QEAAAEAU0@AEBU0@@Z @ 0x180496488 (--4ParsedPenWorkspaceLayout@@QEAAAEAU0@AEBU0@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x1803E8E40 (--$_Emplace_reallocate@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQE.c)
 *     ??$_Emplace_reallocate@AEBW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAW423456@AEBW423456@@Z @ 0x1803E8F7C (--$_Emplace_reallocate@AEBW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@Windows.c)
 *     ??$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAAPEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAW423456@AEBW423456@@Z @ 0x1803E90B8 (--$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 */

void __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::Copy(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *this,
        const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *a2)
{
  char *v2; // rsi
  LPVOID *v5; // rbp
  LPVOID *i; // r14
  const WCHAR **v7; // rbp
  const WCHAR **j; // r14
  const WCHAR *v9; // rcx
  _BYTE *v10; // rdx
  _BYTE *v11; // rdx
  _DWORD *v12; // rbp
  _DWORD *k; // r14
  _BYTE *v14; // rdx
  _DWORD *v15; // rbp
  _DWORD *m; // r14
  LPWSTR ppwsz; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)this + 16;
  *(_BYTE *)this = *(_BYTE *)a2;
  *((_BYTE *)this + 1) = *((_BYTE *)a2 + 1);
  *((_BYTE *)this + 2) = *((_BYTE *)a2 + 2);
  *((_BYTE *)this + 3) = *((_BYTE *)a2 + 3);
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
  *((_BYTE *)this + 5) = *((_BYTE *)a2 + 5);
  *((_BYTE *)this + 6) = *((_BYTE *)a2 + 6);
  *((_BYTE *)this + 7) = *((_BYTE *)a2 + 7);
  *((_BYTE *)this + 8) = *((_BYTE *)a2 + 8);
  v5 = (LPVOID *)*((_QWORD *)this + 3);
  for ( i = (LPVOID *)*((_QWORD *)this + 2); i != v5; ++i )
    CoTaskMemFree(*i);
  *((_QWORD *)v2 + 1) = *(_QWORD *)v2;
  v7 = (const WCHAR **)*((_QWORD *)a2 + 3);
  for ( j = (const WCHAR **)*((_QWORD *)a2 + 2); j != v7; ++j )
  {
    v9 = *j;
    ppwsz = 0LL;
    if ( SHStrDupW(v9, &ppwsz) >= 0 )
    {
      v10 = (_BYTE *)*((_QWORD *)v2 + 1);
      if ( v10 == *((_BYTE **)v2 + 2) )
      {
        std::vector<unsigned short *>::_Emplace_reallocate<unsigned short * const &>((const void **)v2, v10, &ppwsz);
      }
      else
      {
        *(_QWORD *)v10 = ppwsz;
        *((_QWORD *)v2 + 1) += 8LL;
      }
    }
  }
  v11 = (_BYTE *)*((_QWORD *)this + 5);
  *((_QWORD *)this + 6) = v11;
  v12 = (_DWORD *)*((_QWORD *)a2 + 6);
  for ( k = (_DWORD *)*((_QWORD *)a2 + 5); k != v12; ++k )
  {
    if ( v11 == *((_BYTE **)this + 7) )
    {
      std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::_Emplace_reallocate<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU const &>(
        (const void **)this + 5,
        v11,
        k);
    }
    else
    {
      *(_DWORD *)v11 = *k;
      *((_QWORD *)this + 6) += 4LL;
    }
    v11 = (_BYTE *)*((_QWORD *)this + 6);
  }
  v14 = (_BYTE *)*((_QWORD *)this + 8);
  *((_QWORD *)this + 9) = v14;
  v15 = (_DWORD *)*((_QWORD *)a2 + 9);
  for ( m = (_DWORD *)*((_QWORD *)a2 + 8); m != v15; ++m )
  {
    if ( v14 == *((_BYTE **)this + 10) )
    {
      std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Emplace_reallocate<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU const &>(
        (const void **)this + 8,
        v14,
        m);
    }
    else
    {
      *(_DWORD *)v14 = *m;
      *((_QWORD *)this + 9) += 4LL;
    }
    v14 = (_BYTE *)*((_QWORD *)this + 9);
  }
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *((_BYTE *)this + 92) = *((_BYTE *)a2 + 92);
  *((_BYTE *)this + 93) = *((_BYTE *)a2 + 93);
  *((_BYTE *)this + 94) = *((_BYTE *)a2 + 94);
  *((_BYTE *)this + 95) = *((_BYTE *)a2 + 95);
  *((_BYTE *)this + 96) = *((_BYTE *)a2 + 96);
}
