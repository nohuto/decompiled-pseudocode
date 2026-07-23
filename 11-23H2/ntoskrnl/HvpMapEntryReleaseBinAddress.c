/*
 * XREFs of HvpMapEntryReleaseBinAddress @ 0x140AF52DC
 * Callers:
 *     CmpCheckValueList @ 0x1406DE4F0 (CmpCheckValueList.c)
 *     HvpReleaseCellPaged @ 0x1406E0290 (HvpReleaseCellPaged.c)
 *     HvpFindNextDirtyBlock @ 0x1407093AC (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x140709B64 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14070A2B0 (HvCheckHive.c)
 *     HvpFindFreeCell @ 0x14070A940 (HvpFindFreeCell.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074F984 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x1407E89E0 (HvpMapEntryReleaseBlockAddress.c)
 *     HvpDropPagedBins @ 0x140827334 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140A20DF4 (HvWriteExternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryReleaseBinAddress(__int64 a1, __int64 a2, _WORD *a3)
{
  __int64 result; // rax

  result = 0LL;
  *a3 = 0;
  return result;
}
