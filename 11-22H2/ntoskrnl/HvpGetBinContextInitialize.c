/*
 * XREFs of HvpGetBinContextInitialize @ 0x140AF6200
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14067F1B8 (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpReferenceSecurityNode @ 0x14067F3E0 (CmpReferenceSecurityNode.c)
 *     CmpCreateChild @ 0x1406D1020 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     CmpCheckLeaf @ 0x1406DCB70 (CmpCheckLeaf.c)
 *     HvIsCellAllocated @ 0x1406DD400 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1406DE570 (CmpCheckValueList.c)
 *     HvpGetCellContextReinitialize @ 0x1406E034C (HvpGetCellContextReinitialize.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1407034AC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpFindNextDirtyBlock @ 0x14070924C (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x140709A04 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14070A150 (HvCheckHive.c)
 *     HvpRemoveFreeCellHint @ 0x14070A2D0 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14070A7E0 (HvpFindFreeCell.c)
 *     HvpGetCellContextMove @ 0x14070AAB8 (HvpGetCellContextMove.c)
 *     HvFreeCell @ 0x14070AC90 (HvFreeCell.c)
 *     CmpSetKeySecurity @ 0x14070C46C (CmpSetKeySecurity.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14070CA8C (CmpValidateHiveSecurityDescriptors.c)
 *     HvpAddFreeCellHint @ 0x1407463C4 (HvpAddFreeCellHint.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074FCA4 (HvpRemapAndEnlistHiveBins.c)
 *     CmpCheckAndFixSecurityCellsRefcount @ 0x1407D1848 (CmpCheckAndFixSecurityCellsRefcount.c)
 *     HvpReleaseCellFlat @ 0x1407D99F0 (HvpReleaseCellFlat.c)
 *     HvpCopyModifiedData @ 0x1407FED30 (HvpCopyModifiedData.c)
 *     HvpDropPagedBins @ 0x140828B84 (HvpDropPagedBins.c)
 *     CmpRefreshHive @ 0x140A0C940 (CmpRefreshHive.c)
 *     CmEnumerateValueFromLayeredKey @ 0x140A13C14 (CmEnumerateValueFromLayeredKey.c)
 *     CmRenameKey @ 0x140A1445C (CmRenameKey.c)
 *     HvWriteExternal @ 0x140A20BF4 (HvWriteExternal.c)
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
