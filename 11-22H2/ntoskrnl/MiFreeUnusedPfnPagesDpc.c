/*
 * XREFs of MiFreeUnusedPfnPagesDpc @ 0x14038D050
 * Callers:
 *     <none>
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1402146D4 (MiGetAnyMultiplexedVm.c)
 *     KeYieldProcessorEx @ 0x140242E20 (KeYieldProcessorEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D340 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140286D54 (MiGetSharedVm.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402893A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlockWorkingSetExclusive @ 0x14028A1D0 (MiUnlockWorkingSetExclusive.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     MiFreedUnusedPfnPagesWorker @ 0x14038D19C (MiFreedUnusedPfnPagesWorker.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiFreeUnusedPfnPagesDpc(__int64 a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  char *AnyMultiplexedVm; // r15
  volatile LONG *SharedVm; // rbx
  KIRQL v11; // al
  unsigned __int8 v12; // r12
  int v13; // edx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 result; // rax
  unsigned int v17; // ebx
  __int64 v18; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  bool v22; // zf
  int v23[10]; // [rsp+20h] [rbp-28h] BYREF
  int v24; // [rsp+68h] [rbp+20h] BYREF

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v24 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      KeYieldProcessorEx(&v24);
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v8;
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
    SharedVm = (volatile LONG *)MiGetSharedVm((__int64)AnyMultiplexedVm);
    v11 = ExAcquireSpinLockExclusive(SharedVm);
    *((_DWORD *)SharedVm + 1) = 0;
    v12 = v11;
    ExAcquireSpinLockExclusive(&dword_140C6B5E0);
    if ( qword_140C6B528 )
    {
      if ( *(_QWORD *)a2 )
      {
        v18 = *(_QWORD *)(a2 + 8);
        *(_DWORD *)(v18 + 12) = 0;
        *(_QWORD *)(v18 + 24) = v18 + 16;
        *(_QWORD *)(v18 + 16) = v18 + 16;
        *(_WORD *)(v18 + 8) = 263;
        *(_BYTE *)(v18 + 10) = 6;
        *(_QWORD *)v18 = qword_140C6B558;
        qword_140C6B558 = v18;
      }
      else
      {
        stru_140C6B530.List.Flink = 0LL;
        stru_140C6B530.WorkerRoutine = (void (__fastcall *)(void *))MiFreeUnusedPfnPages;
        stru_140C6B530.Parameter = &MiSystemPartition;
        ExQueueWorkItem(&stru_140C6B530, DelayedWorkQueue);
        byte_140C6B5E4 = 1;
      }
      v13 = 259;
    }
    else
    {
      MiFreedUnusedPfnPagesWorker(a2);
      v13 = 0;
    }
    *(_DWORD *)(a2 + 16) = v13;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C6B5E0);
    if ( (_DWORD)KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)(CurrentIrql - 2) <= 0xDu )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v22 = (SchedulerAssist[5] & 0xFFFF0007) == 0;
        SchedulerAssist[5] &= 0xFFFF0007;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(2uLL);
    MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v12, v14, v15);
  }
  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
  v17 = ~(_DWORD)result & 0x80000000;
  if ( (result & 0x7FFFFFFF) != 0 )
  {
    v23[0] = 0;
    while ( 1 )
    {
      result = *(_DWORD *)a4 & 0x80000000;
      if ( (_DWORD)result == v17 )
        break;
      KeYieldProcessorEx(v23);
    }
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v17;
  }
  _InterlockedDecrement(a3);
  return result;
}
