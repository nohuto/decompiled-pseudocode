/*
 * XREFs of RtlLockHeap @ 0x180029EC0
 * Callers:
 *     RtlExitUserProcess @ 0x180051160 (RtlExitUserProcess.c)
 *     RtlValidateHeap @ 0x1800873F0 (RtlValidateHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18008B6C0 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x18008BDD0 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x1801178C0 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180021B30 (RtlEnterCriticalSection.c)
 *     RtlpCheckHeapSignature @ 0x180029E7C (RtlpCheckHeapSignature.c)
 *     RtlpHpHeapLock @ 0x18002D83C (RtlpHpHeapLock.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpLogHeapLockEvent @ 0x180118834 (RtlpLogHeapLockEvent.c)
 */

char __fastcall RtlLockHeap(__int64 a1)
{
  bool v1; // zf
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 16) == -571548178;
  v9 = -1;
  if ( v1 )
  {
    RtlpHpHeapLock(a1, &v9);
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_180181290)();
    if ( !RtlpCheckHeapSignature((_DWORD *)a1, "RtlLockHeap") )
      return 0;
    if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
    {
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      ++*(_WORD *)(a1 + 416);
    }
  }
  if ( (unsigned int)RtlGetCurrentServiceSessionId(v4, v3, v5, v6) )
    v7 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v7 = 2147353472LL;
  if ( *(_BYTE *)v7 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapLockEvent(a1);
  }
  return 1;
}
