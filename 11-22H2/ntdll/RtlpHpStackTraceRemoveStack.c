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

signed __int64 __fastcall RtlpHpStackTraceRemoveStack(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  __int64 v6; // rax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext, a2, a3, a4);
  if ( (dword_180185108 & 1) != 0 && (dword_180185108 & 2) != 0 && (int)RtlpHpStackTraceHeapGetContext(a1, 0, &v8) >= 0 )
  {
    v6 = RtlpHpStackTraceAllocRemove(v8, a2);
    if ( v6 )
      RtlStackDbStackRemove(&qword_180185110, v6);
  }
  return RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
