/*
 * XREFs of CmFcpManagerProcessUsageDataProviders @ 0x14067FD84
 * Callers:
 *     CmFcpManagerFlushFeatureUsageDataWorker @ 0x14067FC50 (CmFcpManagerFlushFeatureUsageDataWorker.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FD2D0 (ExfAcquirePushLockSharedEx.c)
 *     ExBlockOnAddressPushLock @ 0x140348930 (ExBlockOnAddressPushLock.c)
 *     CmpWorkItemQueueWork @ 0x14037473C (CmpWorkItemQueueWork.c)
 *     ExfUnblockPushLock @ 0x1404124A0 (ExfUnblockPushLock.c)
 *     CmFcpManagerPublishFeatureUsageData @ 0x14067FF3C (CmFcpManagerPublishFeatureUsageData.c)
 */

__int64 __fastcall CmFcpManagerProcessUsageDataProviders(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v2; // rbx
  char v4; // r12
  unsigned __int64 v5; // rsi
  signed __int32 v6; // eax
  unsigned int v7; // ecx
  volatile signed __int32 *v8; // r14
  __int64 *i; // rsi
  int v10; // eax
  bool v11; // zf
  signed __int32 v13[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+70h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = (signed __int64 *)(a1 + 896);
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire(a1 + 896, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0LL, v5, (__int64)v2);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  _m_prefetchw((const void *)(a1 + 1696));
  do
  {
    v6 = *(_DWORD *)(a1 + 1696);
    v7 = v6;
    if ( (v6 & 0x10) != 0 )
    {
      v7 = *(_DWORD *)(a1 + 1696) & 6 | ((*(_DWORD *)(a1 + 1696) & 0xFFFFFFE0) + 32);
      v4 = 0;
    }
    else if ( (v6 & 8) != 0 )
    {
      v7 = v6 & 0xFFFFFFF7;
      v4 = 1;
    }
  }
  while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1696), v7, v6) );
  if ( v4 || (v7 & 0x20) != 0 )
  {
    v8 = (volatile signed __int32 *)(a1 + 1740);
    *(_DWORD *)(a1 + 1740) = 0;
    for ( i = *(__int64 **)(a1 + 1296); i != (__int64 *)(a1 + 1296); i = (__int64 *)*i )
    {
      v10 = *((_DWORD *)i + 26);
      if ( v4 )
        v11 = (v10 & 2) == 0;
      else
        v11 = (v10 & 1) == 0;
      if ( !v11 )
      {
        _InterlockedExchangeAdd(v8, 1u);
        CmpWorkItemQueueWork((PWORK_QUEUE_ITEM)(i + 2));
      }
    }
    if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    KeLeaveCriticalRegion();
    while ( 1 )
    {
      LODWORD(v14) = *v8;
      if ( !(_DWORD)v14 )
        break;
      ExBlockOnAddressPushLock((volatile __int64 *)(a1 + 1328), (_QWORD *)(a1 + 1740), &v14, 4uLL, 0LL);
    }
    if ( !v4 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 1696), 0x20u);
    _InterlockedOr(v13, 0);
    if ( *(_QWORD *)(a1 + 1336) )
      ExfUnblockPushLock((volatile __int64 *)(a1 + 1336), 0LL);
  }
  else
  {
    if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    KeLeaveCriticalRegion();
  }
  return CmFcpManagerPublishFeatureUsageData(a1, 0LL);
}
