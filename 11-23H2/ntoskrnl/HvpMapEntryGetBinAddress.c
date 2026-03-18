/*
 * XREFs of HvpMapEntryGetBinAddress @ 0x140AF5210
 * Callers:
 *     CmpCheckLeaf @ 0x1406DCAC0 (CmpCheckLeaf.c)
 *     HvIsCellAllocated @ 0x1406DD350 (HvIsCellAllocated.c)
 *     CmpCheckValueList @ 0x1406DE4C0 (CmpCheckValueList.c)
 *     HvpGetCellPaged @ 0x1406E0150 (HvpGetCellPaged.c)
 *     HvpMapEntryGetBlockAddress @ 0x1406E0234 (HvpMapEntryGetBlockAddress.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x1407033FC (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpFindNextDirtyBlock @ 0x14070919C (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x140709954 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14070A0A0 (HvCheckHive.c)
 *     HvpRemoveFreeCellHint @ 0x14070A220 (HvpRemoveFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14070A730 (HvpFindFreeCell.c)
 *     HvFreeCell @ 0x14070ABE0 (HvFreeCell.c)
 *     HvpAddFreeCellHint @ 0x140745EB4 (HvpAddFreeCellHint.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074F794 (HvpRemapAndEnlistHiveBins.c)
 *     HvpDropPagedBins @ 0x140827034 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140A20B44 (HvWriteExternal.c)
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
