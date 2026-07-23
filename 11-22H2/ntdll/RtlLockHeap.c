/*
 * XREFs of RtlLockHeap @ 0x18002A090
 * Callers:
 *     RtlExitUserProcess @ 0x1800512C0 (RtlExitUserProcess.c)
 *     RtlValidateHeap @ 0x180086BF0 (RtlValidateHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18008AEC0 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x18008B5D0 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180116410 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021D10 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x18002A04C (RtlpCheckHeapSignature.c)
 *     RtlpHpHeapLock @ 0x18002DA0C (RtlpHpHeapLock.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B280 (RtlGetCurrentServiceSessionId.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpLogHeapLockEvent @ 0x180117384 (RtlpLogHeapLockEvent.c)
 */

BOOLEAN __cdecl RtlLockHeap(PVOID HeapHandle)
{
  bool v1; // zf
  __int64 v3; // rcx
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_DWORD *)HeapHandle + 4) == -571548178;
  v5 = -1;
  if ( v1 )
  {
    RtlpHpHeapLock(HeapHandle, &v5);
  }
  else
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_18017E880)();
    if ( !RtlpCheckHeapSignature(HeapHandle, "RtlLockHeap") )
      return 0;
    if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
      ++*((_WORD *)HeapHandle + 208);
    }
  }
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v3 = 2147353472LL;
  if ( *(_BYTE *)v3 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapLockEvent(HeapHandle);
  }
  return 1;
}
