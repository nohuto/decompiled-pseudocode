/*
 * XREFs of VfIrpLogRecordEvent @ 0x140A9B888
 * Callers:
 *     IovpCallDriver1 @ 0x140A8B840 (IovpCallDriver1.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140A92124 (IovUtilIsDeviceObjectMarked.c)
 *     VfMajorBuildIrpLogEntry @ 0x140A92524 (VfMajorBuildIrpLogEntry.c)
 *     ViIrpLogDatabaseFindPointer @ 0x140A9BEE8 (ViIrpLogDatabaseFindPointer.c)
 */

__int64 __fastcall VfIrpLogRecordEvent(__int16 a1, _DWORD *a2, __int64 a3)
{
  __int64 result; // rax
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  unsigned __int64 v7; // rdi
  __int64 Pointer; // rax
  _DWORD *v9; // rbp
  __int64 v10; // rbx
  _QWORD *v11; // rcx
  int v12; // eax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  unsigned int v16; // edx
  __int64 v17; // rcx
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r8
  bool v20; // zf
  _DWORD *v21; // [rsp+20h] [rbp-68h] BYREF
  __int128 v22; // [rsp+30h] [rbp-58h] BYREF
  __int128 v23; // [rsp+40h] [rbp-48h]
  __int64 v24; // [rsp+50h] [rbp-38h]

  v21 = 0LL;
  result = 0LL;
  v24 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  if ( (a1 & 0x400) == 0 )
    return result;
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
  v7 = KeAcquireSpinLockRaiseToDpc(&ViIrpLogDatabaseLock);
  if ( !(unsigned int)IovUtilIsDeviceObjectMarked((__int64)a2, 0) )
  {
    Pointer = ViIrpLogDatabaseFindPointer(a2, &v21);
    v9 = v21;
    v10 = Pointer;
    if ( !*v21 )
    {
      if ( Pointer )
      {
LABEL_14:
        v15 = *(_DWORD *)(v10 + 24);
        if ( (v15 & 6) == 0 )
        {
          v16 = v15 == 1 ? *(_DWORD *)(v10 + 32) : *(_DWORD *)(v10 + 36);
          if ( (unsigned int)VfMajorBuildIrpLogEntry(
                               a3,
                               v16,
                               v10 + 40 * (*(unsigned int *)(v10 + 36) + 1LL),
                               (__int64)&v22) )
          {
            v17 = 5 * (*(unsigned int *)(v10 + 36) + 1LL);
            *(_OWORD *)(v10 + 8 * v17) = v22;
            *(_OWORD *)(v10 + 8 * v17 + 16) = v23;
            *(_QWORD *)(v10 + 8 * v17 + 32) = v24;
            if ( ++*(_DWORD *)(v10 + 36) == *(_DWORD *)(v10 + 32) )
            {
              *(_DWORD *)(v10 + 24) |= 1u;
              *(_DWORD *)(v10 + 36) = 0;
            }
          }
        }
        goto LABEL_21;
      }
      v10 = ExAllocatePool2(64LL, 0x348uLL, 0x65496656u);
      if ( v10 )
      {
        ObfReferenceObject(a2);
        *(_DWORD *)(v10 + 24) = 0;
        v11 = v9 + 2;
        *(_QWORD *)v10 = a2;
        v12 = a2[18];
        *(_DWORD *)(v10 + 36) = 0;
        *(_DWORD *)(v10 + 28) = v12;
        v13 = (_QWORD *)(v10 + 8);
        *(_DWORD *)(v10 + 32) = 20;
        v14 = *((_QWORD *)v9 + 1);
        if ( *(_DWORD **)(v14 + 8) != v9 + 2 )
          __fastfail(3u);
        *v13 = v14;
        *(_QWORD *)(v10 + 16) = v11;
        *(_QWORD *)(v14 + 8) = v13;
        *v11 = v13;
        goto LABEL_14;
      }
    }
  }
LABEL_21:
  KxReleaseSpinLock(&ViIrpLogDatabaseLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v20 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v20 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
