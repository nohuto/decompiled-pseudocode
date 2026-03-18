/*
 * XREFs of HvpMapEntryGetFreeBin @ 0x14070A930
 * Callers:
 *     HvFreeHivePartial @ 0x1407071A8 (HvFreeHivePartial.c)
 *     HvpTruncateBins @ 0x14070733C (HvpTruncateBins.c)
 *     HvpFindNextDirtyBlock @ 0x14070919C (HvpFindNextDirtyBlock.c)
 *     HvHiveCleanup @ 0x1407096D0 (HvHiveCleanup.c)
 *     HvpSetRangeProtection @ 0x140709954 (HvpSetRangeProtection.c)
 *     HvCheckHive @ 0x14070A0A0 (HvCheckHive.c)
 *     HvpDropPagedBins @ 0x140827034 (HvpDropPagedBins.c)
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
