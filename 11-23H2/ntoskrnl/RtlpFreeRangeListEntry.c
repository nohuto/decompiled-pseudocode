/*
 * XREFs of RtlpFreeRangeListEntry @ 0x140815998
 * Callers:
 *     RtlpDeleteFromMergedRange @ 0x1408148B4 (RtlpDeleteFromMergedRange.c)
 *     RtlAddRange @ 0x140814BC0 (RtlAddRange.c)
 *     RtlpAddIntersectingRanges @ 0x140814D8C (RtlpAddIntersectingRanges.c)
 *     RtlDeleteRange @ 0x140815720 (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x1408157F0 (RtlDeleteOwnersRanges.c)
 *     RtlpDeleteRangeListEntry @ 0x140815938 (RtlpDeleteRangeListEntry.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x1402B6E00 (ExFreeToNPagedLookasideList.c)
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
