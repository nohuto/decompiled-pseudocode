/*
 * XREFs of CmpCompareTwoCompressedNames @ 0x1407BFAA0
 * Callers:
 *     CmpDoCompareKeyName @ 0x1406DA8E0 (CmpDoCompareKeyName.c)
 *     CmpFindNameInListCellWithStatus @ 0x1406DF860 (CmpFindNameInListCellWithStatus.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x140A17630 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpCompareKeysByName @ 0x140A1F974 (CmpCompareKeysByName.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140A25740 (CmpSortedValueEnumStackValueCompareFunction.c)
 * Callees:
 *     NLS_UPCASE @ 0x14022D420 (NLS_UPCASE.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14022D480 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall CmpCompareTwoCompressedNames(
        unsigned __int8 *a1,
        unsigned __int16 a2,
        unsigned __int8 *a3,
        unsigned __int16 a4)
{
  unsigned __int16 v6; // r11
  unsigned int v8; // r9d
  unsigned int v9; // r10d
  _QWORD *CurrentServerSiloGlobals; // rax
  unsigned __int16 v12; // r9
  _QWORD *v13; // rax
  unsigned __int16 v14; // r10

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
