/*
 * XREFs of MiReAcquireOutSwappedProcessCommit @ 0x140619458
 * Callers:
 *     KiInSwapProcesses @ 0x14034D22C (KiInSwapProcesses.c)
 * Callees:
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     MiChargeCommit @ 0x140276750 (MiChargeCommit.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     MiBeginProcessClean @ 0x140342A90 (MiBeginProcessClean.c)
 *     KeForceAttachProcess @ 0x1403536D8 (KeForceAttachProcess.c)
 *     KeForceDetachProcess @ 0x14035573C (KeForceDetachProcess.c)
 *     KeFreezeProcess @ 0x14036F9F8 (KeFreezeProcess.c)
 *     MiLogOutswappedProcessCommitReacquire @ 0x14061877C (MiLogOutswappedProcessCommitReacquire.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiReAcquireOutSwappedProcessCommit(char *Object)
{
  char *v2; // rbp
  _QWORD *SharedVm; // rax
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v5; // edi
  _QWORD *v6; // r14
  int v7; // r15d
  int v8; // ebx
  __int64 v9; // rdx
  volatile LONG *v10; // rbx
  KIRQL v11; // al
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  volatile LONG *v15; // rbx
  KIRQL v16; // al
  __int64 v17; // r8
  __int64 v18; // r9
  struct _WORK_QUEUE_ITEM *v19; // rbx
  struct _KEVENT *Blink; // rcx

  KeForceAttachProcess((_KPROCESS *)Object, 0LL, 0);
  v2 = Object + 1664;
  SharedVm = MiGetSharedVm((__int64)(Object + 1664));
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v6 = SharedVm;
  if ( dword_140D1D220 == 1 )
  {
    v7 = 1;
    v8 = 0;
  }
  else if ( (*((_DWORD *)Object + 281) & 8) != 0 )
  {
    v8 = 1;
    v7 = 0;
  }
  else
  {
    v8 = 0;
    v7 = MiChargeCommit(*(_QWORD *)(qword_140C673C8 + 8LL * *((unsigned __int16 *)Object + 919)), SharedVm[1], 1uLL);
  }
  v9 = v6[1];
  if ( v7 )
  {
    MiLogOutswappedProcessCommitReacquire((__int64)Object, v9, 0, 0);
  }
  else
  {
    MiLogOutswappedProcessCommitReacquire((__int64)Object, v9, 1, v8);
    _InterlockedOr((volatile signed __int32 *)Object + 543, 0x100u);
    v10 = (volatile LONG *)MiGetSharedVm((__int64)(Object + 1664));
    v11 = ExAcquireSpinLockExclusive(v10);
    *((_DWORD *)v10 + 1) = 0;
    Object[1851] |= 0x60u;
    MiUnlockWorkingSetExclusive((__int64)(Object + 1664), v11, v12, v13);
    MiBeginProcessClean((__int64)CurrentThread, (__int64)Object);
    KeFreezeProcess((__int64)Object, 0);
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
    v14 = (_QWORD *)v6[4];
    v14[2] = MiReAcquireCommitFailWorker;
    v14[3] = Object;
    *v14 = 0LL;
  }
  v15 = (volatile LONG *)MiGetSharedVm((__int64)v2);
  v16 = ExAcquireSpinLockExclusive(v15);
  *((_DWORD *)v15 + 1) = 0;
  if ( (Object[1851] & 0x60) == 0x40 )
    Object[1851] = Object[1851] & 0x9F | 0x20;
  v19 = (struct _WORK_QUEUE_ITEM *)v6[4];
  if ( v7 )
  {
    v6[1] = 0LL;
    v6[4] = 0LL;
  }
  MiUnlockWorkingSetExclusive((__int64)v2, v16, v17, v18);
  KeForceDetachProcess(0LL);
  Blink = (struct _KEVENT *)v19[1].List.Blink;
  if ( Blink )
    KeSetEvent(Blink, 0, 0);
  if ( v7 )
  {
    ExFreePoolWithTag(v19, 0);
  }
  else
  {
    ExQueueWorkItem(v19, CriticalWorkQueue);
    return (unsigned int)-1073741523;
  }
  return v5;
}
