/*
 * XREFs of CmpDoQueueLateUnloadWorker @ 0x140751F24
 * Callers:
 *     CmReleaseLoadKeyContext @ 0x140692BE4 (CmReleaseLoadKeyContext.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1406D86D0 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1406DB370 (CmpDeleteKeyObject.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7EC0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E9130 (CmpDoParseKey.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x14073E698 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpDoFlushNextHive @ 0x140752110 (CmpDoFlushNextHive.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076AD00 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230FD0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD0A0 (ExfAcquirePushLockExclusiveEx.c)
 *     CmpReferenceHive @ 0x14076A77C (CmpReferenceHive.c)
 */

signed __int32 __fastcall CmpDoQueueLateUnloadWorker(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  __int64 v3; // rax
  __int64 v4; // rsi
  WORK_QUEUE_TYPE v6; // r8d

  v1 = (unsigned __int64 *)(a1 + 1680);
  v3 = KeAbPreAcquire(a1 + 1680, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (__int64)v1);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 19;
  if ( **(_QWORD **)(a1 + 2936) == 2LL )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 20;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4800), 1, 0) )
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4236), 1u) & 0x7F) + 4240) = 21;
      CmpReferenceHive(a1);
      ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(a1 + 4816), v6);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
