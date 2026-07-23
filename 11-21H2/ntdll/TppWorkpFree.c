/*
 * XREFs of TppWorkpFree @ 0x18001F860
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18001C480 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

LOGICAL __fastcall TppWorkpFree(_QWORD *BaseAddress)
{
  TppCleanupGroupMemberDestroy(BaseAddress);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, BaseAddress);
}
