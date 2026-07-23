/*
 * XREFs of TppIopFree @ 0x1800869B0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18001C480 (TppCleanupGroupMemberDestroy.c)
 *     TpAdjustBindingCount @ 0x18001EE64 (TpAdjustBindingCount.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

LOGICAL __fastcall TppIopFree(_QWORD *BaseAddress)
{
  TpAdjustBindingCount(BaseAddress[18], 0xFFFFFFFF);
  BaseAddress[32] = 0LL;
  TppCleanupGroupMemberDestroy(BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, BaseAddress);
}
