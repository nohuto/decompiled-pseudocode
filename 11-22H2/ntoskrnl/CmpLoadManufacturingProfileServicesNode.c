/*
 * XREFs of CmpLoadManufacturingProfileServicesNode @ 0x140B9A214
 * Callers:
 *     CmpFindDrivers @ 0x140B5D88C (CmpFindDrivers.c)
 * Callees:
 *     HvpGetCellPaged @ 0x1406E0200 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0310 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FE0A0 (HvpGetCellFlat.c)
 *     CmpFindSubKeyByName @ 0x1408264AC (CmpFindSubKeyByName.c)
 *     CmpLoadManufacturingProfileNode @ 0x140B9A124 (CmpLoadManufacturingProfileNode.c)
 */

bool __fastcall CmpLoadManufacturingProfileServicesNode(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        const WCHAR *a3,
        __int64 *a4,
        unsigned int *a5)
{
  unsigned int SubKeyByName; // edi
  __int64 CellFlat; // rax
  __int64 v10; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h] BYREF

  v11 = 0LL;
  v10 = 0xFFFFFFFFLL;
  if ( !CmpLoadManufacturingProfileNode(BugCheckParameter3, a2, a3, &v11, (unsigned int *)&v10) )
    return 0;
  SubKeyByName = CmpFindSubKeyByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v10);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v10);
  if ( SubKeyByName == -1 )
    return 0;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, SubKeyByName, a5);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, SubKeyByName, a5);
  *a4 = CellFlat;
  return CellFlat != 0;
}
