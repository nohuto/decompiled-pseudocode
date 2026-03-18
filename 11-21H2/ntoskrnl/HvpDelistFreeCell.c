/*
 * XREFs of HvpDelistFreeCell @ 0x14079C014
 * Callers:
 *     HvpIsFreeNeighbor @ 0x14079BF50 (HvpIsFreeNeighbor.c)
 *     HvpDoAllocateCell @ 0x14079C920 (HvpDoAllocateCell.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpRemoveFreeCellHint @ 0x14079C290 (HvpRemoveFreeCellHint.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall HvpDelistFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v2; // edi
  __int64 CellFlat; // rax
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0xFFFFFFFFLL;
  v2 = BugCheckParameter3;
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter2, BugCheckParameter3, &v7);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter2);
  v5 = CellFlat;
  result = CellFlat - 4;
  if ( (result & -(__int64)(v5 != 0)) != 0 )
  {
    HvpRemoveFreeCellHint(BugCheckParameter2, v2, 0);
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(BugCheckParameter2, &v7);
    else
      return HvpReleaseCellPaged(BugCheckParameter2, &v7);
  }
  return result;
}
