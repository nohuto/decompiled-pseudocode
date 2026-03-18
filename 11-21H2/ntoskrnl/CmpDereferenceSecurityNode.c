/*
 * XREFs of CmpDereferenceSecurityNode @ 0x1402A2104
 * Callers:
 *     CmpUndoDeleteKeyForTransEx @ 0x140657ADC (CmpUndoDeleteKeyForTransEx.c)
 *     CmpCleanupLightWeightUoWData @ 0x14065CFD4 (CmpCleanupLightWeightUoWData.c)
 *     CmpFreeSecurityDescriptor @ 0x140715D90 (CmpFreeSecurityDescriptor.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071BC94 (CmpTransMgrFreeVolatileData.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmpCopySaclToVirtualKey @ 0x14091822C (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x1409207EC (CmpSyncKeyValues.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140923C08 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x1409242A4 (CmpLightWeightPrepareSetSecDescUoW.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x1402555BC (CmpRemoveSecurityCellList.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 */

__int64 __fastcall CmpDereferenceSecurityNode(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // edi
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = BugCheckParameter4;
  HvpGetCellContextReinitialize(&v6);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    result = HvpGetCellFlat(BugCheckParameter3, v3);
  else
    result = HvpGetCellPaged(BugCheckParameter3);
  if ( (*(_DWORD *)(result + 12))-- == 1 )
  {
    CmpRemoveSecurityCellList(BugCheckParameter3, v3);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v6);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v6);
    return HvFreeCell(BugCheckParameter3, v3);
  }
  else if ( result )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      return HvpReleaseCellFlat(BugCheckParameter3, &v6);
    else
      return HvpReleaseCellPaged(BugCheckParameter3, &v6);
  }
  return result;
}
