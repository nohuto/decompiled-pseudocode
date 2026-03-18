/*
 * XREFs of CmpRemoveSubKey @ 0x140716ED0
 * Callers:
 *     CmpFreeKeyByCell @ 0x1407164DC (CmpFreeKeyByCell.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpRemoveSubKeyFromList @ 0x140716F80 (CmpRemoveSubKeyFromList.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

char __fastcall CmpRemoveSubKey(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, unsigned int a3)
{
  unsigned __int64 v4; // rdi
  __int64 CellFlat; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rbp
  char v8; // di
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0xFFFFFFFFLL;
  v4 = a3;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v10);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  v6 = CellFlat;
  if ( !CellFlat )
    return 0;
  v7 = v4 >> 31;
  v8 = CmpRemoveSubKeyFromList(BugCheckParameter3);
  if ( v8 )
  {
    --*(_DWORD *)(v6 + 4 * v7 + 20);
    v8 = 1;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v10);
  else
    HvpReleaseCellPaged(BugCheckParameter3, &v10);
  return v8;
}
