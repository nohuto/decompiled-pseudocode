/*
 * XREFs of MmOutSwapProcess @ 0x14034D198
 * Callers:
 *     KiOutSwapProcesses @ 0x14034CF20 (KiOutSwapProcesses.c)
 * Callees:
 *     MiLockAndDecrementShareCount @ 0x140211BAC (MiLockAndDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x14021ACA0 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x14021AE84 (MiUnmapPageInHyperSpaceWorker.c)
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 *     KeIsEmptyAffinityEx @ 0x140255230 (KeIsEmptyAffinityEx.c)
 *     KxReleaseQueuedSpinLock @ 0x1402605F0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402610F0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiDecrementShareCount @ 0x140280A40 (MiDecrementShareCount.c)
 *     MiSwizzleInvalidPte @ 0x140285A30 (MiSwizzleInvalidPte.c)
 *     MiGetSharedVm @ 0x140287104 (MiGetSharedVm.c)
 *     KeFlushProcessTb @ 0x140292EF0 (KeFlushProcessTb.c)
 *     MiEmptyPageAccessLog @ 0x1402E21D0 (MiEmptyPageAccessLog.c)
 *     KeWaitForGate @ 0x14034AF20 (KeWaitForGate.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     MiReleaseCommitForResetPages @ 0x140619638 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1406197C8 (MiReleaseOutSwappedProcessCommit.c)
 */

