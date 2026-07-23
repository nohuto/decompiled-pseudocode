/*
 * XREFs of CmpCheckSecurityCellAccess @ 0x14069A11C
 * Callers:
 *     CmpValidateHiveSecurityDescriptors @ 0x14070CBEC (CmpValidateHiveSecurityDescriptors.c)
 *     CmpCheckKeyAccess @ 0x140A1B2E0 (CmpCheckKeyAccess.c)
 * Callees:
 *     CmpCheckKeySecurityDescriptorAccess @ 0x14069A1C8 (CmpCheckKeySecurityDescriptorAccess.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpGetCellFlat @ 0x1407FDCC0 (HvpGetCellFlat.c)
 */

__int64 __fastcall CmpCheckSecurityCellAccess(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // edi
  __int64 CellFlat; // rax
  unsigned int v5; // edi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v7);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v3);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
  if ( CellFlat )
  {
    v5 = CmpCheckKeySecurityDescriptorAccess((PSECURITY_DESCRIPTOR)(CellFlat + 20));
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v7);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v7);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
