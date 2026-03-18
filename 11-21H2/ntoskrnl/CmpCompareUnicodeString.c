/*
 * XREFs of CmpCompareUnicodeString @ 0x140717780
 * Callers:
 *     CmpCompareKeysByName @ 0x14065C51C (CmpCompareKeysByName.c)
 *     CmpGetSymbolicLinkTarget @ 0x1406803C0 (CmpGetSymbolicLinkTarget.c)
 *     CmpFindKcbInHashEntryByName @ 0x1406D2154 (CmpFindKcbInHashEntryByName.c)
 *     CmpGetMappingHiveForString @ 0x140717660 (CmpGetMappingHiveForString.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407350A0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCreateKeyControlBlock @ 0x1407C3850 (CmpCreateKeyControlBlock.c)
 *     CmpCheckValueList @ 0x1407C4990 (CmpCheckValueList.c)
 * Callees:
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall CmpCompareUnicodeString(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 *v4; // rsi
  unsigned __int16 *v5; // r14
  unsigned __int16 v6; // di
  unsigned __int16 v7; // r10
  unsigned __int16 v8; // r11
  unsigned __int16 v9; // bx
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v12; // r11
  _QWORD *v13; // rax

  v4 = *(unsigned __int16 **)(a1 + 8);
  v5 = *(unsigned __int16 **)(a2 + 8);
  v6 = *(_WORD *)a2 >> 1;
  v7 = *(_WORD *)a1 >> 1;
  if ( v7 )
  {
    while ( v6 )
    {
      v8 = *v4++;
      v9 = *v5++;
      if ( v8 != v9 )
      {
        if ( (a3 & 1) == 0 && v8 >= 0x61u )
        {
          if ( v8 > 0x7Au )
          {
            CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
            v8 = NLS_UPCASE(CurrentServerSiloGlobals[154], v12);
          }
          else
          {
            v8 -= 32;
          }
        }
        if ( (a3 & 2) == 0 && v9 >= 0x61u )
        {
          if ( v9 <= 0x7Au )
          {
            v9 -= 32;
          }
          else
          {
            v13 = PsGetCurrentServerSiloGlobals();
            v9 = NLS_UPCASE(v13[154], v9);
          }
        }
        if ( v8 != v9 )
          return v8 - (unsigned int)v9;
      }
      --v6;
      if ( !--v7 )
        return v7 - (unsigned int)v6;
    }
  }
  return v7 - (unsigned int)v6;
}
