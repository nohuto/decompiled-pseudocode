/*
 * XREFs of MmQueryCommitReleaseState @ 0x140366AC8
 * Callers:
 *     NtQueryInformationProcess @ 0x1406FCCA0 (NtQueryInformationProcess.c)
 * Callees:
 *     MiPrepareAttachThread @ 0x1402178B0 (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x140217924 (MiAttachThreadDone.c)
 *     MiUnlockWorkingSetShared @ 0x14023C5D0 (MiUnlockWorkingSetShared.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLockWorkingSetShared @ 0x140283F20 (MiLockWorkingSetShared.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     KeForceAttachProcess @ 0x1403536D8 (KeForceAttachProcess.c)
 *     KeForceDetachProcess @ 0x14035573C (KeForceDetachProcess.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MmQueryCommitReleaseState(_KPROCESS *a1, _DWORD *a2, _QWORD *a3, _QWORD *a4, _QWORD *a5)
{
  __int64 v5; // rsi
  _QWORD *SharedVm; // rax
  _DWORD *v8; // rdx
  _QWORD *v9; // r8
  _QWORD *v10; // r9
  _QWORD *v11; // r10
  int v12; // ecx
  int v13; // ebx
  _QWORD *v14; // r15
  __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // r13
  char v18; // cl
  unsigned __int64 OldIrql; // r14
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  int v27; // [rsp+20h] [rbp-71h]
  int v28; // [rsp+24h] [rbp-6Dh]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-41h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v34; // [rsp+68h] [rbp-29h] BYREF

  v5 = (__int64)&a1[1].ActiveProcessors.StaticBitmap[26];
  memset(&v34, 0, sizeof(v34));
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedVm = MiGetSharedVm((__int64)&a1[1].ActiveProcessors.StaticBitmap[26]);
  v12 = *(_DWORD *)(v5 + 184);
  v13 = 0;
  v14 = SharedVm;
  HIBYTE(v27) = HIBYTE(v12);
  v15 = 0LL;
  v16 = SharedVm[1];
  v17 = 0LL;
  if ( dword_140D1D220 == 1 )
  {
    v18 = HIBYTE(v12);
    v16 = 0LL;
  }
  else
  {
    if ( (HIBYTE(v12) & 0x60) == 0x40 )
    {
      KeAcquireInStackQueuedSpinLock(&qword_140C697C0, &LockHandle);
      v28 = MiPrepareAttachThread((__int64)a1, v5);
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
          v23 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v24 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v24 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(OldIrql);
      if ( v28 )
      {
        KeForceAttachProcess(a1, &v34, 0);
        v25 = MiLockWorkingSetShared(v5);
        v27 = *(_DWORD *)(v5 + 184);
        if ( (HIBYTE(v27) & 0x60) == 0x40 )
        {
          v17 = v14[2];
          v15 = *(_QWORD *)(v14[4] + 32LL);
        }
        MiUnlockWorkingSetShared(v5, v25);
        KeForceDetachProcess(&v34);
        MiAttachThreadDone(v5);
      }
      v11 = a5;
      v10 = a4;
      v9 = a3;
      v8 = a2;
    }
    v18 = HIBYTE(v27);
    LOBYTE(SharedVm) = HIBYTE(v27) & 0x60;
    if ( (HIBYTE(v27) & 0x60u) < 0x40 )
      v16 = 0LL;
  }
  LOBYTE(v13) = (v18 & 0x60u) >= 0x20;
  *v8 = v13;
  *v9 = v16;
  *v10 = v15;
  *v11 = v17;
  return (char)SharedVm;
}
