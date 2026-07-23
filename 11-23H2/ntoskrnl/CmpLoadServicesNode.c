/*
 * XREFs of CmpLoadServicesNode @ 0x140B59174
 * Callers:
 *     CmpFindDrivers @ 0x140B5A8DC (CmpFindDrivers.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 *     CmpFindSubKeyByName @ 0x140825C4C (CmpFindSubKeyByName.c)
 */

bool __fastcall CmpLoadServicesNode(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, __int64 *a3, unsigned int *a4)
{
  __int64 CellFlat; // rax
  unsigned int SubKeyByName; // edi
  __int64 CellPaged; // rax
  __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0xFFFFFFFFLL;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v11);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, (unsigned int *)&v11);
  if ( !CellFlat )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v11);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v11);
  if ( SubKeyByName == -1 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = HvpGetCellFlat(BugCheckParameter3, SubKeyByName, a4);
  else
    CellPaged = HvpGetCellPaged(BugCheckParameter3, SubKeyByName, a4);
  *a3 = CellPaged;
  return CellPaged != 0;
}
