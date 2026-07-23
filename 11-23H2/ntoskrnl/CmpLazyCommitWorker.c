/*
 * XREFs of CmpLazyCommitWorker @ 0x140A1C370
 * Callers:
 *     <none>
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E750 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14022E790 (CmCleanupThreadInfo.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     KiSetTimerEx @ 0x1402528E0 (KiSetTimerEx.c)
 *     ExReleaseFastMutexUnsafe @ 0x140302880 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     CmpCleanupTransactionState @ 0x14069831C (CmpCleanupTransactionState.c)
 *     UNLOCK_HIVE_LOAD @ 0x140752020 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140752098 (LOCK_HIVE_LOAD.c)
 *     CmpTransMgrCommit @ 0x140768E58 (CmpTransMgrCommit.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140AF5008 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140AF502C (CmpAcquireHiveLoadUnloadRundown.c)
 */

__int64 CmpLazyCommitWorker()
{
  char v0; // di
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 **v5; // rax
  struct _KTHREAD *v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rcx
  _QWORD **v11; // [rsp+30h] [rbp-20h] BYREF
  __int64 *v12; // [rsp+38h] [rbp-18h]
  __int128 v13; // [rsp+40h] [rbp-10h] BYREF
  int v14; // [rsp+78h] [rbp+28h] BYREF

  v14 = 0;
  v0 = 1;
  v13 = 0LL;
  CmpInitializeThreadInfo((__int64)&v13);
  v11 = &v11;
  v12 = (__int64 *)&v11;
  if ( (unsigned __int8)CmpAcquireHiveLoadUnloadRundown() )
  {
    LOCK_HIVE_LOAD();
    while ( 1 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      v2 = (__int64 *)CmpLazyCommitListHead;
      if ( *(__int64 **)(CmpLazyCommitListHead + 8) != &CmpLazyCommitListHead
        || (v3 = *(_QWORD *)CmpLazyCommitListHead,
            *(_QWORD *)(*(_QWORD *)CmpLazyCommitListHead + 8LL) != CmpLazyCommitListHead) )
      {
LABEL_20:
        __fastfail(3u);
      }
      CmpLazyCommitListHead = *(_QWORD *)CmpLazyCommitListHead;
      *(_QWORD *)(v3 + 8) = &CmpLazyCommitListHead;
      if ( v2 == &CmpLazyCommitListHead )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegion();
      if ( (int)CmpTransMgrCommit(v4, (__int64)(v2 - 4), &v14) < 0 )
      {
        v5 = (__int64 **)v12;
        if ( (_QWORD ***)*v12 != &v11 )
          goto LABEL_20;
        v2[1] = (__int64)v12;
        *v2 = (__int64)&v11;
        v0 = 0;
        *v5 = v2;
        v12 = v2;
      }
      else
      {
        CmpCleanupTransactionState(v2[4], v2 - 4, 4LL, 0);
      }
    }
    CmpLazyCommitWorkItemActive = v0 == 0;
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
    if ( !v0 )
    {
      v6 = KeGetCurrentThread();
      --v6->KernelApcDisable;
      ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
      while ( 1 )
      {
        v7 = v11;
        if ( v11[1] != &v11 )
          goto LABEL_20;
        v8 = (__int64)*v11;
        if ( (_QWORD **)(*v11)[1] != v11 )
          goto LABEL_20;
        v11 = (_QWORD **)*v11;
        *(_QWORD *)(v8 + 8) = &v11;
        if ( v7 == &v11 )
          break;
        v9 = (_QWORD *)qword_140C13BB8;
        if ( *(__int64 **)qword_140C13BB8 != &CmpLazyCommitListHead )
          goto LABEL_20;
        *v7 = &CmpLazyCommitListHead;
        v7[1] = v9;
        *v9 = v7;
        qword_140C13BB8 = (__int64)v7;
      }
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegion();
      KiSetTimerEx((__int64)&CmpLazyCommitTimer, -300000000LL, 0, 0, (__int64)&CmpLazyCommitDpc);
    }
    UNLOCK_HIVE_LOAD();
    CmpReleaseHiveLoadUnloadRundown();
  }
  return CmCleanupThreadInfo((__int64 *)&v13);
}
