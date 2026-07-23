/*
 * XREFs of VfIrpLogRecordEvent @ 0x140ADD8FC
 * Callers:
 *     IovpCallDriver1 @ 0x140ACD170 (IovpCallDriver1.c)
 * Callees:
 *     ObfReferenceObject @ 0x140233C20 (ObfReferenceObject.c)
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140AD3B14 (IovUtilIsDeviceObjectMarked.c)
 *     VfMajorBuildIrpLogEntry @ 0x140AD3F14 (VfMajorBuildIrpLogEntry.c)
 *     ViIrpLogDatabaseFindPointer @ 0x140ADDF58 (ViIrpLogDatabaseFindPointer.c)
 */

void __fastcall VfIrpLogRecordEvent(__int16 a1, _DWORD *a2, __int64 a3)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  unsigned __int64 v6; // rdi
  __int64 Pointer; // rax
  _DWORD *v8; // rbp
  __int64 v9; // rbx
  _QWORD *v10; // rcx
  int v11; // eax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  int v14; // eax
  _DWORD *v15; // rsi
  unsigned int v16; // edx
  __int64 v17; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  int v21; // eax
  bool v22; // zf
  _DWORD *v23; // [rsp+20h] [rbp-68h] BYREF
  __int128 v24; // [rsp+30h] [rbp-58h] BYREF
  __int128 v25; // [rsp+40h] [rbp-48h]
  __int64 v26; // [rsp+50h] [rbp-38h]

  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( (a1 & 0x400) == 0 )
    return;
  if ( ViIrpLogDdiLock != 2 && !_InterlockedCompareExchange(&ViIrpLogDdiLock, 1, 0) )
  {
    Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(64LL, 0x20uLL, 0x77496656u);
    if ( Pool2 )
    {
      Pool2->List.Flink = 0LL;
      Pool2->WorkerRoutine = (void (__fastcall *)(void *))ViIrpLogExposeWmiCallback;
      Pool2->Parameter = Pool2;
      ExQueueWorkItem(Pool2, DelayedWorkQueue);
    }
    else
    {
      ViIrpLogDdiLock = 0;
    }
  }
  v6 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  if ( !(unsigned int)IovUtilIsDeviceObjectMarked((__int64)a2, 0) )
  {
    Pointer = ViIrpLogDatabaseFindPointer(a2, &v23);
    v8 = v23;
    v9 = Pointer;
    if ( !*v23 )
    {
      if ( Pointer )
      {
LABEL_14:
        v14 = *(_DWORD *)(v9 + 24);
        if ( (v14 & 6) == 0 )
        {
          v15 = (_DWORD *)(v9 + 36);
          v16 = v14 == 1 ? *(_DWORD *)(v9 + 32) : *v15;
          if ( (unsigned int)VfMajorBuildIrpLogEntry(a3, v16, v9 + 40 * ((unsigned int)*v15 + 1LL), (__int64)&v24) )
          {
            v17 = 5 * ((unsigned int)*v15 + 1LL);
            *(_OWORD *)(v9 + 8 * v17) = v24;
            *(_OWORD *)(v9 + 8 * v17 + 16) = v25;
            *(_QWORD *)(v9 + 8 * v17 + 32) = v26;
            if ( ++*v15 == *(_DWORD *)(v9 + 32) )
            {
              *(_DWORD *)(v9 + 24) |= 1u;
              *v15 = 0;
            }
          }
        }
        goto LABEL_21;
      }
      v9 = ExAllocatePool2(64LL, 0x348uLL, 0x65496656u);
      if ( v9 )
      {
        ObfReferenceObject(a2);
        *(_DWORD *)(v9 + 24) = 0;
        v10 = v8 + 2;
        *(_QWORD *)v9 = a2;
        v11 = a2[18];
        *(_DWORD *)(v9 + 36) = 0;
        *(_DWORD *)(v9 + 28) = v11;
        v12 = (_QWORD *)(v9 + 8);
        *(_DWORD *)(v9 + 32) = 20;
        v13 = *((_QWORD *)v8 + 1);
        if ( *(_DWORD **)(v13 + 8) != v8 + 2 )
          __fastfail(3u);
        *v12 = v13;
        *(_QWORD *)(v9 + 16) = v10;
        *(_QWORD *)(v13 + 8) = v12;
        *v10 = v12;
        goto LABEL_14;
      }
    }
  }
LABEL_21:
  KxReleaseSpinLock((volatile signed __int64 *)&ViIrpLogDatabaseLock);
  if ( (_DWORD)KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0
      && CurrentIrql <= 0xFu
      && (unsigned __int8)v6 <= 0xFu
      && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v22 = (v21 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v21;
      if ( v22 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
  }
  __writecr8(v6);
}
