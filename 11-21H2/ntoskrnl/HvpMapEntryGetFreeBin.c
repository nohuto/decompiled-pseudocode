/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x14079B740
 * Callers:
 *     HvpTruncateBins @ 0x140689848 (HvpTruncateBins.c)
 *     HvFreeHivePartial @ 0x140689900 (HvFreeHivePartial.c)
 *     HvpFindNextDirtyBlock @ 0x14079AE04 (HvpFindNextDirtyBlock.c)
 *     HvpSetRangeProtection @ 0x14079B0D0 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14079B3A0 (HvCheckHive.c)
 *     HvHiveCleanup @ 0x14079B518 (HvHiveCleanup.c)
 *     HvpDropPagedBins @ 0x14083D244 (HvpDropPagedBins.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpMapEntryGetFreeBin(_BYTE *a1)
{
  if ( (a1[8] & 2) != 0 )
    return *(_QWORD *)a1;
  else
    return 0LL;
}
