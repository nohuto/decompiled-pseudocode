/*
 * XREFs of MiHugePfnPartition @ 0x1406211A0
 * Callers:
 *     MiDereferenceIoHugeRange @ 0x14061FED8 (MiDereferenceIoHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140620624 (MiHotRemoveHugeRange.c)
 *     MiInsertHugeRangeInList @ 0x14062151C (MiInsertHugeRangeInList.c)
 *     MiMakeEntireHugePfnGood @ 0x140621A64 (MiMakeEntireHugePfnGood.c)
 *     MiMarkHugePfnBad @ 0x140621B68 (MiMarkHugePfnBad.c)
 *     MiMarkHugePfnGood @ 0x140622344 (MiMarkHugePfnGood.c)
 *     MiReleaseMemoryRuns @ 0x14062283C (MiReleaseMemoryRuns.c)
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
