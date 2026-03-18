/*
 * XREFs of CmpFreeKeyValueList @ 0x140A21E6C
 * Callers:
 *     CmpSyncKeyValues @ 0x140A22E84 (CmpSyncKeyValues.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140A25E84 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E034C (HvpGetCellContextReinitialize.c)
 *     HvFreeCell @ 0x14070AC90 (HvFreeCell.c)
 *     CmpFreeValue @ 0x14070AF78 (CmpFreeValue.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
 */

int __fastcall CmpFreeKeyValueList(ULONG_PTR BugCheckParameter2, _DWORD *a2)
{
  int result; // eax
  ULONG_PTR v5; // rdx
  __int64 CellFlat; // rax
  __int64 v7; // rsi
  __int64 i; // r14
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0LL;
  result = HvpGetCellContextReinitialize(&v9);
  if ( *a2 )
  {
    v5 = (unsigned int)a2[1];
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter2, v5, &v9);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter2, v5, (unsigned int *)&v9);
    v7 = 0LL;
    for ( i = CellFlat; (unsigned int)v7 < *a2; v7 = (unsigned int)(v7 + 1) )
      CmpFreeValue(BugCheckParameter2, *(unsigned int *)(i + 4 * v7));
    result = HvFreeCell(BugCheckParameter2, (unsigned int)a2[1]);
    if ( i )
    {
      if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
        return HvpReleaseCellFlat(BugCheckParameter2, &v9);
      else
        return HvpReleaseCellPaged(BugCheckParameter2, (unsigned int *)&v9);
    }
  }
  return result;
}
