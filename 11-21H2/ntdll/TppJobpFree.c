/*
 * XREFs of TppJobpFree @ 0x18008B830
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18001C480 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18001EE64 (TpAdjustBindingCount.c)
 */

LOGICAL __fastcall TppJobpFree(_QWORD *a1)
{
  TpAdjustBindingCount(a1[18], 0xFFFFFFFF);
  *(a1 - 2) = 0LL;
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 3407872, a1 - 9);
}
