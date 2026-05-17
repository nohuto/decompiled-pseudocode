/*
 * XREFs of TppWorkpFree @ 0x18007BCD0
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x180033198 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 */

__int64 __fastcall TppWorkpFree(_QWORD *a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  TppCleanupGroupMemberDestroy(a1, a2, a3, a4);
  return RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, TppHeapTag + 0x200000, (__int64)a1);
}
