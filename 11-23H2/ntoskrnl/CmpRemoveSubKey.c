/*
 * XREFs of CmpRemoveSubKey @ 0x14070BE80
 * Callers:
 *     CmpFreeKeyByCell @ 0x14070B424 (CmpFreeKeyByCell.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     CmpRemoveSubKeyFromList @ 0x14070BF30 (CmpRemoveSubKeyFromList.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

char __fastcall CmpRemoveSubKey(ULONG_PTR BugCheckParameter2, ULONG_PTR a2, unsigned int a3)
{
  unsigned __int64 v4; // rdi
  bool v5; // zf
  __int64 CellPaged; // rax
  __int64 v7; // rsi
  unsigned __int64 v8; // rbp
  char v9; // di
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+34h] [rbp+Ch]

  v11 = -1;
  v4 = a3;
  v5 = (*(_BYTE *)(BugCheckParameter2 + 140) & 1) == 0;
  v12 = 0;
  if ( v5 )
    CellPaged = HvpGetCellPaged(BugCheckParameter2, a2, &v11);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter2, a2);
  v7 = CellPaged;
  if ( !CellPaged )
    return 0;
  v8 = v4 >> 31;
  v9 = CmpRemoveSubKeyFromList(BugCheckParameter2);
  if ( v9 )
  {
    --*(_DWORD *)(v7 + 4 * v8 + 20);
    v9 = 1;
  }
  if ( (*(_BYTE *)(BugCheckParameter2 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter2, &v11);
  else
    HvpReleaseCellPaged(BugCheckParameter2, &v11);
  return v9;
}
