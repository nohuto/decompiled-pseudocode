/*
 * XREFs of MiHugePfnPartition @ 0x140620C50
 * Callers:
 *     MiDereferenceIoHugeRange @ 0x14061F988 (MiDereferenceIoHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x1406200D4 (MiHotRemoveHugeRange.c)
 *     MiInsertHugeRangeInList @ 0x140620FCC (MiInsertHugeRangeInList.c)
 *     MiMakeEntireHugePfnGood @ 0x140621514 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x140621618 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140621DF4 (MiMarkHugePfnGood.c)
 *     MiReleaseMemoryRuns @ 0x1406222EC (MiReleaseMemoryRuns.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiHugePfnPartition(_QWORD *a1)
{
  if ( ((*a1 >> 4) & 0x7FF) == 0x401 )
    return 0LL;
  else
    return *(_QWORD *)(qword_140C673C8 + 8 * ((*a1 >> 4) & 0x7FFLL));
}
