/*
 * XREFs of CmpCompareTwoCompressedNames @ 0x14065C57C
 * Callers:
 *     CmpCompareKeysByName @ 0x14065C51C (CmpCompareKeysByName.c)
 *     CmpFindNameInListCellWithStatus @ 0x140722280 (CmpFindNameInListCellWithStatus.c)
 *     CmpCompareInIndex @ 0x1407C4180 (CmpCompareInIndex.c)
 *     CmpDoCompareKeyName @ 0x1407C4460 (CmpDoCompareKeyName.c)
 *     CmpFindSubKeyInRoot @ 0x1407C5F80 (CmpFindSubKeyInRoot.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x14091514C (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140921EA0 (CmpSortedValueEnumStackValueCompareFunction.c)
 * Callees:
 *     NLS_UPCASE @ 0x1403477B0 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall CmpCompareTwoCompressedNames(
        unsigned __int8 *a1,
        unsigned __int16 a2,
        unsigned __int8 *a3,
        unsigned __int16 a4)
{
  unsigned __int16 v6; // bx
  unsigned int v8; // r10d
  unsigned int v9; // r11d
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v12; // r10
  _QWORD *v13; // rax
  unsigned __int16 v14; // r11

  v6 = a2;
  if ( a2 )
  {
    while ( a4 )
    {
      v8 = *a1++;
      v9 = *a3++;
      if ( (_WORD)v8 != (_WORD)v9 )
      {
        if ( v8 >= 0x61 )
        {
          if ( v8 > 0x7A )
          {
            CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
            LOWORD(v8) = NLS_UPCASE(CurrentServerSiloGlobals[154], v12);
          }
          else
          {
            LOWORD(v8) = v8 - 32;
          }
        }
        if ( v9 >= 0x61 )
        {
          if ( v9 > 0x7A )
          {
            v13 = PsGetCurrentServerSiloGlobals();
            LOWORD(v9) = NLS_UPCASE(v13[154], v14);
          }
          else
          {
            LOWORD(v9) = v9 - 32;
          }
        }
        if ( (unsigned __int16)v8 != (unsigned __int16)v9 )
          return (unsigned __int16)v8 - (unsigned int)(unsigned __int16)v9;
      }
      --a4;
      if ( !--v6 )
        return v6 - (unsigned int)a4;
    }
  }
  return v6 - (unsigned int)a4;
}
