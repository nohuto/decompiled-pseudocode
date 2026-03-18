/*
 * XREFs of MiReleaseOutSwappedProcessCommit @ 0x140581158
 * Callers:
 *     MmOutSwapProcess @ 0x140211108 (MmOutSwapProcess.c)
 * Callees:
 *     KeForceAttachProcess @ 0x1402393FC (KeForceAttachProcess.c)
 *     KeForceDetachProcess @ 0x140241980 (KeForceDetachProcess.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140281A58 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiUnlockVad @ 0x140281C44 (MiUnlockVad.c)
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     SmStoreExistsForProcess @ 0x1402A10EC (SmStoreExistsForProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiCheckCommitReleaseFromVad @ 0x14057FA8C (MiCheckCommitReleaseFromVad.c)
 *     MiIsVadEligibleForCommitRelease @ 0x140580028 (MiIsVadEligibleForCommitRelease.c)
 *     MiLogOutswappedProcessCommitRelease @ 0x1405801E4 (MiLogOutswappedProcessCommitRelease.c)
 *     SmQueryStoreCommitUsage @ 0x1405FAA30 (SmQueryStoreCommitUsage.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseOutSwappedProcessCommit(ULONG_PTR a1)
{
  _QWORD *SharedVm; // r13
  struct _KTHREAD *CurrentThread; // rbp
  _QWORD *Pool; // r15
  volatile LONG *v5; // rbx
  KIRQL v6; // al
  __int64 v7; // rdi
  __int64 v8; // rbx
  BOOL v9; // r12d
  unsigned __int64 v10; // r13
  _QWORD *v11; // rax
  _QWORD *i; // rdi
  __int64 v13; // rbx
  _QWORD **v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rdx
  volatile LONG *v18; // rbx
  KIRQL v19; // al
  int v20; // ecx
  char v21; // cl
  _QWORD *v22; // [rsp+70h] [rbp+8h]
  unsigned __int64 v23; // [rsp+78h] [rbp+10h] BYREF
  __int64 v24; // [rsp+80h] [rbp+18h]

  v23 = 0LL;
  KeForceAttachProcess(a1, 0LL);
  SharedVm = MiGetSharedVm(a1 + 1664);
  CurrentThread = KeGetCurrentThread();
  v22 = SharedVm;
  v24 = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 1838));
  Pool = MiAllocatePool(64, 0x38uLL, 0x7243694Du);
  if ( !Pool )
    goto LABEL_31;
  v5 = (volatile LONG *)MiGetSharedVm(a1 + 1664);
  v6 = ExAcquireSpinLockExclusive(v5);
  *((_DWORD *)v5 + 1) = 0;
  *(_BYTE *)(a1 + 1851) |= 0x60u;
  MiUnlockWorkingSetExclusive(a1 + 1664, v6);
  v7 = 1LL;
  if ( dword_140D05210 != 1 )
  {
    v8 = v24;
    v9 = 0;
    v10 = 0LL;
    if ( *(_DWORD *)(v24 + 1176) )
      v9 = SmStoreExistsForProcess();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a1 + 1224, 0LL);
    LOBYTE(CurrentThread[1].Queue) |= 1u;
    v11 = *(_QWORD **)(a1 + 2008);
    i = 0LL;
    while ( v11 )
    {
      i = v11;
      v11 = (_QWORD *)*v11;
    }
    while ( i )
    {
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)(i + 5), 0LL);
      LOBYTE(CurrentThread[1].Queue) |= 0x80u;
      if ( MiIsVadEligibleForCommitRelease((__int64)i) )
      {
        v13 = MiCheckCommitReleaseFromVad(v8, a1, a1 + 1664, (__int64)i, v9, Pool + 4);
        MiUnlockVad((__int64)CurrentThread, (__int64)i);
        v10 += v13;
        v8 = v24;
      }
      else
      {
        MiUnlockVad((__int64)CurrentThread, (__int64)i);
      }
      v14 = (_QWORD **)i[1];
      v15 = i;
      if ( v14 )
      {
        v16 = *v14;
        for ( i = (_QWORD *)i[1]; v16; v16 = (_QWORD *)*v16 )
          i = v16;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v15 )
            break;
          v15 = i;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
    v7 = v10;
    _InterlockedExchange64((volatile __int64 *)(a1 + 1872), 0LL);
    if ( v9 )
    {
      SmQueryStoreCommitUsage(a1, &v23);
      v17 = ((v23 & 0xFFF) != 0) + (v23 >> 12);
      v23 = v17;
      if ( v10 <= v17 )
      {
        v7 = 0LL;
LABEL_25:
        SharedVm = v22;
        goto LABEL_26;
      }
      v7 = v10 - v17;
    }
    if ( v7 )
      MiReturnCommit(v8, v7);
    goto LABEL_25;
  }
LABEL_26:
  v18 = (volatile LONG *)MiGetSharedVm(a1 + 1664);
  v19 = ExAcquireSpinLockExclusive(v18);
  *((_DWORD *)v18 + 1) = 0;
  v20 = *(_DWORD *)(a1 + 1848);
  if ( v7 )
  {
    SharedVm[4] = Pool;
    v21 = HIBYTE(v20) & 0x9F | 0x40;
    SharedVm[1] = v7;
    Pool = 0LL;
  }
  else
  {
    v21 = HIBYTE(v20) & 0x9F;
  }
  *(_BYTE *)(a1 + 1851) = v21;
  MiUnlockWorkingSetExclusive(a1 + 1664, v19);
  MiLogOutswappedProcessCommitRelease(a1, v7);
LABEL_31:
  KeForceDetachProcess(0LL, 0);
  if ( Pool )
    ExFreePoolWithTag(Pool, 0);
}
