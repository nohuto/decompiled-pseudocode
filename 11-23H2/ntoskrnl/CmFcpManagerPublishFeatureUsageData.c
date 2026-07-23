/*
 * XREFs of CmFcpManagerPublishFeatureUsageData @ 0x14067FF3C
 * Callers:
 *     CmFcManagerPublishAllFeatureUsageData @ 0x14067F778 (CmFcManagerPublishAllFeatureUsageData.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x14067FD84 (CmFcpManagerProcessUsageDataProviders.c)
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1406802F8 (CmFcpManagerPublishFeatureUsageDataIfNearCapacity.c)
 *     CmFcManagerStartRuntimePhase @ 0x140B37FF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     CmpWorkItemQueueWork @ 0x14037473C (CmpWorkItemQueueWork.c)
 *     RtlpFcInitializeDelayedFeatureUsageDataBuffer @ 0x14041202C (RtlpFcInitializeDelayedFeatureUsageDataBuffer.c)
 *     RtlpFcSizeOfFeatureUsageDataBuffer @ 0x140412098 (RtlpFcSizeOfFeatureUsageDataBuffer.c)
 *     CmFcpManagerAddBufferIntoPublishListAndSetPublishState @ 0x14067FB54 (CmFcpManagerAddBufferIntoPublishListAndSetPublishState.c)
 *     RtlUpdateSwapReference @ 0x14080E3A8 (RtlUpdateSwapReference.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

void __fastcall CmFcpManagerPublishFeatureUsageData(__int64 a1, char a2)
{
  char v3; // bp
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r12
  unsigned int v11; // edx
  unsigned int v12; // r13d
  _DWORD *Pool2; // rax
  _DWORD *v14; // r15
  size_t v15; // [rsp+50h] [rbp+8h]

  v3 = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1744), 2, 0) == 1 )
  {
    if ( !a2 )
    {
      CurrentThread = KeGetCurrentThread();
      v5 = (unsigned __int64 *)(a1 + 1352);
      --CurrentThread->KernelApcDisable;
      v6 = KeAbPreAcquire(a1 + 1352, 0LL);
      v7 = v6;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
        ExfAcquirePushLockExclusiveEx(v5, v6, (__int64)v5);
      if ( v7 )
        *(_BYTE *)(v7 + 18) = 1;
      v3 = 1;
    }
    v8 = *(_QWORD *)(a1 + 872) & 1LL;
    v9 = *(_QWORD *)(a1 + 8 * v8 + 1272);
    if ( *(_BYTE *)(a1 + 1736) )
    {
      if ( *(_DWORD *)(v9 + 16) )
      {
        v10 = ((_BYTE)v8 - 1) & 1;
        v11 = (*(_DWORD *)(a1 + 1288) + 511 + *(_DWORD *)(v9 + 20)) & 0xFFFFFE00;
        *(_DWORD *)(a1 + 1288) = v11;
        v12 = v11 + 508;
        v15 = RtlpFcSizeOfFeatureUsageDataBuffer(v11 + 508);
        Pool2 = (_DWORD *)ExAllocatePool2(64LL, v15, 1665559875LL);
        v14 = Pool2;
        if ( Pool2 )
        {
          RtlpFcInitializeDelayedFeatureUsageDataBuffer(Pool2, v15);
          v14[7] = v12;
          *(_QWORD *)(a1 + 8 * v10 + 1272) = v14;
          RtlUpdateSwapReference(a1 + 872, (unsigned int)v10);
          if ( CmFcpManagerAddBufferIntoPublishListAndSetPublishState(a1, v9) )
            CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(a1 + 1568));
        }
      }
    }
    else
    {
      *(_DWORD *)(v9 + 16) = 0;
    }
    if ( v3 == 1 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1352));
      KeAbPostRelease(a1 + 1352);
      KeLeaveCriticalRegion();
    }
  }
}
