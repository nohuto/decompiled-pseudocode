/*
 * XREFs of CrmUnregister @ 0x180002770
 * Callers:
 *     sub_180016120 @ 0x180016120 (sub_180016120.c)
 * Callees:
 *     sub_1800027A8 @ 0x1800027A8 (sub_1800027A8.c)
 */

BOOLEAN __fastcall CrmUnregister(void *a1)
{
  sub_1800027A8();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
