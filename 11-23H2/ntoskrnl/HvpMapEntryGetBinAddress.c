/*
 * XREFs of HvpMapEntryGetBinAddress @ 0x140AF5210
 * Callers:
 *     CmpCheckLeaf @ 0x1406DCAF0 (CmpCheckLeaf.c)
 *     HvIsCellAllocated @ 0x1406DD380 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1406DE4F0 (CmpCheckValueList.c)
 *     HvpGetCellPaged @ 0x1406E0180 (HvpGetCellPaged.c)
 *     HvpMapEntryGetBlockAddress @ 0x1406E0264 (HvpMapEntryGetBlockAddress.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14070360C (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpFindNextDirtyBlock @ 0x1407093AC (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x140709B64 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14070A2B0 (HvCheckHive.c)
 *     HvpRemoveFreeCellHint @ 0x14070A430 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14070A940 (HvpFindFreeCell.c)
 *     HvFreeCell @ 0x14070ADF0 (HvFreeCell.c)
 *     HvpAddFreeCellHint @ 0x1407460A4 (HvpAddFreeCellHint.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074F984 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140827334 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140A20DF4 (HvWriteExternal.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall HvpMapEntryGetBinAddress(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)(a2 + 8);
  *a3 |= 1u;
  return v3 & 0xFFFFFFFFFFFFFFF0uLL;
}
