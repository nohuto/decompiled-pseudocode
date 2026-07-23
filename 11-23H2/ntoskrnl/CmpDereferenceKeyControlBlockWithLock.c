/*
 * XREFs of CmpDereferenceKeyControlBlockWithLock @ 0x14073E698
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x14022D600 (CmpDrainDelayDerefContext.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7EC0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpTransMgrFreeVolatileData @ 0x140769104 (CmpTransMgrFreeVolatileData.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076AD00 (CmpDereferenceKeyControlBlock.c)
 *     CmRenameKey @ 0x140A1465C (CmRenameKey.c)
 *     CmpUnfreezeHive @ 0x140A17058 (CmpUnfreezeHive.c)
 *     CmpCleanupDiscardReplacePost @ 0x140A1FAC0 (CmpCleanupDiscardReplacePost.c)
 *     CmpCommitDiscardReplacePost @ 0x140A1FBB0 (CmpCommitDiscardReplacePost.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A1FD6C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140A28788 (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140A29650 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpFreeKeyControlBlock @ 0x140699D40 (CmpFreeKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1406D8540 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpAddToDelayedClose @ 0x14073E7B8 (CmpAddToDelayedClose.c)
 *     CmpDeleteHive @ 0x14074E8C4 (CmpDeleteHive.c)
 *     CmpDoQueueLateUnloadWorker @ 0x140751F24 (CmpDoQueueLateUnloadWorker.c)
 */

void __fastcall CmpDereferenceKeyControlBlockWithLock(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v5; // rcx
  signed __int64 v6; // rax
  int v7; // r9d
  bool v8; // dl
  bool v9; // r8
  __int64 v10; // rdi
  struct _KTHREAD *CurrentThread; // rax

  v5 = *(_QWORD *)(BugCheckParameter2 + 32);
  v6 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( v6 == 2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v5 + 2944) == 1 )
      CmpDoQueueLateUnloadWorker(v5);
  }
  else if ( !v6 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 )
    {
      v10 = *(_QWORD *)(BugCheckParameter2 + 32);
      CmpCleanUpKcbCacheWithLock(BugCheckParameter2, a2);
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)(v10 + 160) |= 0x80u;
      *(_QWORD *)(v10 + 4176) = CurrentThread;
      *(_DWORD *)(v10 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 4236), 1u) & 0x7F) + 4240) = 31;
      if ( (*(_DWORD *)(v10 + 160) & 0x20) == 0
        && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 4232), 0xFFFFFFFF) == 1 )
      {
        CmpDeleteHive((PVOID)v10);
      }
    }
    else
    {
      v7 = *(_DWORD *)(BugCheckParameter2 + 8);
      v8 = 0;
      if ( (v7 & 0x20000) == 0 )
        v8 = a3 == 0;
      v9 = 0;
      if ( (v7 & 0x20) == 0 )
        v9 = v8;
      if ( CmpHoldLazyFlush
        && (*(_WORD *)(BugCheckParameter2 + 186) & 0x10) == 0
        && (*(_BYTE *)(BugCheckParameter2 + 8) & 8) == 0
        || !v9 )
      {
        CmpCleanUpKcbCacheWithLock(BugCheckParameter2, a2);
        if ( *(struct _KTHREAD **)(BugCheckParameter2 + 56) != KeGetCurrentThread()
          && (*(_DWORD *)(BugCheckParameter2 + 8) & 0x80000) != 0 )
        {
          CmpFreeKeyControlBlock(BugCheckParameter2);
        }
      }
      else
      {
        CmpAddToDelayedClose(BugCheckParameter2);
      }
    }
  }
}
