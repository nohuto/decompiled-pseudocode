/*
 * XREFs of HvpGetCellMap @ 0x140AF5280
 * Callers:
 *     CmpCheckLeaf @ 0x1406DCAF0 (CmpCheckLeaf.c)
 *     HvIsCellAllocated @ 0x1406DD380 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1406DE4F0 (CmpCheckValueList.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14070360C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvFreeHivePartial @ 0x1407073B8 (HvFreeHivePartial.c)
 *     HvpTruncateBins @ 0x14070754C (HvpTruncateBins.c)
 *     HvpFindNextDirtyBlock @ 0x1407093AC (HvpFindNextDirtyBlock.c)
 *     HvHiveCleanup @ 0x1407098E0 (HvHiveCleanup.c)
 *     HvpSetRangeProtection @ 0x140709B64 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14070A2B0 (HvCheckHive.c)
 *     HvpRemoveFreeCellHint @ 0x14070A430 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14070A940 (HvpFindFreeCell.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     HvpAddFreeCellHint @ 0x1407460A4 (HvpAddFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140746160 (HvpEnlistFreeCell.c)
 *     HvpMarkCellDirty @ 0x140747190 (HvpMarkCellDirty.c)
 *     HvpAddBin @ 0x14074F364 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074F984 (HvpRemapAndEnlistHiveBins.c)
 *     HvpPointMapEntriesToBuffer @ 0x14074FFBC (HvpPointMapEntriesToBuffer.c)
 *     HvpMapHiveImageFromViewMap @ 0x1407504C8 (HvpMapHiveImageFromViewMap.c)
 *     HvpCopyModifiedData @ 0x1407FE950 (HvpCopyModifiedData.c)
 *     HvpDropPagedBins @ 0x140827334 (HvpDropPagedBins.c)
 *     HvTrimHive @ 0x14085FB5C (HvTrimHive.c)
 *     HvWriteExternal @ 0x140A20DF4 (HvWriteExternal.c)
 *     HvpShrinkMap @ 0x140A25DA4 (HvpShrinkMap.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140AF5DB4 (HvSnapshotHiveToOffsetArray.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpGetCellMap(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = a1 + 632LL * (a2 >> 31);
  if ( a2 + (a2 >> 31 << 31) >= *(_DWORD *)(v2 + 280) )
    return 0LL;
  else
    return *(_QWORD *)(*(_QWORD *)(v2 + 288) + 8LL * ((a2 >> 21) & 0x3FF)) + 24LL * ((a2 >> 12) & 0x1FF);
}
