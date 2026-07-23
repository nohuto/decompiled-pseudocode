/*
 * XREFs of CmpCleanupTransactionState @ 0x14069831C
 * Callers:
 *     CmKtmNotification @ 0x140697D50 (CmKtmNotification.c)
 *     CmpRunDownCmRM @ 0x1406987D0 (CmpRunDownCmRM.c)
 *     CmObliterateRMTxArray @ 0x140A1C260 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x140A1C370 (CmpLazyCommitWorker.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x14020B8D0 (ObDereferenceObjectDeferDelete.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402391B0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D4E0 (ExReleaseResourceLite.c)
 *     ExReleaseFastMutexUnsafe @ 0x140302880 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1403028F0 (ExAcquireFastMutexUnsafe.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     CmpLogCheckpoint @ 0x1406989A4 (CmpLogCheckpoint.c)
 *     CmpTransDereferenceTransaction @ 0x140768C18 (CmpTransDereferenceTransaction.c)
 *     CmpTransMgrFreeVolatileData @ 0x140769104 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockRegistryExclusive @ 0x1407693DC (CmpLockRegistryExclusive.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     CmpDetachFromRegistryProcess @ 0x140AF5230 (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x140AF5250 (CmpAttachToRegistryProcess.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

void __fastcall CmpCleanupTransactionState(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v12; // rcx
  void **v13; // rax
  void *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct _KTHREAD *v19; // rax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _OWORD v26[3]; // [rsp+20h] [rbp-58h] BYREF

  memset(v26, 0, sizeof(v26));
  CmpAttachToRegistryProcess(v26);
  CmpLockRegistryExclusive();
  CmpTransMgrFreeVolatileData((ULONG_PTR)a2);
  CmpUnlockRegistry(v8, v7, v9, v10, *(_QWORD *)&v26[0], *((_QWORD *)&v26[0] + 1));
  CmpDetachFromRegistryProcess(v26);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
  v12 = (_QWORD *)*a2;
  if ( *(_QWORD **)(*a2 + 8LL) != a2 || (v13 = (void **)a2[1], *v13 != a2) )
    __fastfail(3u);
  *v13 = v12;
  v12[1] = v13;
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  *((_DWORD *)a2 + 12) |= 0x10u;
  if ( a2[7] )
    CmpTransDereferenceTransaction(a2[7]);
  v14 = (void *)a2[9];
  if ( v14 )
    ObDereferenceObjectDeferDelete(v14);
  ExFreePoolWithTag(a2, 0x72544D43u);
  if ( a4 )
  {
    CmpLockRegistry(v16, v15, v17, v18);
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
    LOBYTE(v20) = 1;
    CmpLogCheckpoint(a1, v21, v20);
    ExReleaseResourceLite(*(PERESOURCE *)(a1 + 128));
    KeLeaveCriticalRegion();
    CmpUnlockRegistry(v23, v22, v24, v25, *(_QWORD *)&v26[0], *((_QWORD *)&v26[0] + 1));
  }
}
