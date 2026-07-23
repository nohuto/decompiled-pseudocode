/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x14070AB40
 * Callers:
 *     HvFreeHivePartial @ 0x1407073B8 (HvFreeHivePartial.c)
 *     HvpTruncateBins @ 0x14070754C (HvpTruncateBins.c)
 *     HvpFindNextDirtyBlock @ 0x1407093AC (HvpFindNextDirtyBlock.c)
 *     HvHiveCleanup @ 0x1407098E0 (HvHiveCleanup.c)
 *     HvpSetRangeProtection @ 0x140709B64 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14070A2B0 (HvCheckHive.c)
 *     HvpDropPagedBins @ 0x140827334 (HvpDropPagedBins.c)
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
