/*
 * XREFs of CmpLoadManufacturingModeNode @ 0x140B4E2B0
 * Callers:
 *     CmpLoadManufacturingProfileNode @ 0x140B4E3D8 (CmpLoadManufacturingProfileNode.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpFindSubKeyByName @ 0x14082F108 (CmpFindSubKeyByName.c)
 */

char __fastcall CmpLoadManufacturingModeNode(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 *a3, unsigned int *a4)
{
  __int64 CellFlat; // rax
  unsigned int SubKeyByName; // edi
  unsigned int v10; // edi
  __int64 CellPaged; // rax
  _QWORD v13[2]; // [rsp+20h] [rbp-10h] BYREF
  __int64 v14; // [rsp+50h] [rbp+20h] BYREF

  v13[0] = 0xFFFFFFFFLL;
  v14 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v14);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v14);
  if ( !CellFlat )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v14);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v14);
  if ( SubKeyByName == -1 )
    return 0;
  if ( !((*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
       ? HvpGetCellFlat(BugCheckParameter3, SubKeyByName, v13)
       : HvpGetCellPaged(BugCheckParameter3, SubKeyByName, (unsigned int *)v13)) )
    return 0;
  v10 = CmpFindSubKeyByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v13);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v13);
  if ( v10 != -1
    && ((*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0
      ? (CellPaged = HvpGetCellPaged(BugCheckParameter3, v10, a4))
      : (CellPaged = HvpGetCellFlat(BugCheckParameter3, v10, a4)),
        (*a3 = CellPaged) != 0) )
  {
    return 1;
  }
  else
  {
    return 0;
  }
}
