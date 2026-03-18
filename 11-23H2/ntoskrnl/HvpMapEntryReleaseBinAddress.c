/*
 * XREFs of HvpMapEntryReleaseBinAddress @ 0x140AF52DC
 * Callers:
 *     CmpCheckValueList @ 0x1406DE4C0 (CmpCheckValueList.c)
 *     HvpReleaseCellPaged @ 0x1406E0260 (HvpReleaseCellPaged.c)
 *     HvpFindNextDirtyBlock @ 0x14070919C (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x140709954 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14070A0A0 (HvCheckHive.c)
 *     HvpFindFreeCell @ 0x14070A730 (HvpFindFreeCell.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14074F794 (HvpRemapAndEnlistHiveBins.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x1407E8710 (HvpMapEntryReleaseBlockAddress.c)
 *     HvpDropPagedBins @ 0x140827034 (HvpDropPagedBins.c)
 *     HvWriteExternal @ 0x140A20B44 (HvWriteExternal.c)
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
