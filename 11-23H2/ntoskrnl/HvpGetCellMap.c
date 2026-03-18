/*
 * XREFs of HvpGetCellMap @ 0x140AF5280
 * Callers:
 *     CmpCheckLeaf @ 0x1406DCAC0 (CmpCheckLeaf.c)
 *     HvIsCellAllocated @ 0x1406DD350 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1406DE4C0 (CmpCheckValueList.c)
 *     HvpReleaseCellPaged @ 0x1406E0260 (HvpReleaseCellPaged.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1407033FC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvFreeHivePartial @ 0x1407071A8 (HvFreeHivePartial.c)
 *     HvpTruncateBins @ 0x14070733C (HvpTruncateBins.c)
 *     HvpFindNextDirtyBlock @ 0x14070919C (HvpFindNextDirtyBlock.c)
 *     HvHiveCleanup @ 0x1407096D0 (HvHiveCleanup.c)
 *     HvpSetRangeProtection @ 0x140709954 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14070A0A0 (HvCheckHive.c)
 *     HvpRemoveFreeCellHint @ 0x14070A220 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14070A730 (HvpFindFreeCell.c)
 *     HvFreeCell @ 0x14070ABE0 (HvFreeCell.c)
 *     HvpAddFreeCellHint @ 0x140745EB4 (HvpAddFreeCellHint.c)
 *     HvpEnlistFreeCell @ 0x140745F70 (HvpEnlistFreeCell.c)
 *     HvpMarkCellDirty @ 0x140746FA0 (HvpMarkCellDirty.c)
 *     HvpAddBin @ 0x14074F174 (HvpAddBin.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074F794 (HvpRemapAndEnlistHiveBins.c)
 *     HvpPointMapEntriesToBuffer @ 0x14074FDCC (HvpPointMapEntriesToBuffer.c)
 *     HvpMapHiveImageFromViewMap @ 0x1407502D8 (HvpMapHiveImageFromViewMap.c)
 *     HvpCopyModifiedData @ 0x1407FE680 (HvpCopyModifiedData.c)
 *     HvpDropPagedBins @ 0x140827034 (HvpDropPagedBins.c)
 *     HvTrimHive @ 0x14085F91C (HvTrimHive.c)
 *     HvWriteExternal @ 0x140A20B44 (HvWriteExternal.c)
 *     HvpShrinkMap @ 0x140A25AF4 (HvpShrinkMap.c)
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
