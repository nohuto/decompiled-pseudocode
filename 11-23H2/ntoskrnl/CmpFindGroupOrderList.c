/*
 * XREFs of CmpFindGroupOrderList @ 0x140B59450
 * Callers:
 *     CmpFindDrivers @ 0x140B5A8DC (CmpFindDrivers.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     CmpFindSubKeyByName @ 0x140825C4C (CmpFindSubKeyByName.c)
 */

__int64 __fastcall CmpFindGroupOrderList(ULONG_PTR BugCheckParameter3, ULONG_PTR a2)
{
  __int64 CellFlat; // rax
  unsigned int SubKeyByName; // edi
  unsigned int v6; // edi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v8);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v8);
  if ( !CellFlat )
    return 0xFFFFFFFFLL;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v8);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v8);
  if ( SubKeyByName == -1 )
    return 0xFFFFFFFFLL;
  if ( !((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
       ? HvpGetCellFlat(BugCheckParameter3, SubKeyByName, &v8)
       : HvpGetCellPaged(BugCheckParameter3, SubKeyByName, (unsigned int *)&v8)) )
    return 0xFFFFFFFFLL;
  v6 = CmpFindSubKeyByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v8);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v8);
  return v6;
}
