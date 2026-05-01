/*
 * XREFs of ?Copy@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXAEBU12345@@Z @ 0x18031B968
 * Callers:
 *     ??0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z @ 0x18031B14C (--0SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAA@AEBU01234@@Z.c)
 *     ??4ParsedTaskbarLayout@@QEAAXAEBU0@@Z @ 0x18031B41C (--4ParsedTaskbarLayout@@QEAAXAEBU0@@Z.c)
 *     ??4ParsedPenWorkspaceLayout@@QEAAAEAU0@AEBU0@@Z @ 0x1803BD42C (--4ParsedPenWorkspaceLayout@@QEAAAEAU0@AEBU0@@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBQEAG@?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQEAG@Z @ 0x18031A928 (--$_Emplace_reallocate@AEBQEAG@-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAAPEAPEAGQEAPEAGAEBQE.c)
 *     ??$_Emplace_reallocate@AEBW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAAPEAW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAW423456@AEBW423456@@Z @ 0x18031AA64 (--$_Emplace_reallocate@AEBW4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@Windows.c)
 *     ??$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$vector@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAAPEAW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEAW423456@AEBW423456@@Z @ 0x18031ABA0 (--$_Emplace_reallocate@AEBW4CollectionSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 */

void __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::Copy(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *this,
        const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *a2)
{
  char *v2; // r14
  LPVOID *v5; // rsi
  LPVOID *v6; // rbp
  const WCHAR **v7; // rbp
  const WCHAR **i; // rsi
  const WCHAR *v9; // rcx
  _BYTE *v10; // rdx
  _DWORD *v11; // rbp
  _DWORD *j; // rsi
  _BYTE *v13; // rdx
  _DWORD *v14; // rbp
  _DWORD *k; // rsi
  _BYTE *v16; // rdx
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
  v5 = (LPVOID *)*((_QWORD *)this + 2);
  v6 = (LPVOID *)*((_QWORD *)this + 3);
  if ( v5 != v6 )
  {
    do
      CoTaskMemFree(*v5++);
    while ( v5 != v6 );
    v5 = *(LPVOID **)v2;
  }
  *((_QWORD *)v2 + 1) = v5;
  v7 = (const WCHAR **)*((_QWORD *)a2 + 3);
  for ( i = (const WCHAR **)*((_QWORD *)a2 + 2); i != v7; ++i )
  {
    v9 = *i;
    ppwsz = 0LL;
    if ( SHStrDupW(v9, &ppwsz) >= 0 )
    {
      v10 = (_BYTE *)*((_QWORD *)this + 3);
      if ( v10 == *((_BYTE **)this + 4) )
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
  *((_QWORD *)this + 6) = *((_QWORD *)this + 5);
  v11 = (_DWORD *)*((_QWORD *)a2 + 6);
  for ( j = (_DWORD *)*((_QWORD *)a2 + 5); j != v11; ++j )
  {
    v13 = (_BYTE *)*((_QWORD *)this + 6);
    if ( v13 == *((_BYTE **)this + 7) )
    {
      std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU>::_Emplace_reallocate<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionSKU const &>(
        (const void **)this + 5,
        v13,
        j);
    }
    else
    {
      *(_DWORD *)v13 = *j;
      *((_QWORD *)this + 6) += 4LL;
    }
  }
  *((_QWORD *)this + 9) = *((_QWORD *)this + 8);
  v14 = (_DWORD *)*((_QWORD *)a2 + 9);
  for ( k = (_DWORD *)*((_QWORD *)a2 + 8); k != v14; ++k )
  {
    v16 = (_BYTE *)*((_QWORD *)this + 9);
    if ( v16 == *((_BYTE **)this + 10) )
    {
      std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Emplace_reallocate<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU const &>(
        (const void **)this + 8,
        v16,
        k);
    }
    else
    {
      *(_DWORD *)v16 = *k;
      *((_QWORD *)this + 9) += 4LL;
    }
  }
  *((_DWORD *)this + 22) = *((_DWORD *)a2 + 22);
  *((_BYTE *)this + 92) = *((_BYTE *)a2 + 92);
  *((_BYTE *)this + 93) = *((_BYTE *)a2 + 93);
  *((_BYTE *)this + 94) = *((_BYTE *)a2 + 94);
  *((_BYTE *)this + 95) = *((_BYTE *)a2 + 95);
  *((_BYTE *)this + 96) = *((_BYTE *)a2 + 96);
}
