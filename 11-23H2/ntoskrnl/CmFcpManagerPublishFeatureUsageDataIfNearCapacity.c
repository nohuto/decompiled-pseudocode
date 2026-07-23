/*
 * XREFs of CmFcpManagerPublishFeatureUsageDataIfNearCapacity @ 0x1406802F8
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker @ 0x140680460 (CmFcpManagerPublishFeatureUsageDataIfNearCapacityWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     KeAbPostReleaseEx @ 0x1402BD780 (KeAbPostReleaseEx.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     RtlReleaseSwapReference @ 0x14035D3E4 (RtlReleaseSwapReference.c)
 *     RtlAcquireSwapReference @ 0x14035D48C (RtlAcquireSwapReference.c)
 *     CmFcpManagerFeatureUsageBufferNearCapacityThreshold @ 0x14041A0DC (CmFcpManagerFeatureUsageBufferNearCapacityThreshold.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x14067FF3C (CmFcpManagerPublishFeatureUsageData.c)
 */

void __fastcall CmFcpManagerPublishFeatureUsageDataIfNearCapacity(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v2; // r14
  __int64 v4; // rdi
  char v5; // si
  char i; // r15
  unsigned int v7; // eax
  unsigned int v8; // edx
  ULONG_PTR v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi

  CurrentThread = KeGetCurrentThread();
  v2 = (volatile signed __int64 *)(a1 + 872);
  --CurrentThread->KernelApcDisable;
  LODWORD(v4) = RtlAcquireSwapReference((__int64 *)(a1 + 872));
  v5 = 0;
  for ( i = 1; ; i = 0 )
  {
    v7 = CmFcpManagerFeatureUsageBufferNearCapacityThreshold(*(_DWORD *)(*(_QWORD *)(a1 + 8LL * (unsigned int)v4 + 1272)
                                                                       + 28LL));
    if ( v8 < v7 )
      break;
    if ( v5 )
      goto LABEL_14;
    v9 = KeAbPreAcquire(a1 + 1352, 0LL);
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 1352), 0LL) )
    {
      if ( v9 )
        *(_BYTE *)(v9 + 18) = 1;
LABEL_14:
      if ( i )
        RtlReleaseSwapReference(v2, v4);
      CmFcpManagerPublishFeatureUsageData(a1, 1);
LABEL_20:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1352));
      KeAbPostRelease(a1 + 1352);
      goto LABEL_23;
    }
    if ( v9 )
      KeAbPostReleaseEx(a1 + 1352, v9);
    RtlReleaseSwapReference(v2, v4);
    v10 = KeAbPreAcquire(a1 + 1352, 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 1352), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1352), v10, a1 + 1352);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
    v5 = 1;
    v4 = *v2 & 1;
  }
  if ( i )
    RtlReleaseSwapReference(v2, v4);
  if ( v5 )
    goto LABEL_20;
LABEL_23:
  KeLeaveCriticalRegion();
}
