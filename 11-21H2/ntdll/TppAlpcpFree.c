/*
 * XREFs of TppAlpcpFree @ 0x18008A250
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18001C480 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18001EE64 (TpAdjustBindingCount.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

LOGICAL __fastcall TppAlpcpFree(_QWORD *a1)
{
  _QWORD *v2; // rdi

  v2 = a1 - 9;
  TpAdjustBindingCount(a1[18], 0xFFFFFFFF);
  v2[7] = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x80000, v2);
}
