/*
 * XREFs of TppWorkpFree @ 0x18007C340
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180033038 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 */

__int64 __fastcall TppWorkpFree(_QWORD *a1)
{
  TppCleanupGroupMemberDestroy(a1);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, (__int64)a1);
}
