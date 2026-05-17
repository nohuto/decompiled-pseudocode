/*
 * XREFs of TppWorkpFree @ 0x18001F860
 * Callers:
 *     <none>
 * Callees:
 *     TppCleanupGroupMemberDestroy @ 0x18001C480 (TppCleanupGroupMemberDestroy.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 */

__int64 __fastcall TppWorkpFree(_QWORD *a1, unsigned __int64 a2, volatile signed __int32 *a3, unsigned __int64 a4)
{
  TppCleanupGroupMemberDestroy(a1, a2, a3, a4);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, (unsigned int)(TppHeapTag + 0x200000), a1);
}
