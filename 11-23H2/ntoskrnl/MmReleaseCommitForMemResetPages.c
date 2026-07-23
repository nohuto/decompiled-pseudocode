/*
 * XREFs of MmReleaseCommitForMemResetPages @ 0x140619D98
 * Callers:
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 * Callees:
 *     MiPrepareAttachThread @ 0x1402178B0 (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x140217924 (MiAttachThreadDone.c)
 *     KeWaitForSingleObject @ 0x140243DB0 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A580 (MiUnlockWorkingSetExclusive.c)
 *     KeForceAttachProcess @ 0x1403536D8 (KeForceAttachProcess.c)
 *     KeForceDetachProcess @ 0x14035573C (KeForceDetachProcess.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KeRetryOutswapProcess @ 0x14056FB00 (KeRetryOutswapProcess.c)
 */

__int64 __fastcall MmReleaseCommitForMemResetPages(_KPROCESS *BugCheckParameter1, int a2)
{
  __int64 v3; // rsi
  unsigned int v5; // edi
  _QWORD *SharedVm; // r13
  int v7; // r15d
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v12; // eax
  bool v13; // zf
  volatile LONG *v14; // rbx
  KIRQL v15; // cl
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 Object; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v20[2]; // [rsp+40h] [rbp-31h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-21h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v22; // [rsp+68h] [rbp-9h] BYREF

  Object = 393216LL;
  v20[1] = v20;
  v3 = (__int64)&BugCheckParameter1[1].ActiveProcessors.StaticBitmap[26];
  v20[0] = v20;
  memset(&v22, 0, sizeof(v22));
  v5 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedVm = MiGetSharedVm((__int64)&BugCheckParameter1[1].ActiveProcessors.StaticBitmap[26]);
  if ( (*(_BYTE *)(v3 + 187) & 0x60) == 0x40 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C697C0, &LockHandle);
    v7 = MiPrepareAttachThread((__int64)BugCheckParameter1, v3);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
        && CurrentIrql <= 0xFu
        && LockHandle.OldIrql <= 0xFu
        && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v13 = (v12 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v12;
        if ( v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    if ( v7 )
    {
      KeForceAttachProcess(BugCheckParameter1, &v22, 0);
      v14 = (volatile LONG *)MiGetSharedVm(v3);
      v15 = ExAcquireSpinLockExclusive(v14);
      *((_DWORD *)v14 + 1) = 0;
      if ( (*(_BYTE *)(v3 + 187) & 0x60) == 0x40 )
      {
        v16 = SharedVm[4];
        if ( !*(_QWORD *)(v16 + 40) )
        {
          *(_QWORD *)(v16 + 40) = &Object;
          *(_DWORD *)(v16 + 48) = *(_DWORD *)(v16 + 48) & 0xFFFFFFFE | (a2 != 0);
          MiUnlockWorkingSetExclusive(v3, v15, v16, v17);
          KeRetryOutswapProcess(&BugCheckParameter1->Header.Lock);
          KeForceDetachProcess(&v22);
          MiAttachThreadDone(v3);
          KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
          return v5;
        }
        v5 = -1073740682;
      }
      else
      {
        v5 = -1073741431;
      }
      if ( v15 != 17 )
        MiUnlockWorkingSetExclusive(v3, v15, v16, v17);
      KeForceDetachProcess(&v22);
      MiAttachThreadDone(v3);
    }
    else
    {
      return (unsigned int)-1073700861;
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v5;
}
