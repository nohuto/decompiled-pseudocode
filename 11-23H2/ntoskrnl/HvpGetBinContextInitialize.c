/*
 * XREFs of HvpGetBinContextInitialize @ 0x140AF5200
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpReferenceSecurityNode @ 0x14067F3E0 (CmpReferenceSecurityNode.c)
 *     CmpCreateChild @ 0x1406D0FA0 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1406D3270 (CmSetValueKey.c)
 *     CmpCheckLeaf @ 0x1406DCAF0 (CmpCheckLeaf.c)
 *     HvIsCellAllocated @ 0x1406DD380 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1406DE4F0 (CmpCheckValueList.c)
 *     HvpGetCellContextReinitialize @ 0x1406E02CC (HvpGetCellContextReinitialize.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14070360C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpFindNextDirtyBlock @ 0x1407093AC (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x140709B64 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14070A2B0 (HvCheckHive.c)
 *     HvpRemoveFreeCellHint @ 0x14070A430 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14070A940 (HvpFindFreeCell.c)
 *     HvpGetCellContextMove @ 0x14070AC18 (HvpGetCellContextMove.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     CmpSetKeySecurity @ 0x14070C5CC (CmpSetKeySecurity.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14070CBEC (CmpValidateHiveSecurityDescriptors.c)
 *     HvpAddFreeCellHint @ 0x1407460A4 (HvpAddFreeCellHint.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074F984 (HvpRemapAndEnlistHiveBins.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1407D1598 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     HvpReleaseCellFlat @ 0x1407D9740 (HvpReleaseCellFlat.c)
 *     HvpCopyModifiedData @ 0x1407FE950 (HvpCopyModifiedData.c)
 *     HvpDropPagedBins @ 0x140827334 (HvpDropPagedBins.c)
 *     CmpRefreshHive @ 0x140A0CB40 (CmpRefreshHive.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13E14 (CmEnumerateValueFromLayeredKey.c)
 *     CmRenameKey @ 0x140A1465C (CmRenameKey.c)
 *     HvWriteExternal @ 0x140A20DF4 (HvWriteExternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetBinContextInitialize(_WORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0;
  return result;
}
