/*
 * XREFs of TppWorkpFree @ 0x18007BCD0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180033198 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 */

LOGICAL __fastcall TppWorkpFree(_QWORD *BaseAddress)
{
  TppCleanupGroupMemberDestroy(BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
}
