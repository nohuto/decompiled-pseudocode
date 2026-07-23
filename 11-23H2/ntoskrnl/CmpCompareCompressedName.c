/*
 * XREFs of CmpCompareCompressedName @ 0x1407C49B4
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1406D87C0 (CmpCreateKeyControlBlock.c)
 *     CmpDoCompareKeyName @ 0x1406DA8E0 (CmpDoCompareKeyName.c)
 *     CmpCheckValueList @ 0x1406DE4F0 (CmpCheckValueList.c)
 *     CmpFindNameInListCellWithStatus @ 0x1406DF860 (CmpFindNameInListCellWithStatus.c)
 *     CmpCheckLexicographicalOrder @ 0x1407AA5C0 (CmpCheckLexicographicalOrder.c)
 *     CmpFindKcbInHashEntryByName @ 0x1407C48EC (CmpFindKcbInHashEntryByName.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x140A17630 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpCompareKeysByName @ 0x140A1F974 (CmpCompareKeysByName.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A25740 (CmpSortedValueEnumStackValueCompareFunction.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D420 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall CmpCompareCompressedName(__int64 a1, unsigned __int8 *a2, unsigned __int16 a3, char a4)
{
  unsigned __int16 v5; // r11
  unsigned __int16 *v7; // rdi
  unsigned __int16 v9; // r9
  unsigned int v10; // r10d
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v13; // r9
  _QWORD *v14; // rax
  unsigned __int16 v15; // r10

  v5 = *(_WORD *)a1 >> 1;
  v7 = *(unsigned __int16 **)(a1 + 8);
  if ( v5 )
  {
    while ( a3 )
    {
      v9 = *v7++;
      v10 = *a2++;
      if ( v9 != (_WORD)v10 )
      {
        if ( (a4 & 1) == 0 && v9 >= 0x61u )
        {
          if ( v9 > 0x7Au )
          {
            CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
            v9 = NLS_UPCASE(CurrentServerSiloGlobals[154], v13);
          }
          else
          {
            v9 -= 32;
          }
        }
        if ( (a4 & 2) == 0 && v10 >= 0x61 )
        {
          if ( v10 > 0x7A )
          {
            v14 = PsGetCurrentServerSiloGlobals();
            LOWORD(v10) = NLS_UPCASE(v14[154], v15);
          }
          else
          {
            LOWORD(v10) = v10 - 32;
          }
        }
        if ( v9 != (unsigned __int16)v10 )
          return v9 - (unsigned int)(unsigned __int16)v10;
      }
      --a3;
      if ( !--v5 )
        return v5 - (unsigned int)a3;
    }
  }
  return v5 - (unsigned int)a3;
}
