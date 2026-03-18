/*
 * XREFs of CmpBecomeActiveFlusherAndReconciler @ 0x14083D56C
 * Callers:
 *     CmShutdownSystem1 @ 0x14053EBD8 (CmShutdownSystem1.c)
 *     CmpLoadHiveThread @ 0x14083C870 (CmpLoadHiveThread.c)
 *     CmpRefreshHive @ 0x14090D9E8 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x14090DF50 (CmpSaveKeyByFileCopy.c)
 *     CmReplaceKey @ 0x1409136B4 (CmReplaceKey.c)
 * Callees:
 *     CmpIsWriteQueueActive @ 0x14020AA74 (CmpIsWriteQueueActive.c)
 *     CmpAcquireWriteQueue @ 0x14020AA84 (CmpAcquireWriteQueue.c)
 *     CmpLockRegistryFreezeAware @ 0x140689388 (CmpLockRegistryFreezeAware.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140919170 (CmpWaitOnHiveWriteQueue.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AB41E0 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140AB41FC (HvLockHiveFlusherExclusive.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpBecomeActiveFlusherAndReconciler(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9

  v2 = (_QWORD *)(a1 + 4208);
  while ( 1 )
  {
    CmpLockRegistryFreezeAware(0);
    HvLockHiveFlusherExclusive(a1);
    if ( !CmpIsWriteQueueActive(v2) && !CmpIsWriteQueueActive((_QWORD *)(a1 + 4192)) )
      break;
    CmpWaitOnHiveWriteQueue(a1);
  }
  CmpAcquireWriteQueue(v2);
  CmpAcquireWriteQueue((_QWORD *)(a1 + 4192));
  HvUnlockHiveFlusherExclusive(a1);
  return CmpUnlockRegistry(v4, v3, v5, v6);
}
