/*
 * XREFs of RtlpHpStackTraceRemoveStack @ 0x180116620
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003BD50 (RtlpFreeHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x1800423B0 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180026F00 (RtlAcquireSRWLockShared.c)
 *     RtlpHpStackTraceAllocRemove @ 0x180115E94 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18011639C (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackRemove @ 0x18012C800 (RtlStackDbStackRemove.c)
 */

void __fastcall RtlpHpStackTraceRemoveStack(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext);
  if ( (dword_180185108 & 1) != 0
    && (dword_180185108 & 2) != 0
    && RtlpHpStackTraceHeapGetContext(a1, 0, (PVOID *)&v5) >= 0 )
  {
    v4 = RtlpHpStackTraceAllocRemove(v5, a2);
    if ( v4 )
      RtlStackDbStackRemove(&qword_180185110, v4);
  }
  RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
