/*
 * XREFs of HvpMapEntryGetBinAddress @ 0x140AB451C
 * Callers:
 *     HvWriteExternal @ 0x14065A848 (HvWriteExternal.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x14068C0C4 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14068C544 (HvpRemapAndEnlistHiveBins.c)
 *     HvpFindNextDirtyBlock @ 0x14079AE04 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x14079B0D0 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14079B3A0 (HvCheckHive.c)
 *     HvFreeCell @ 0x14079BD98 (HvFreeCell.c)
 *     HvpRemoveFreeCellHint @ 0x14079C290 (HvpRemoveFreeCellHint.c)
 *     HvpAddFreeCellHint @ 0x14079C578 (HvpAddFreeCellHint.c)
 *     HvpFindFreeCell @ 0x14079CC20 (HvpFindFreeCell.c)
 *     HvIsCellAllocated @ 0x1407C8130 (HvIsCellAllocated.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     HvpMapEntryGetBlockAddress @ 0x1407C9904 (HvpMapEntryGetBlockAddress.c)
 *     HvpDropPagedBins @ 0x14083D244 (HvpDropPagedBins.c)
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
