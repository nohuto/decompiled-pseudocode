/*
 * XREFs of CmpFinishBeingActiveFlusherAndReconciler @ 0x14083D1A4
 * Callers:
 *     CmShutdownSystem1 @ 0x14053EBD8 (CmShutdownSystem1.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 *     CmpRefreshHive @ 0x14090D9E8 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x14090DF50 (CmpSaveKeyByFileCopy.c)
 *     CmReplaceKey @ 0x1409136B4 (CmReplaceKey.c)
 * Callees:
 *     CmpWakeWriteQueueWaiters @ 0x140689034 (CmpWakeWriteQueueWaiters.c)
 *     CmpReleaseWriteQueue @ 0x140689074 (CmpReleaseWriteQueue.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AB41FC (HvLockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 */

__int64 __fastcall CmpFinishBeingActiveFlusherAndReconciler(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  struct _KEVENT *v5; // rbx
  __int64 v6; // rcx
  struct _KEVENT *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  CmpLockRegistry(a1, a2, a3);
  HvLockHiveFlusherExclusive(a1);
  v5 = (struct _KEVENT *)CmpReleaseWriteQueue(v4, (_QWORD *)(a1 + 4192));
  v7 = (struct _KEVENT *)CmpReleaseWriteQueue(v6, (_QWORD *)(a1 + 4208));
  HvUnlockHiveFlusherExclusive(a1);
  CmpUnlockRegistry(v9, v8, v10, v11);
  CmpWakeWriteQueueWaiters(a1 + 4192, v5, -1073741823);
  return CmpWakeWriteQueueWaiters(a1 + 4208, v7, -1073741823);
}
