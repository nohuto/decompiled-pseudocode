/*
 * XREFs of RtlUnlockHeap @ 0x180029D40
 * Callers:
 *     RtlExitUserProcess @ 0x180051160 (RtlExitUserProcess.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x180051420 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlValidateHeap @ 0x1800873F0 (RtlValidateHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18008B6C0 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x18008BDD0 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180117890 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlpCheckHeapSignature @ 0x180029E7C (RtlpCheckHeapSignature.c)
 *     RtlpWakeByAddress @ 0x18002A00C (RtlpWakeByAddress.c)
 *     RtlpHpHeapUnlock @ 0x18002D904 (RtlpHpHeapUnlock.c)
 *     RtlBackoff @ 0x180033E20 (RtlBackoff.c)
 *     RtlGetCurrentServiceSessionId @ 0x18003B120 (RtlGetCurrentServiceSessionId.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180083460 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     ZwSetEvent @ 0x1800A1070 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F4D50 (RtlpNotOwnerCriticalSection.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 *     RtlpLogHeapUnlockEvent @ 0x180118E58 (RtlpLogHeapUnlockEvent.c)
 */

BOOLEAN __cdecl RtlUnlockHeap(PVOID HeapHandle)
{
  __int64 v2; // rdi
  _BYTE *v4; // rsi
  signed __int32 v5; // ebp
  __int64 v6; // rcx
  void *DeferredCriticalSectionEvent; // r10
  int v9; // eax
  signed __int32 v10[14]; // [rsp+0h] [rbp-38h] BYREF
  int v11; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    RtlpHpHeapUnlock(HeapHandle, 0LL);
  }
  else
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_180181298)();
    if ( !(unsigned __int8)RtlpCheckHeapSignature(HeapHandle, "RtlUnlockHeap") )
      return 0;
    if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
    {
      v2 = *((_QWORD *)HeapHandle + 44);
      --*((_WORD *)HeapHandle + 208);
      if ( (*(_DWORD *)(v2 + 12))-- == 1 )
      {
        *(_QWORD *)(v2 + 16) = 0LL;
        v4 = (_BYTE *)(v2 + 8);
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), -1, -2);
        if ( v5 != -2 )
        {
          if ( (*v4 & 1) != 0 )
            RtlpNotOwnerCriticalSection(v2);
          DeferredCriticalSectionEvent = *(void **)(v2 + 24);
          if ( !DeferredCriticalSectionEvent )
            DeferredCriticalSectionEvent = (void *)RtlpCreateDeferredCriticalSectionEvent(v2);
          v11 = 0;
          while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)v4, (v5 & 2 | 1) + v5, v5) )
          {
            RtlBackoff(&v11);
            _m_prefetchw(v4);
            v5 = *(_DWORD *)v4;
          }
          if ( (v5 & 2) != 0 )
          {
            if ( DeferredCriticalSectionEvent == (void *)-1LL )
            {
              _InterlockedOr(v10, 0);
              RtlpWakeByAddress(v2 + 8, 0LL);
            }
            else
            {
              v9 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
              if ( v9 < 0 )
                RtlRaiseStatus(v9);
            }
          }
        }
      }
    }
  }
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v6 = 2147353472LL;
  if ( *(_BYTE *)v6 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapUnlockEvent(HeapHandle);
  }
  return 1;
}
