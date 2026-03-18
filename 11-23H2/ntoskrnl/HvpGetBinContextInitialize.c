/*
 * XREFs of HvpGetBinContextInitialize @ 0x140AF5200
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpReferenceSecurityNode @ 0x14067F3E0 (CmpReferenceSecurityNode.c)
 *     CmpCreateChild @ 0x1406D0F70 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1406D3240 (CmSetValueKey.c)
 *     CmpCheckLeaf @ 0x1406DCAC0 (CmpCheckLeaf.c)
 *     HvIsCellAllocated @ 0x1406DD350 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1406DE4C0 (CmpCheckValueList.c)
 *     HvpGetCellContextReinitialize @ 0x1406E029C (HvpGetCellContextReinitialize.c)
 *     CmpDoParseKey @ 0x1406E9100 (CmpDoParseKey.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1407033FC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpFindNextDirtyBlock @ 0x14070919C (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x140709954 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14070A0A0 (HvCheckHive.c)
 *     HvpRemoveFreeCellHint @ 0x14070A220 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14070A730 (HvpFindFreeCell.c)
 *     HvpGetCellContextMove @ 0x14070AA08 (HvpGetCellContextMove.c)
 *     HvFreeCell @ 0x14070ABE0 (HvFreeCell.c)
 *     CmpSetKeySecurity @ 0x14070C3BC (CmpSetKeySecurity.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14070C9DC (CmpValidateHiveSecurityDescriptors.c)
 *     HvpAddFreeCellHint @ 0x140745EB4 (HvpAddFreeCellHint.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074F794 (HvpRemapAndEnlistHiveBins.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1407D12C8 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     HvpReleaseCellFlat @ 0x1407D9470 (HvpReleaseCellFlat.c)
 *     HvpCopyModifiedData @ 0x1407FE680 (HvpCopyModifiedData.c)
 *     HvpDropPagedBins @ 0x140827034 (HvpDropPagedBins.c)
 *     CmpRefreshHive @ 0x140A0C890 (CmpRefreshHive.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13B64 (CmEnumerateValueFromLayeredKey.c)
 *     CmRenameKey @ 0x140A143AC (CmRenameKey.c)
 *     HvWriteExternal @ 0x140A20B44 (HvWriteExternal.c)
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
