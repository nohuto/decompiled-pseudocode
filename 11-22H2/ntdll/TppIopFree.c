/*
 * XREFs of TppIopFree @ 0x180081910
 * Callers:
 *     <none>
 * Callees:
 *     TpAdjustBindingCount @ 0x18002FFC0 (TpAdjustBindingCount.c)
 *     TppCleanupGroupMemberDestroy @ 0x180033198 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 */

LOGICAL __fastcall TppIopFree(_QWORD *BaseAddress)
{
  TpAdjustBindingCount(BaseAddress[18], 0xFFFFFFFF);
  BaseAddress[32] = 0LL;
  TppCleanupGroupMemberDestroy(BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x40000, BaseAddress);
}
