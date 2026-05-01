/*
 * XREFs of ?GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAHAEBU12345@@Z @ 0x18031BC70
 * Callers:
 *     ??$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedTaskbarLayout@@V?$allocator@UParsedTaskbarLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedTaskbarLayout@@@Z@5@PEAUParsedTaskbarLayout@@@Z @ 0x18031A4EC (--$GetSelectedItem@UParsedTaskbarLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsIntern.c)
 *     ??$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@YAJAEBV?$vector@UParsedPenWorkspaceLayout@@V?$allocator@UParsedPenWorkspaceLayout@@@std@@@std@@USelectionData@0123@V?$function@$$A6A?AUSelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEBUParsedPenWorkspaceLayout@@@Z@5@PEAUParsedPenWorkspaceLayout@@@Z @ 0x1803BCD24 (--$GetSelectedItem@UParsedPenWorkspaceLayout@@@CuratedTileCollections@UnifiedTile@Shell@WindowsI.c)
 * Callees:
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x180187B70 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     ??0?$vector@PEAGV?$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z @ 0x18031B014 (--0-$vector@PEAGV-$allocator@PEAG@std@@@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@QEAA@AEBV01@@Z @ 0x18031B0B0 (--0-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V-$a.c)
 *     ?CompareStringVector@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXV?$vector@PEAGV?$allocator@PEAG@std@@@std@@_N01AEAH@Z @ 0x18031B77C (-CompareStringVector@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEA.c)
 *     ?ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_NW4CollectionOfficeSKU@2345@@Z @ 0x18031B83C (-ContainsOfficeSKU@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@QEBA_.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::GetSelectionScore(
        WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *this,
        const struct WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData *a2)
{
  int v4; // r12d
  int *v5; // rcx
  int v6; // edi
  char v8; // si
  LPCWCH **v9; // rdi
  char v10; // bl
  LPCWCH **v11; // rax
  char v12; // r13
  char v13; // bl
  _QWORD *v14; // rax
  __int64 v15; // rdx
  _DWORD *v16; // rcx
  _DWORD *v17; // rax
  _QWORD v18[3]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v19[3]; // [rsp+48h] [rbp-18h] BYREF
  _QWORD *v20; // [rsp+A0h] [rbp+40h] BYREF
  _QWORD *v21; // [rsp+B0h] [rbp+50h]

  v4 = 0;
  LODWORD(v20) = 0;
  if ( !*((_BYTE *)this + 93) && *((_BYTE *)a2 + 93) == 1 && !*((_BYTE *)this + 94) && *((_BYTE *)a2 + 94) == 1 )
    return (unsigned int)-1;
  if ( *((_BYTE *)this + 4)
    && (v5 = (int *)*((_QWORD *)this + 8), (__int64)(*((_QWORD *)this + 9) - (_QWORD)v5) >> 2 == 1) )
  {
    if ( *((_BYTE *)a2 + 4)
      && !WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::ContainsOfficeSKU(
            (__int64)a2,
            *v5) )
    {
      return (unsigned int)-1;
    }
  }
  else if ( *((_BYTE *)a2 + 4) )
  {
    return (unsigned int)-1;
  }
  if ( *((_BYTE *)a2 + 7) && *((_BYTE *)a2 + 95) != *((_BYTE *)this + 95)
    || *((_BYTE *)a2 + 8) && *((_BYTE *)a2 + 96) != *((_BYTE *)this + 96) )
  {
    return (unsigned int)-1;
  }
  v8 = *(_BYTE *)a2;
  v21 = v18;
  v9 = (LPCWCH **)std::vector<unsigned short *>::vector<unsigned short *>(v18, (__int64)a2 + 16);
  v10 = *(_BYTE *)this;
  v11 = (LPCWCH **)std::vector<unsigned short *>::vector<unsigned short *>(v19, (__int64)this + 16);
  WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::CompareStringVector(
    (__int64)&v20,
    v11,
    v10,
    v9,
    v8,
    (int *)&v20);
  v6 = (int)v20;
  if ( (int)v20 >= 0 )
  {
    if ( *((_BYTE *)this + 1) && *((_BYTE *)a2 + 1) )
    {
      if ( *((_DWORD *)this + 22) == *((_DWORD *)a2 + 22) )
        v6 = (_DWORD)v20 + 1;
      else
        v6 = -1;
    }
    if ( v6 >= 0 )
    {
      if ( *((_BYTE *)this + 2) && *((_BYTE *)a2 + 2) )
      {
        if ( *((_BYTE *)this + 92) == *((_BYTE *)a2 + 92) )
          ++v6;
        else
          v6 = -1;
      }
      if ( v6 >= 0 )
      {
        v12 = *((_BYTE *)a2 + 3);
        v21 = v19;
        v20 = std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>(
                v19,
                (__int64)a2 + 40);
        v13 = *((_BYTE *)this + 3);
        v14 = std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>(
                v18,
                (__int64)this + 40);
        v15 = (__int64)v14;
        if ( v13 && v12 )
        {
          v16 = (_DWORD *)*v14;
          if ( *v14 == v14[1] )
          {
LABEL_36:
            v4 = -1;
          }
          else
          {
            while ( 1 )
            {
              v17 = (_DWORD *)*v20;
              if ( *v20 != v20[1] )
                break;
LABEL_35:
              if ( ++v16 == *(_DWORD **)(v15 + 8) )
                goto LABEL_36;
            }
            while ( *v16 != *v17 )
            {
              if ( ++v17 == (_DWORD *)v20[1] )
                goto LABEL_35;
            }
            v4 = 1;
          }
        }
        std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(v15);
        std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64)v20);
        if ( v4 < 0 )
          v6 = v4;
        else
          v6 += 100 * v4;
        if ( v6 >= 0 )
        {
          if ( *((_BYTE *)this + 5) && *((_BYTE *)a2 + 5) )
          {
            if ( *((_BYTE *)this + 93) == *((_BYTE *)a2 + 93) )
              ++v6;
            else
              v6 = -1;
          }
          if ( v6 >= 0 )
          {
            if ( *((_BYTE *)this + 6) && *((_BYTE *)a2 + 6) )
            {
              if ( *((_BYTE *)this + 94) == *((_BYTE *)a2 + 94) )
                ++v6;
              else
                v6 = -1;
            }
            if ( v6 >= 0 )
            {
              if ( *((_BYTE *)this + 7) && *((_BYTE *)a2 + 7) )
              {
                if ( *((_BYTE *)this + 95) == *((_BYTE *)a2 + 95) )
                  ++v6;
                else
                  v6 = -1;
              }
              if ( v6 >= 0 && *((_BYTE *)this + 8) && *((_BYTE *)a2 + 8) )
              {
                if ( *((_BYTE *)this + 96) == *((_BYTE *)a2 + 96) )
                  ++v6;
                else
                  return (unsigned int)-1;
              }
            }
          }
        }
      }
    }
  }
  return (unsigned int)v6;
}
