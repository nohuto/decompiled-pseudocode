/*
 * XREFs of CmpDereferenceKeyControlBlockWithLock @ 0x1406FEA54
 * Callers:
 *     CmpDrainDelayDerefContext @ 0x140346C60 (CmpDrainDelayDerefContext.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406E93C0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpTransMgrFreeVolatileData @ 0x14071BC94 (CmpTransMgrFreeVolatileData.c)
 *     CmpDereferenceKeyControlBlock @ 0x14071BF40 (CmpDereferenceKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1407350A0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmpUnfreezeHive @ 0x140914CA4 (CmpUnfreezeHive.c)
 *     CmpCleanupDiscardReplacePost @ 0x14091CAC0 (CmpCleanupDiscardReplacePost.c)
 *     CmpCommitDiscardReplacePost @ 0x14091CBB0 (CmpCommitDiscardReplacePost.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x1409239EC (CmpLightWeightCommitRenameKeyUoW.c)
 *     CmpLightWeightPrepareRenameKeyUoW @ 0x140923ED0 (CmpLightWeightPrepareRenameKeyUoW.c)
 * Callees:
 *     CmpFreeKeyControlBlock @ 0x14069FA30 (CmpFreeKeyControlBlock.c)
 *     CmpDeleteHive @ 0x1406BBAD8 (CmpDeleteHive.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406CE3EC (CmpDoQueueLateUnloadWorker.c)
 *     CmpAddToDelayedClose @ 0x1406FEB88 (CmpAddToDelayedClose.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1407C09E0 (CmpCleanUpKcbCacheWithLock.c)
 */

void __fastcall CmpDereferenceKeyControlBlockWithLock(ULONG_PTR BugCheckParameter2, __int64 a2, char a3)
{
  __int64 v4; // rcx
  signed __int64 v5; // rax
  int v6; // r9d
  bool v7; // dl
  bool v8; // r8
  __int64 v9; // rdi
  struct _KTHREAD *CurrentThread; // rax

  v4 = *(_QWORD *)(BugCheckParameter2 + 32);
  v5 = _InterlockedDecrement64((volatile signed __int64 *)BugCheckParameter2);
  if ( v5 == 2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v4 + 2944) == 1 )
      CmpDoQueueLateUnloadWorker(v4);
  }
  else if ( !v5 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 )
    {
      v9 = *(_QWORD *)(BugCheckParameter2 + 32);
      CmpCleanUpKcbCacheWithLock(BugCheckParameter2);
      CurrentThread = KeGetCurrentThread();
      *(_DWORD *)(v9 + 160) |= 0x80u;
      *(_QWORD *)(v9 + 4176) = CurrentThread;
      *(_DWORD *)(v9 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 4236), 1u) & 0x7F) + 4240) = 31;
      if ( (*(_DWORD *)(v9 + 160) & 0x20) == 0
        && _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 4232), 0xFFFFFFFF) == 1 )
      {
        CmpDeleteHive((_QWORD *)v9);
      }
    }
    else
    {
      v6 = *(_DWORD *)(BugCheckParameter2 + 8);
      v7 = 0;
      if ( (v6 & 0x20000) == 0 )
        v7 = a3 == 0;
      v8 = 0;
      if ( (v6 & 0x20) == 0 )
        v8 = v7;
      if ( CmpHoldLazyFlush
        && (*(_WORD *)(BugCheckParameter2 + 186) & 0x10) == 0
        && (*(_BYTE *)(BugCheckParameter2 + 8) & 8) == 0
        || !v8 )
      {
        CmpCleanUpKcbCacheWithLock(BugCheckParameter2);
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
