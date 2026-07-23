/*
 * XREFs of RtlUnlockHeap @ 0x180015C80
 * Callers:
 *     RtlExitUserProcess @ 0x180054350 (RtlExitUserProcess.c)
 *     RtlUnlockProcessHeapOnProcessTerminate @ 0x180054A50 (RtlUnlockProcessHeapOnProcessTerminate.c)
 *     RtlValidateHeap @ 0x18007BE40 (RtlValidateHeap.c)
 *     RtlpQueryExtendedHeapInformation @ 0x18007D9C8 (RtlpQueryExtendedHeapInformation.c)
 *     RtlpLockUlockAllHeapsCallback @ 0x180089680 (RtlpLockUlockAllHeapsCallback.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180116020 (RtlpHpStackTraceHeapSerialize.c)
 * Callees:
 *     RtlpHpHeapUnlock @ 0x180015AEC (RtlpHpHeapUnlock.c)
 *     RtlpCheckHeapSignature @ 0x180015DC8 (RtlpCheckHeapSignature.c)
 *     RtlBackoff @ 0x18001B8D8 (RtlBackoff.c)
 *     RtlpWakeByAddress @ 0x18005B0C4 (RtlpWakeByAddress.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180088690 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlRaiseStatus @ 0x18008FDF0 (RtlRaiseStatus.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800F3C10 (RtlpNotOwnerCriticalSection.c)
 *     RtlpLogHeapUnlockEvent @ 0x18011756C (RtlpLogHeapUnlockEvent.c)
 */

BOOLEAN __cdecl RtlUnlockHeap(PVOID HeapHandle)
{
  __int64 v2; // rdi
  _BYTE *v4; // rsi
  signed __int32 v5; // ebp
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  void *DeferredCriticalSectionEvent; // r10
  int v10; // eax
  signed __int32 v11[14]; // [rsp+0h] [rbp-38h] BYREF
  int v12; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    RtlpHpHeapUnlock((__int64)HeapHandle, 0);
  }
  else
  {
    if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) != 0 )
      return ((__int64 (*)(void))qword_180174298)();
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
          v12 = 0;
          while ( v5 != _InterlockedCompareExchange((volatile signed __int32 *)v4, (v5 & 2 | 1) + v5, v5) )
          {
            RtlBackoff(&v12);
            _m_prefetchw(v4);
            v5 = *(_DWORD *)v4;
          }
          if ( (v5 & 2) != 0 )
          {
            if ( DeferredCriticalSectionEvent == (void *)-1LL )
            {
              _InterlockedOr(v11, 0);
              RtlpWakeByAddress(v2 + 8, 0LL);
            }
            else
            {
              v10 = ZwSetEvent(DeferredCriticalSectionEvent, 0LL);
              if ( v10 < 0 )
                RtlRaiseStatus(v10);
            }
          }
        }
      }
    }
  }
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 550;
  else
    v7 = 2147353472LL;
  if ( *(_BYTE *)v7 )
  {
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
      RtlpLogHeapUnlockEvent(HeapHandle);
  }
  return 1;
}
