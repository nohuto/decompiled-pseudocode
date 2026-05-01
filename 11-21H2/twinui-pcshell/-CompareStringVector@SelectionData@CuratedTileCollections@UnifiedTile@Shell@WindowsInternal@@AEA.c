/*
 * XREFs of ?CompareStringVector@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAXV?$vector@PEAGV?$allocator@PEAG@std@@@std@@_N01AEAH@Z @ 0x18031B77C
 * Callers:
 *     ?GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAHAEBU12345@@Z @ 0x18031BC70 (-GetSelectionScore@SelectionData@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@AEAAH.c)
 * Callees:
 *     ?_Tidy@?$vector@PEAUHMONITOR__@@V?$allocator@PEAUHMONITOR__@@@std@@@std@@AEAAXXZ @ 0x18031D0B8 (-_Tidy@-$vector@PEAUHMONITOR__@@V-$allocator@PEAUHMONITOR__@@@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::SelectionData::CompareStringVector(
        __int64 a1,
        LPCWCH **a2,
        char a3,
        LPCWCH **a4,
        char a5,
        int *a6)
{
  LPCWCH *v8; // rdi
  int v9; // ebx
  LPCWCH *v10; // r12
  LPCWCH *v11; // rsi
  LPCWCH *v12; // r13

  if ( a3 && a5 )
  {
    v8 = *a2;
    v9 = -1;
    v10 = a2[1];
LABEL_9:
    if ( v8 != v10 )
    {
      v11 = *a4;
      v12 = a4[1];
      while ( 1 )
      {
        if ( v11 == v12 )
        {
          ++v8;
          goto LABEL_9;
        }
        if ( CompareStringOrdinal(*v8, -1, *v11, -1, 0) == 2 )
          break;
        ++v11;
      }
      v9 = *a6 + 1;
    }
    *a6 = v9;
  }
  std::vector<HMONITOR__ *>::_Tidy(a2);
  return std::vector<HMONITOR__ *>::_Tidy(a4);
}
