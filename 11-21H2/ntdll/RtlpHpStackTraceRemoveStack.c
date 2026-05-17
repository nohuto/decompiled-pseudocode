/*
 * XREFs of RtlpHpStackTraceRemoveStack @ 0x180116230
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x1800245B8 (RtlpReAllocateHeapInternal.c)
 *     RtlpFreeHeapInternal @ 0x180027BF0 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003A9D0 (RtlAcquireSRWLockShared.c)
 *     RtlpHpStackTraceAllocRemove @ 0x180115ABC (RtlpHpStackTraceAllocRemove.c)
 *     RtlpHpStackTraceHeapGetContext @ 0x180115FAC (RtlpHpStackTraceHeapGetContext.c)
 *     RtlStackDbStackRemove @ 0x180127BBC (RtlStackDbStackRemove.c)
 */

signed __int64 __fastcall RtlpHpStackTraceRemoveStack(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  __int64 v6; // rax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  RtlAcquireSRWLockShared(&RtlpHpStackTrackingContext);
  if ( (dword_18017AE98 & 1) != 0 && (dword_18017AE98 & 2) != 0 && (int)RtlpHpStackTraceHeapGetContext(a1, 0, &v8) >= 0 )
  {
    v6 = RtlpHpStackTraceAllocRemove(v8, a2, v4, v5);
    if ( v6 )
      RtlStackDbStackRemove(&qword_18017AEA0, v6);
  }
  return RtlReleaseSRWLockShared(&RtlpHpStackTrackingContext);
}