__int64 __fastcall MmOutSwapProcess(struct _EPROCESS *a1)
{
  _MMSUPPORT_FULL *p_Vm; // r14
  _QWORD *SharedVm; // rax
  _QWORD *v4; // rdi
  __int64 result; // rax
  char v6; // cl
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  _LIST_ENTRY *p_WorkingSetExpansionLinks; // rax
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  unsigned __int64 v15; // rbx
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r10
  _DWORD *v18; // r9
  int v19; // eax
  unsigned __int64 *v20; // rcx
  unsigned __int64 v21; // rbx
  __int64 v22; // r15
  __int64 *v23; // r13
  __int64 v24; // rax
  unsigned __int64 v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  int v30; // ecx
  bool v31; // zf
  unsigned __int64 v32; // rbx
  bool v33; // cc
  struct _KPRCB *v34; // r9
  _DWORD *v35; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF
  __int16 v37; // [rsp+38h] [rbp-20h] BYREF
  char v38; // [rsp+3Ah] [rbp-1Eh]
  char v39; // [rsp+3Bh] [rbp-1Dh]
  int v40; // [rsp+3Ch] [rbp-1Ch]
  _QWORD v41[3]; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int8 v42; // [rsp+A0h] [rbp+48h] BYREF
  int v43; // [rsp+A8h] [rbp+50h]
  int v44; // [rsp+B0h] [rbp+58h] BYREF
  int v45; // [rsp+B8h] [rbp+60h] BYREF

  p_Vm = &a1->Vm;
  v39 = 0;
  v42 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  SharedVm = MiGetSharedVm((__int64)&a1->Vm);
  v4 = SharedVm;
  _InterlockedOr((volatile signed __int32 *)&a1->1124, 0x40u);
  if ( (p_Vm->Instance.Flags.u2 & 0x60) == 0x20 )
  {
    MiReleaseOutSwappedProcessCommit(a1);
  }
  else if ( (p_Vm->Instance.Flags.u2 & 0x60) == 0x40 && *(_QWORD *)(SharedVm[4] + 40LL) )
  {
    MiReleaseCommitForResetPages(a1);
  }
  result = p_Vm->Instance.WorkingSetSize;
  if ( result != 1 || (p_Vm->Instance.Flags.u2 & 2) != 0 )
    return result;
  v37 = 263;
  v41[1] = v41;
  v38 = 6;
  v41[0] = v41;
  v40 = 0;
  KeAcquireInStackQueuedSpinLock(&qword_140C697C0, &LockHandle);
  while ( 1 )
  {
    v6 = *((_BYTE *)&p_Vm->Instance.Flags.0 + 1) >> 4;
    if ( (*((_BYTE *)&p_Vm->Instance.Flags.0 + 1) & 6) == 0 )
      break;
    if ( v6 )
      goto LABEL_56;
    p_Vm->Instance.ExitOutswapGate = (_KGATE *)&v37;
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
        v11 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v31 = (v11 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v11;
        if ( v31 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(OldIrql);
    KeWaitForGate((__int64)&v37, 18, 0);
    KeAcquireInStackQueuedSpinLock(&qword_140C697C0, &LockHandle);
    p_Vm->Instance.ExitOutswapGate = 0LL;
  }
  if ( v6 )
  {
LABEL_56:
    result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    v32 = LockHandle.OldIrql;
    if ( !(_DWORD)KiIrqlFlags )
      goto LABEL_64;
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) == 0 || (unsigned __int8)result > 0xFu )
      goto LABEL_64;
    v33 = LockHandle.OldIrql <= 0xFu;
    goto LABEL_60;
  }
  _InterlockedOr((volatile signed __int32 *)&a1->1124, 0x80u);
  p_WorkingSetExpansionLinks = &p_Vm->Instance.WorkingSetExpansionLinks;
  Flink = p_Vm->Instance.WorkingSetExpansionLinks.Flink;
  Blink = p_Vm->Instance.WorkingSetExpansionLinks.Blink;
  if ( Flink->Blink != &p_Vm->Instance.WorkingSetExpansionLinks || Blink->Flink != p_WorkingSetExpansionLinks )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  p_WorkingSetExpansionLinks->Flink = 0LL;
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v15 = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    v16 = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v16 <= 0xFu && LockHandle.OldIrql <= 0xFu && v16 >= 2u )
    {
      v17 = KeGetCurrentPrcb();
      v18 = v17->SchedulerAssist;
      v19 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
      v31 = (v19 & v18[5]) == 0;
      v18[5] &= v19;
      if ( v31 )
        KiRemoveSystemWorkPriorityKick(v17);
    }
  }
  __writecr8(v15);
  v20 = (unsigned __int64 *)v4[5];
  if ( v20 )
  {
    MiEmptyPageAccessLog(v20);
    v4[5] = 0LL;
  }
  v44 = 0;
  while ( !(unsigned int)KeIsEmptyAffinityEx(&a1->Pcb.ActiveProcessors.Count) )
    KeYieldProcessorEx(&v44);
  KeFlushProcessTb(a1->Pcb.DirectoryTableBase);
  if ( a1->Vm.Shared.ShadowMapping )
    KeFlushProcessTb(a1->Pcb.UserDirectoryTableBase);
  v21 = a1->Pcb.DirectoryTableBase >> 12;
  v22 = 48 * v21 - 0x220000000000LL;
  v23 = (__int64 *)(MiMapPageInHyperSpaceWorker(v21, &v42, 0x80000000) + 8LL * ((*(_DWORD *)(v22 + 8) >> 3) & 0x1FF));
  v24 = MiSwizzleInvalidPte(((v21 & 0xFFFFFFFFFFLL) << 12) | 0x880);
  v43 = 0;
  v25 = v24;
  v26 = v24;
  if ( MiPteInShadowRange((unsigned __int64)v23) )
  {
    if ( (unsigned int)MiPteHasShadow(v28, v27, v29) )
    {
      v30 = 1;
      if ( !HIBYTE(word_140C66CFC) )
      {
        v31 = (v25 & 1) == 0;
        goto LABEL_41;
      }
    }
    else
    {
      v30 = v43;
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v31 = (v25 & 1) == 0;
LABEL_41:
        if ( !v31 )
          v26 |= 0x8000000000000000uLL;
      }
    }
  }
  else
  {
    v30 = v43;
  }
  *v23 = v26;
  if ( v30 )
    MiWritePteShadow(v23, v26);
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v23, v42);
  MiLockAndDecrementShareCount(v22, 0);
  KeAcquireInStackQueuedSpinLock(&qword_140C697C0, &LockHandle);
  v45 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v45);
    while ( *(__int64 *)(v22 + 24) < 0 );
  }
  *(_QWORD *)(v22 + 8) = &a1->PageDirectoryPte;
  a1->PageDirectoryPte = v25;
  p_Vm->Instance.WorkingSetLeafSize = 0LL;
  p_Vm->Instance.WorkingSetLeafPrivateSize = 0LL;
  p_Vm->Instance.WorkingSetSize = 0LL;
  p_Vm->Instance.WorkingSetPrivateSize = 0LL;
  MiDecrementShareCount(v22);
  _InterlockedAnd64((volatile signed __int64 *)(v22 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v32 = LockHandle.OldIrql;
  if ( (_DWORD)KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && (unsigned __int8)result <= 0xFu )
    {
      v33 = LockHandle.OldIrql <= 0xFu;
LABEL_60:
      if ( v33 && (unsigned __int8)result >= 2u )
      {
        v34 = KeGetCurrentPrcb();
        v35 = v34->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
        v31 = ((unsigned int)result & v35[5]) == 0;
        v35[5] &= result;
        if ( v31 )
          result = KiRemoveSystemWorkPriorityKick(v34);
      }
    }
  }
LABEL_64:
  __writecr8(v32);
  return result;
}
