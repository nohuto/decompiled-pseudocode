/*
 * XREFs of IopCancelIrpsInFileObjectList @ 0x1402AFBD0
 * Callers:
 *     IopRevokeFileObjectForProcess @ 0x14055918C (IopRevokeFileObjectForProcess.c)
 *     IopCloseFile @ 0x1407301F0 (IopCloseFile.c)
 *     NtCancelIoFile @ 0x1407C1A00 (NtCancelIoFile.c)
 *     IopCancelIoFile @ 0x1407C1C5C (IopCancelIoFile.c)
 *     IopCleanupProcessResources @ 0x1407CB48C (IopCleanupProcessResources.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402468E0 (KeDelayExecutionThread.c)
 *     KxReleaseSpinLock @ 0x1402505D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250F40 (KeAcquireSpinLockRaiseToDpc.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140250FE0 (KxWaitForSpinLockAndAcquire.c)
 *     IoFreeIrp @ 0x1402AF4A0 (IoFreeIrp.c)
 *     IoCancelIrp @ 0x140352030 (IoCancelIrp.c)
 *     IopCheckListForCancelableIrp @ 0x14035E8CC (IopCheckListForCancelableIrp.c)
 *     IopInterlockedAdd @ 0x14035EA84 (IopInterlockedAdd.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x140460830 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140571D88 (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopCancelIrpsInFileObjectList(__int64 a1, int a2, int a3, int a4, char a5, char a6)
{
  __int64 result; // rax
  _QWORD *v7; // rsi
  int v8; // r10d
  int v9; // r11d
  __int64 Flink; // r13
  unsigned int v12; // r14d
  volatile signed __int32 *v13; // rbx
  KIRQL CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r8
  __int64 v16; // r9
  bool v17; // r12
  char v18; // al
  PIRP v19; // r15
  unsigned __int8 v20; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v22; // r9
  int v23; // eax
  bool v24; // zf
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  _DWORD *v27; // r9
  int v28; // eax
  int v29; // r15d
  KIRQL v30; // al
  unsigned __int8 v31; // cl
  struct _KPRCB *v32; // rax
  _DWORD *v33; // r9
  int v34; // edx
  PIRP Irp; // [rsp+30h] [rbp-68h] BYREF
  LARGE_INTEGER Interval; // [rsp+38h] [rbp-60h] BYREF
  __int64 v37; // [rsp+40h] [rbp-58h]
  void *retaddr; // [rsp+98h] [rbp+0h]
  int v39; // [rsp+A0h] [rbp+8h]

  result = 0LL;
  v39 = 1;
  v7 = (_QWORD *)(a1 + 192);
  Irp = 0LL;
  v8 = a4;
  v37 = 0LL;
  v9 = a3;
  Flink = 0LL;
  v12 = 0;
  if ( !*(_QWORD *)(a1 + 192) )
    return result;
  v13 = (volatile signed __int32 *)(a1 + 184);
  Interval.QuadPart = -10000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    if ( CurrentIrql == 2 )
      LODWORD(v16) = 4;
    else
      v16 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v16;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v13);
LABEL_36:
    v9 = a3;
    v8 = a4;
    goto LABEL_5;
  }
  if ( _interlockedbittestandset64(v13, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v13);
    goto LABEL_36;
  }
LABEL_5:
  if ( a6 )
    *(_DWORD *)(a1 + 80) |= 0x400u;
  while ( (_QWORD *)*v7 != v7 )
  {
    v17 = Flink != 0;
    v18 = IopCheckListForCancelableIrp((_DWORD)v7, a2, v9, v8, Flink, (__int64)&Irp);
    v19 = Irp;
    Flink = 0LL;
    if ( Irp )
    {
      if ( !Irp->Cancel )
      {
        v12 = 1;
        Irp->Cancel = 1;
        KxReleaseSpinLock((volatile signed __int64 *)v13);
        if ( (_DWORD)KiIrqlFlags )
        {
          v20 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v20 <= 0xFu && CurrentIrql <= 0xFu && v20 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v22 = CurrentPrcb->SchedulerAssist;
            v23 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v24 = (v23 & v22[5]) == 0;
            v22[5] &= v23;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            v19 = Irp;
          }
        }
        __writecr8(CurrentIrql);
        IoCancelIrp(v19);
        CurrentIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13);
      }
      if ( (v19->Flags & 0x2000) != 0 )
        Flink = (__int64)v19->ThreadListEntry.Flink;
      if ( !(unsigned int)IopInterlockedAdd(&v19->Overlay, 0xFFFFFFFFLL) )
        IoFreeIrp(v19);
      v8 = a4;
      v9 = a3;
      if ( (_QWORD *)Flink == v7 )
      {
        if ( !a5 )
          break;
        v8 = a4;
        Flink = 0LL;
        v9 = a3;
      }
    }
    else
    {
      if ( !a5 )
        break;
      if ( v18 )
      {
        if ( !v17 )
          break;
        v8 = a4;
        v9 = a3;
      }
      else
      {
        v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) + 88LL);
        KxReleaseSpinLock((volatile signed __int64 *)v13);
        if ( (_DWORD)KiIrqlFlags )
        {
          v25 = KeGetCurrentIrql();
          if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
          {
            v26 = KeGetCurrentPrcb();
            v27 = v26->SchedulerAssist;
            v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v24 = (v28 & v27[5]) == 0;
            v27[5] &= v28;
            if ( v24 )
              KiRemoveSystemWorkPriorityKick(v26);
          }
        }
        __writecr8(CurrentIrql);
        KeDelayExecutionThread(0, 0, &Interval);
        v29 = v39;
        if ( v39 < 100 )
        {
          v39 *= 2;
          Interval.QuadPart = -20000 * v29;
        }
        v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v13);
        v8 = a4;
        CurrentIrql = v30;
        v9 = a3;
      }
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v13, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
  if ( (_DWORD)KiIrqlFlags )
  {
    v31 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
    {
      v32 = KeGetCurrentPrcb();
      v33 = v32->SchedulerAssist;
      v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v24 = (v34 & v33[5]) == 0;
      v33[5] &= v34;
      if ( v24 )
        KiRemoveSystemWorkPriorityKick(v32);
    }
  }
  __writecr8(CurrentIrql);
  return v12;
}
