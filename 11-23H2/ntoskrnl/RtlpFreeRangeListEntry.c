/*
 * XREFs of RtlpFreeRangeListEntry @ 0x1408156C8
 * Callers:
 *     RtlpDeleteFromMergedRange @ 0x1408145E4 (RtlpDeleteFromMergedRange.c)
 *     RtlAddRange @ 0x1408148F0 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x140814ABC (RtlpAddIntersectingRanges.c)
 *     RtlDeleteRange @ 0x140815450 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x140815520 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x140815668 (RtlpDeleteRangeListEntry.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402B6B70 (ExFreeToNPagedLookasideList.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeRangeListEntry(PVOID Entry)
{
  _DWORD *v2; // rax

  if ( (*((_BYTE *)Entry + 34) & 1) == 0 && (*((_BYTE *)Entry + 33) & 0x10) != 0 )
  {
    v2 = (_DWORD *)*((_QWORD *)Entry + 2);
    if ( (*v2)-- == 1 )
      ExFreePoolWithTag(*((PVOID *)Entry + 2), 0);
  }
  ExFreeToNPagedLookasideList(&RtlpRangeListEntryLookasideList, Entry);
}
