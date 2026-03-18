/*
 * XREFs of MiReAcquireOutSwappedProcessCommit @ 0x140580DB8
 * Callers:
 *     KiInSwapProcesses @ 0x14021119C (KiInSwapProcesses.c)
 * Callees:
 *     KeForceAttachProcess @ 0x1402393FC (KeForceAttachProcess.c)
 *     KeForceDetachProcess @ 0x140241980 (KeForceDetachProcess.c)
 *     KeFreezeProcess @ 0x1402443D8 (KeFreezeProcess.c)
 *     MiBeginProcessClean @ 0x14025F344 (MiBeginProcessClean.c)
 *     MiGetSharedVm @ 0x140282AD0 (MiGetSharedVm.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeCommit @ 0x14032A4B0 (MiChargeCommit.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x140580088 (MiLogOutswappedProcessCommitReacquire.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReAcquireOutSwappedProcessCommit(unsigned __int16 *Object)
{
  _QWORD *SharedVm; // rax
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v4; // edi
  _QWORD *v5; // rbp
  int v6; // r15d
  int v7; // ebx
  volatile LONG *v8; // rbx
  KIRQL v9; // al
  _QWORD *v10; // rax
  volatile LONG *v11; // rbx
  KIRQL v12; // al
  struct _WORK_QUEUE_ITEM *v13; // rbx
  struct _KEVENT *Blink; // rcx

  KeForceAttachProcess((ULONG_PTR)Object, 0LL);
  SharedVm = MiGetSharedVm((__int64)(Object + 832));
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v5 = SharedVm;
  if ( dword_140D05210 != 1 )
  {
    if ( (*((_DWORD *)Object + 281) & 8) != 0 )
    {
      v7 = 1;
      v6 = 0;
    }
    else
    {
      v7 = 0;
      v6 = MiChargeCommit(*(_QWORD *)(qword_140C51F48 + 8LL * Object[919]), SharedVm[1], 1u);
      if ( v6 )
        goto LABEL_15;
    }
    MiLogOutswappedProcessCommitReacquire((__int64)Object, v5[1], 1, v7);
    _InterlockedOr((volatile signed __int32 *)Object + 543, 0x100u);
    v8 = (volatile LONG *)MiGetSharedVm((__int64)(Object + 832));
    v9 = ExAcquireSpinLockExclusive(v8);
    *((_DWORD *)v8 + 1) = 0;
    *((_BYTE *)Object + 1851) |= 0x60u;
    MiUnlockWorkingSetExclusive((__int64)(Object + 832), v9);
    MiBeginProcessClean((__int64)CurrentThread, (__int64)Object);
    KeFreezeProcess((__int64)Object, 0);
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v10 = (_QWORD *)v5[4];
    v10[2] = MiReAcquireCommitFailWorker;
    v10[3] = Object;
    *v10 = 0LL;
    goto LABEL_6;
  }
  v6 = 1;
LABEL_15:
  MiLogOutswappedProcessCommitReacquire((__int64)Object, v5[1], 0, 0);
LABEL_6:
  v11 = (volatile LONG *)MiGetSharedVm((__int64)(Object + 832));
  v12 = ExAcquireSpinLockExclusive(v11);
  *((_DWORD *)v11 + 1) = 0;
  if ( (*((_BYTE *)Object + 1851) & 0x60) == 0x40 )
    *((_BYTE *)Object + 1851) = *((_BYTE *)Object + 1851) & 0x9F | 0x20;
  v13 = (struct _WORK_QUEUE_ITEM *)v5[4];
  if ( v6 )
  {
    v5[1] = 0LL;
    v5[4] = 0LL;
  }
  MiUnlockWorkingSetExclusive((__int64)(Object + 832), v12);
  KeForceDetachProcess(0LL, 0);
  Blink = (struct _KEVENT *)v13[1].List.Blink;
  if ( Blink )
    KeSetEvent(Blink, 0, 0);
  if ( v6 )
  {
    ExFreePoolWithTag(v13, 0);
  }
  else
  {
    ExQueueWorkItem(v13, CriticalWorkQueue);
    return (unsigned int)-1073741523;
  }
  return v4;
}
