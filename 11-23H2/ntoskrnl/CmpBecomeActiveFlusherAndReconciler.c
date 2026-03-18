/*
 * XREFs of CmpBecomeActiveFlusherAndReconciler @ 0x1408271A4
 * Callers:
 *     CmShutdownSystem1 @ 0x140615BC4 (CmShutdownSystem1.c)
 *     CmpLoadHiveThread @ 0x140826880 (CmpLoadHiveThread.c)
 *     CmpRefreshHive @ 0x140A0C890 (CmpRefreshHive.c)
 *     CmpSaveKeyByFileCopy @ 0x140A0CE80 (CmpSaveKeyByFileCopy.c)
 *     CmReplaceKey @ 0x140A156F4 (CmReplaceKey.c)
 * Callees:
 *     CmpAcquireWriteQueue @ 0x1402F6914 (CmpAcquireWriteQueue.c)
 *     CmpIsWriteQueueActive @ 0x1402F6BD4 (CmpIsWriteQueueActive.c)
 *     CmpLockRegistryFreezeAware @ 0x1407537E8 (CmpLockRegistryFreezeAware.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1408604D8 (CmpWaitOnHiveWriteQueue.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 *     HvLockHiveFlusherExclusive @ 0x140AF5670 (HvLockHiveFlusherExclusive.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140AF568C (HvUnlockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpBecomeActiveFlusherAndReconciler(__int64 a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  _QWORD *v8; // rdx

  v2 = (_QWORD *)(a1 + 4208);
  while ( 1 )
  {
    CmpLockRegistryFreezeAware(0);
    HvLockHiveFlusherExclusive(a1);
    if ( CmpIsWriteQueueActive(v2) )
    {
      v8 = v2;
      goto LABEL_7;
    }
    if ( !CmpIsWriteQueueActive((_QWORD *)(a1 + 4192)) )
      break;
    v8 = (_QWORD *)(a1 + 4192);
LABEL_7:
    CmpWaitOnHiveWriteQueue(a1, v8);
  }
  CmpAcquireWriteQueue(v2);
  CmpAcquireWriteQueue((_QWORD *)(a1 + 4192));
  HvUnlockHiveFlusherExclusive(a1);
  return CmpUnlockRegistry(v4, v3, v5, v6);
}
