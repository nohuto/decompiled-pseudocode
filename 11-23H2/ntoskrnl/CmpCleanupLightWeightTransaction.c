/*
 * XREFs of CmpCleanupLightWeightTransaction @ 0x1407D0C84
 * Callers:
 *     CmpAbortLightWeightTransaction @ 0x1407D0B68 (CmpAbortLightWeightTransaction.c)
 *     CmpCommitLightWeightTransaction @ 0x140A1C71C (CmpCommitLightWeightTransaction.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140302880 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpTransDereferenceTransaction @ 0x140768C18 (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x140769104 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

void __fastcall CmpCleanupLightWeightTransaction(_QWORD *BugCheckParameter2, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _OWORD v11[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v11, 0, sizeof(v11));
  CmpAttachToRegistryProcess(v11);
  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((ULONG_PTR)BugCheckParameter2, a2);
  CmpUnlockRegistry(v5, v4, v6, v7);
  CmpDetachFromRegistryProcess(v11);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v9 = *BugCheckParameter2;
  if ( *(_QWORD **)(*BugCheckParameter2 + 8LL) != BugCheckParameter2
    || (v10 = (_QWORD *)BugCheckParameter2[1], (_QWORD *)*v10 != BugCheckParameter2) )
  {
    __fastfail(3u);
  }
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  if ( BugCheckParameter2[7] )
    CmpTransDereferenceTransaction(BugCheckParameter2[7]);
}
