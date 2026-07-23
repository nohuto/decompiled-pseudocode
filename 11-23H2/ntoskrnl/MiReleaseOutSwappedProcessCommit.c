/*
 * XREFs of MiReleaseOutSwappedProcessCommit @ 0x1406197C8
 * Callers:
 *     MmOutSwapProcess @ 0x14034D198 (MmOutSwapProcess.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140214D94 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockVad @ 0x140289F30 (MiUnlockVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     MiLockVad @ 0x14029CA60 (MiLockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14029CBDC (LOCK_ADDRESS_SPACE.c)
 *     MiReturnCommit @ 0x1402DC4E0 (MiReturnCommit.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     SmStoreExistsForProcess @ 0x140344D24 (SmStoreExistsForProcess.c)
 *     KeForceAttachProcess @ 0x1403536D8 (KeForceAttachProcess.c)
 *     KeForceDetachProcess @ 0x14035573C (KeForceDetachProcess.c)
 *     SmQueryStoreCommitUsage @ 0x1405CA0C0 (SmQueryStoreCommitUsage.c)
 *     MiCheckCommitReleaseFromVad @ 0x140618180 (MiCheckCommitReleaseFromVad.c)
 *     MiIsVadEligibleForCommitRelease @ 0x14061871C (MiIsVadEligibleForCommitRelease.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1406188D8 (MiLogOutswappedProcessCommitRelease.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseOutSwappedProcessCommit(struct _EPROCESS *a1)
{
  _QWORD *SharedVm; // r13
  struct _KTHREAD *CurrentThread; // r15
  _QWORD *Pool; // rbp
  volatile LONG *v5; // rbx
  KIRQL v6; // al
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rbx
  BOOL v11; // r12d
  unsigned __int64 v12; // r13
  _RTL_BALANCED_NODE *Root; // rax
  _QWORD *Children; // rdi
  __int64 v15; // rbx
  _QWORD **v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  unsigned __int64 v19; // rdx
  volatile LONG *v20; // rbx
  KIRQL v21; // al
  __int64 v22; // r8
  __int64 v23; // r9
  _MMSUPPORT_FLAGS Flags; // ecx
  unsigned __int8 v25; // cl
  _QWORD *v26; // [rsp+70h] [rbp+8h]
  unsigned __int64 v27; // [rsp+78h] [rbp+10h] BYREF
  __int64 v28; // [rsp+80h] [rbp+18h]

  v27 = 0LL;
  KeForceAttachProcess(&a1->Pcb, 0LL, 0);
  SharedVm = MiGetSharedVm((__int64)&a1->Vm);
  CurrentThread = KeGetCurrentThread();
  v26 = SharedVm;
  v28 = *(_QWORD *)(qword_140C673C8 + 8LL * a1->Vm.Instance.PartitionId);
  Pool = MiAllocatePool(64, 0x38uLL, 0x7243694Du);
  if ( !Pool )
    goto LABEL_31;
  v5 = (volatile LONG *)MiGetSharedVm((__int64)&a1->Vm);
  v6 = ExAcquireSpinLockExclusive(v5);
  *((_DWORD *)v5 + 1) = 0;
  a1->Vm.Instance.Flags.u2 |= 0x60u;
  MiUnlockWorkingSetExclusive((__int64)&a1->Vm, v6, v7, v8);
  v9 = 1LL;
  if ( dword_140D1D220 != 1 )
  {
    v10 = v28;
    v11 = 0;
    v12 = 0LL;
    if ( *(_DWORD *)(v28 + 1192) )
      v11 = SmStoreExistsForProcess((__int64)a1);
    LOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)a1);
    Root = a1->VadRoot.Root;
    Children = 0LL;
    while ( Root )
    {
      Children = Root->Children;
      Root = Root->Children[0];
    }
    while ( Children )
    {
      MiLockVad((__int64)CurrentThread, (__int64)Children);
      if ( MiIsVadEligibleForCommitRelease((__int64)Children) )
      {
        v15 = MiCheckCommitReleaseFromVad(v10, (__int64)a1, (__int64)&a1->Vm, (__int64)Children, v11, Pool + 4);
        MiUnlockVad((__int64)CurrentThread, (__int64)Children);
        v12 += v15;
        v10 = v28;
      }
      else
      {
        MiUnlockVad((__int64)CurrentThread, (__int64)Children);
      }
      v16 = (_QWORD **)Children[1];
      v17 = Children;
      if ( v16 )
      {
        v18 = *v16;
        for ( Children = (_QWORD *)Children[1]; v18; v18 = (_QWORD *)*v18 )
          Children = v18;
      }
      else
      {
        while ( 1 )
        {
          Children = (_QWORD *)(Children[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !Children || (_QWORD *)*Children == v17 )
            break;
          v17 = Children;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, (__int64)a1);
    v9 = v12;
    _InterlockedExchange64((volatile __int64 *)&a1->Vm.Shared.ResetPagesRepurposedCount, 0LL);
    if ( v11 )
    {
      SmQueryStoreCommitUsage(a1, &v27);
      v19 = ((v27 & 0xFFF) != 0) + (v27 >> 12);
      v27 = v19;
      if ( v12 <= v19 )
      {
        v9 = 0LL;
LABEL_25:
        SharedVm = v26;
        goto LABEL_26;
      }
      v9 = v12 - v19;
    }
    if ( v9 )
      MiReturnCommit(v10, v9);
    goto LABEL_25;
  }
LABEL_26:
  v20 = (volatile LONG *)MiGetSharedVm((__int64)&a1->Vm);
  v21 = ExAcquireSpinLockExclusive(v20);
  *((_DWORD *)v20 + 1) = 0;
  Flags = a1->Vm.Instance.Flags;
  if ( v9 )
  {
    SharedVm[4] = Pool;
    v25 = Flags.u2 & 0x9F | 0x40;
    SharedVm[1] = v9;
    Pool = 0LL;
  }
  else
  {
    v25 = Flags.u2 & 0x9F;
  }
  a1->Vm.Instance.Flags.u2 = v25;
  MiUnlockWorkingSetExclusive((__int64)&a1->Vm, v21, v22, v23);
  MiLogOutswappedProcessCommitRelease((__int64)a1, v9);
LABEL_31:
  KeForceDetachProcess(0LL);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
}
