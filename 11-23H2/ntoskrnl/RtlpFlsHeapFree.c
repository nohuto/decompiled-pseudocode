/*
 * XREFs of RtlpFlsHeapFree @ 0x1407D1A68
 * Callers:
 *     RtlpFlsDataCleanup @ 0x14076EFF4 (RtlpFlsDataCleanup.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFlsHeapFree(void *a1)
{
  ExFreePoolWithTag(a1, 0x6B534C46u);
}
