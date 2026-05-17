/*
 * XREFs of RtlpCallInterceptRoutine @ 0x1800B085E
 * Callers:
 *     RtlpHpFreeHeap @ 0x18003B1F0 (RtlpHpFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x18003BBF0 (RtlpFreeHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x18003CC00 (RtlpAllocateHeapInternal.c)
 *     RtlpHpReAllocateHeap @ 0x180041D6C (RtlpHpReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180042250 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpSegReAlloc @ 0x180043810 (RtlpHpSegReAlloc.c)
 *     RtlDestroyHeap @ 0x180049550 (RtlDestroyHeap.c)
 *     RtlpHpAllocateHeap @ 0x180066CD8 (RtlpHpAllocateHeap.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1801010A0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCallInterceptRoutine(int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int16 v5; // cx

  if ( a1 && (v5 = a1 - 1, v5 < 2u) )
    return ((__int64 (__fastcall *)(__int64, __int64, _QWORD, __int64))RtlpInterceptorRoutines[v5])(a2, a3, a4, a5);
  else
    return 3221225473LL;
}
