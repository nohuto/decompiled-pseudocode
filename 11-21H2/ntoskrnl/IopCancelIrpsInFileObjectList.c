/*
 * XREFs of IopCancelIrpsInFileObjectList @ 0x1402A7370
 * Callers:
 *     IopRevokeFileObjectForProcess @ 0x140559124 (IopRevokeFileObjectForProcess.c)
 *     NtCancelIoFile @ 0x1406A4A70 (NtCancelIoFile.c)
 *     IopCleanupProcessResources @ 0x1406C9A28 (IopCleanupProcessResources.c)
 *     IopCancelIoFile @ 0x1406CF67C (IopCancelIoFile.c)
 *     IopCloseFile @ 0x14072E9E0 (IopCloseFile.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140211E70 (KxWaitForSpinLockAndAcquire.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     IopInterlockedAdd @ 0x14022A6A0 (IopInterlockedAdd.c)
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     IopCheckListForCancelableIrp @ 0x14024DEFC (IopCheckListForCancelableIrp.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     IoFreeIrp @ 0x140348610 (IoFreeIrp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x14045A310 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x14056E8CC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopCancelIrpsInFileObjectList(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, char a6)
{
  __int64 result; // rax
  struct _LIST_ENTRY *v7; // rsi
  __int64 v8; // r10
  __int64 v9; // r11
  struct _LIST_ENTRY *Flink; // r12
  unsigned int v12; // r15d
  volatile signed __int32 *v13; // rbx
  KIRQL CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r14
  _DWORD *v16; // rcx
  struct _LIST_ENTRY *v17; // r14
  struct _KPRCB *v18; // rcx
  _DWORD *v19; // rdx
  _DWORD *SchedulerAssist; // r9
  char v21; // al
  PIRP v22; // r13
  _DWORD *v23; // rcx
  int v24; // r13d
  KIRQL v25; // al
  int v26; // eax
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r10
  _DWORD *v30; // r9
  int v31; // eax
  bool v32; // zf
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  int v37; // eax
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // rax
  _DWORD *v40; // r9
  int v41; // edx
  PIRP Irp; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp-60h] BYREF
  __int64 v44; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v46; // [rsp+A0h] [rbp+8h]

  result = 0LL;
  v46 = 1;
  v7 = (struct _LIST_ENTRY *)(a1 + 192);
  Irp = 0LL;
  v8 = a4;
  v44 = 0LL;
  v9 = a3;
  Flink = 0LL;
  v12 = 0;
  if ( !*(_QWORD *)(a1 + 192) )
    return result;
  v13 = (volatile signed __int32 *)(a1 + 184);
  Interval.QuadPart = -10000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v13);
LABEL_35:
    v9 = a3;
    v8 = a4;
    goto LABEL_6;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v16 = CurrentPrcb->SchedulerAssist;
  if ( v16 )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v26 = v16[6];
      v16[6] = v26 + 1;
      if ( v26 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        v8 = a4;
        v9 = a3;
      }
    }
  }
  if ( _interlockedbittestandset64(v13, 0LL) )
  {
    v23 = CurrentPrcb->SchedulerAssist;
    if ( v23 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v27 = v23[6] - 1;
        v23[6] = v27;
        if ( !v27 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    KxWaitForSpinLockAndAcquire(v13);
    goto LABEL_35;
  }
LABEL_6:
  if ( a6 )
    *(_DWORD *)(a1 + 80) |= 0x400u;
  while ( 1 )
  {
    v17 = Flink;
    if ( v7->Flink == v7 )
      break;
    v21 = IopCheckListForCancelableIrp(v7, a2, v9, v8, Flink, &Irp);
    v22 = Irp;
    Flink = 0LL;
    if ( Irp )
    {
      if ( !Irp->Cancel )
      {
        v12 = 1;
        Irp->Cancel = 1;
        KxReleaseSpinLock((PKSPIN_LOCK)v13);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v28 = KeGetCurrentIrql();
            if ( v28 <= 0xFu && CurrentIrql <= 0xFu && v28 >= 2u )
            {
              v29 = KeGetCurrentPrcb();
              v30 = v29->SchedulerAssist;
              v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v32 = (v31 & v30[5]) == 0;
              v30[5] &= v31;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(v29);
              v22 = Irp;
            }
          }
        }
        __writecr8(CurrentIrql);
        IoCancelIrp(v22);
        CurrentIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13);
      }
      if ( (v22->Flags & 0x2000) != 0 )
        Flink = v22->ThreadListEntry.Flink;
      if ( !(unsigned int)IopInterlockedAdd((volatile signed __int64 *)&v22->Overlay, -1) )
        IoFreeIrp(v22);
      v8 = a4;
      v9 = a3;
      if ( Flink == v7 )
      {
        if ( !a5 )
          break;
        Flink = 0LL;
      }
    }
    else
    {
      if ( !a5 )
        break;
      if ( v21 )
      {
        if ( !v17 )
          break;
        v8 = a4;
        v9 = a3;
      }
      else
      {
        v44 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 88LL);
        KxReleaseSpinLock((PKSPIN_LOCK)v13);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            v33 = KeGetCurrentIrql();
            if ( v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
            {
              v34 = KeGetCurrentPrcb();
              v35 = v34->SchedulerAssist;
              v36 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v32 = (v36 & v35[5]) == 0;
              v35[5] &= v36;
              if ( v32 )
                KiRemoveSystemWorkPriorityKick(v34);
            }
          }
        }
        __writecr8(CurrentIrql);
        KeDelayExecutionThread(0, 0, &Interval);
        v24 = v46;
        if ( v46 < 100 )
        {
          v46 *= 2;
          Interval.QuadPart = -20000 * v24;
        }
        v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13);
        v8 = a4;
        CurrentIrql = v25;
        v9 = a3;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v13, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
  v18 = KeGetCurrentPrcb();
  v19 = v18->SchedulerAssist;
  if ( v19 )
  {
    if ( v18->NestingLevel <= 1u )
    {
      v37 = v19[6] - 1;
      v19[6] = v37;
      if ( !v37 )
        KiRemoveSystemWorkPriorityKick(v18);
    }
  }
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v38 = KeGetCurrentIrql();
      if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = v39->SchedulerAssist;
        v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v32 = (v41 & v40[5]) == 0;
        v40[5] &= v41;
        if ( v32 )
          KiRemoveSystemWorkPriorityKick(v39);
      }
    }
  }
  __writecr8(CurrentIrql);
  return v12;
}
