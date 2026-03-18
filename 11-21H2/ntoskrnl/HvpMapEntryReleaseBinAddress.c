/*
 * XREFs of HvpMapEntryReleaseBinAddress @ 0x140AB44A4
 * Callers:
 *     HvWriteExternal @ 0x14065A848 (HvWriteExternal.c)
 *     HvpRemapAndEnlistHiveBins @ 0x14068C544 (HvpRemapAndEnlistHiveBins.c)
 *     HvpFindNextDirtyBlock @ 0x14079AE04 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x14079B0D0 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14079B3A0 (HvCheckHive.c)
 *     HvpFindFreeCell @ 0x14079CC20 (HvpFindFreeCell.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpDropPagedBins @ 0x14083D244 (HvpDropPagedBins.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x1409221DC (HvpMapEntryReleaseBlockAddress.c)
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
