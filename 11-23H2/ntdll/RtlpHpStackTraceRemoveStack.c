/*
 * XREFs of RtlpHpStackTraceRemoveStack @ 0x180117AD0
 * Callers:
 *     RtlpFreeHeapInternal @ 0x18003BBF0 (RtlpFreeHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x180042250 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpStackTraceAllocRemove @ 0x180117344 (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x18011784C (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackRemove @ 0x18012DCF4 (RtlStackDbStackRemove.c)
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
  if ( (dword_1801881E8 & 1) != 0 && (dword_1801881E8 & 2) != 0 && (int)RtlpHpStackTraceHeapGetContext(a1, 0, &v8) >= 0 )
  {
    v6 = RtlpHpStackTraceAllocRemove(v8, a2);
    if ( v6 )
      RtlStackDbStackRemove(&qword_1801881F0, v6);
  }
  return RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
