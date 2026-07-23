/*
 * XREFs of RtlpHpStackTraceRemoveStack @ 0x180117AA0
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003BBF0 (RtlpFreeHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x180042250 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpStackTraceAllocRemove @ 0x180117314 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18011781C (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackRemove @ 0x18012DD20 (RtlStackDbStackRemove.c)
 */

void __fastcall RtlpHpStackTraceRemoveStack(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext);
  if ( (dword_1801881E8 & 1) != 0
    && (dword_1801881E8 & 2) != 0
    && RtlpHpStackTraceHeapGetContext(a1, 0, (PVOID *)&v5) >= 0 )
  {
    v4 = RtlpHpStackTraceAllocRemove(v5, a2);
    if ( v4 )
      RtlStackDbStackRemove(&qword_1801881F0, v4);
  }
  RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
