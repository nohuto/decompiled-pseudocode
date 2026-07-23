/*
 * XREFs of HvpDelistFreeCell @ 0x140709E20
 * Callers:
 *     HvpDoAllocateCell @ 0x14070A650 (HvpDoAllocateCell.c)
 *     HvpIsFreeNeighbor @ 0x14070B010 (HvpIsFreeNeighbor.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpRemoveFreeCellHint @ 0x14070A430 (HvpRemoveFreeCellHint.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

__int64 __fastcall HvpDelistFreeCell(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  bool v2; // zf
  unsigned int v3; // edi
  __int64 CellPaged; // rax
  __int64 v6; // rcx
  __int64 result; // rax
  unsigned int v8; // [rsp+58h] [rbp+20h] BYREF
  int v9; // [rsp+5Ch] [rbp+24h]

  v8 = -1;
  v2 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
  v3 = BugCheckParameter3;
  v9 = 0;
  if ( v2 )
    CellPaged = HvpGetCellPaged(BugCheckParameter2, BugCheckParameter3, &v8);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter2, BugCheckParameter3);
  v6 = CellPaged;
  result = CellPaged - 4;
  if ( (result & -(__int64)(v6 != 0)) != 0 )
  {
    HvpRemoveFreeCellHint(BugCheckParameter2, v3, 0);
    if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(BugCheckParameter2, &v8);
    else
      return HvpReleaseCellPaged(BugCheckParameter2, &v8);
  }
  return result;
}
