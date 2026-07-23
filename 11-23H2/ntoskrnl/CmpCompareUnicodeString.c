/*
 * XREFs of CmpCompareUnicodeString @ 0x140690A4C
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14068FC80 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyControlBlock @ 0x1406D87C0 (CmpCreateKeyControlBlock.c)
 *     CmpCheckValueList @ 0x1406DE4F0 (CmpCheckValueList.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7EC0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpFindKcbInHashEntryByName @ 0x1407C48EC (CmpFindKcbInHashEntryByName.c)
 *     CmpGetMappingHiveForString @ 0x140A19E18 (CmpGetMappingHiveForString.c)
 *     CmpCompareKeysByName @ 0x140A1F974 (CmpCompareKeysByName.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D420 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall CmpCompareUnicodeString(__int64 a1, __int64 a2, char a3)
{
  unsigned __int16 *v4; // rdi
  unsigned __int16 *v5; // rsi
  unsigned __int16 v6; // bx
  unsigned __int16 v7; // r9
  unsigned __int16 v8; // r10
  unsigned __int16 v9; // r11
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v12; // r10
  _QWORD *v13; // rax
  unsigned __int16 v14; // r11

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
            v9 = NLS_UPCASE(v13[154], v14);
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
