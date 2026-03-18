/*
 * XREFs of CmpDoQueueLateUnloadWorker @ 0x1406CE3EC
 * Callers:
 *     CmReleaseLoadKeyContext @ 0x1406800D0 (CmReleaseLoadKeyContext.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1406FEA54 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDoFlushNextHive @ 0x1407174E0 (CmpDoFlushNextHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x14071BF40 (CmpDereferenceKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407350A0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1407C0C50 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1407C2680 (CmpDeleteKeyObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     CmpReferenceHive @ 0x14071BBD8 (CmpReferenceHive.c)
 */

__int64 __fastcall CmpDoQueueLateUnloadWorker(__int64 a1)
{
  volatile signed __int64 *v1; // rdi
  WORK_QUEUE_TYPE v4; // r8d

  v1 = (volatile signed __int64 *)(a1 + 1680);
  ExAcquirePushLockExclusiveEx(a1 + 1680, 0LL);
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 19;
  if ( **(_QWORD **)(a1 + 2936) == 2LL )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 20;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4800), 1, 0) )
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 21;
      CmpReferenceHive(a1);
      ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(a1 + 4816), v4);
    }
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
