/*
 * XREFs of RtlpFlsHeapFree @ 0x1407D1798
 * Callers:
 *     RtlpFlsDataCleanup @ 0x14076EE04 (RtlpFlsDataCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFlsHeapFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x6B534C46u);
}
