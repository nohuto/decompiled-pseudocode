/*
 * XREFs of KiSetHeteroPolicyThread @ 0x140574FA4
 * Callers:
 *     KeSetHeteroCpuPolicyThread @ 0x14056B9E0 (KeSetHeteroCpuPolicyThread.c)
 *     KeSetUserHeteroCpuPolicyThread @ 0x14056C00C (KeSetUserHeteroCpuPolicyThread.c)
 *     PopUpdateSingleThreadHeteroPolicies @ 0x140882410 (PopUpdateSingleThreadHeteroPolicies.c)
 * Callees:
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140210C14 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiSendSoftwareInterrupt @ 0x14022BA48 (KiSendSoftwareInterrupt.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14028F83C (KiPrepareReadyThreadForRescheduling.c)
 *     HalpInterruptSendIpi @ 0x1402ADD00 (HalpInterruptSendIpi.c)
 *     KiAbProcessContextSwitch @ 0x1402B4EC0 (KiAbProcessContextSwitch.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiDeliverApc @ 0x1402F1DC0 (KiDeliverApc.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiInsertDeferredReadyList @ 0x1402F6970 (KiInsertDeferredReadyList.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140340300 (KiFlushSoftwareInterruptBatch.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiAcquireThreadStateLock @ 0x140344DD0 (KiAcquireThreadStateLock.c)
 *     KiEndThreadCycleAccumulation @ 0x140345C80 (KiEndThreadCycleAccumulation.c)
 *     KiSelectNextThread @ 0x14035C3FC (KiSelectNextThread.c)
 *     KiReleaseThreadStateLock @ 0x14035D0F8 (KiReleaseThreadStateLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSwapContext @ 0x140428A30 (KiSwapContext.c)
 *     KiConvertDynamicHeteroPolicy @ 0x14045AD66 (KiConvertDynamicHeteroPolicy.c)
 *     KiGenerateHeteroSets @ 0x14045ADBE (KiGenerateHeteroSets.c)
 *     EtwTraceIdealProcessor @ 0x14062DAE4 (EtwTraceIdealProcessor.c)
 */

__int64 __fastcall KiSetHeteroPolicyThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  int v4; // r12d
  int v5; // r14d
  int v6; // esi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *v10; // rcx
  int v11; // eax
  _DWORD *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // r14d
  char v17; // al
  bool v18; // sf
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // rax
  _DWORD *v21; // r9
  int v22; // edx
  int v23; // eax
  __int64 v24; // rdi
  _WORD *v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // r9
  char v29; // cl
  unsigned __int64 v30; // rax
  char v31; // cl
  int v32; // ecx
  int v33; // esi
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // rdi
  __int64 v36; // rcx
  unsigned int v37; // r12d
  unsigned int v38; // r13d
  struct _KPRCB *v39; // rbx
  _QWORD *v40; // rdi
  char v41; // si
  ULONG_PTR CurrentThread; // rdi
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  struct _KPRCB *v46; // rsi
  _DWORD *v47; // rcx
  int v48; // eax
  _DWORD *v49; // rcx
  int v50; // eax
  __int64 NextThread; // rsi
  __int64 v52; // r8
  unsigned int v53; // r8d
  bool v54; // zf
  struct _KPRCB *v55; // rcx
  _DWORD *v56; // rdx
  struct _KPRCB *v57; // r9
  _DWORD *v58; // r8
  int v59; // eax
  _QWORD *v61; // [rsp+30h] [rbp-39h] BYREF
  struct _KPRCB *v62; // [rsp+38h] [rbp-31h] BYREF
  unsigned int v63; // [rsp+40h] [rbp-29h]
  unsigned int v64; // [rsp+44h] [rbp-25h]
  int v65; // [rsp+48h] [rbp-21h] BYREF
  volatile signed __int64 *v66; // [rsp+50h] [rbp-19h] BYREF
  __int128 v67; // [rsp+58h] [rbp-11h] BYREF
  __int64 v68; // [rsp+68h] [rbp-1h]
  int v69[20]; // [rsp+70h] [rbp+7h] BYREF
  int v70; // [rsp+E0h] [rbp+77h] BYREF

  v62 = 0LL;
  v61 = 0LL;
  v4 = (int)SchedulerAssist;
  v66 = 0LL;
  v5 = a3;
  v6 = a2;
  v68 = 0LL;
  v67 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v70 = 0;
  while ( 1 )
  {
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v10[6];
        v10[6] = v11 + 1;
        if ( v11 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v12 = CurrentPrcb->SchedulerAssist;
    if ( v12 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v13 = v12[6] - 1;
        v12[6] = v13;
        if ( !v13 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v70, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v14 = *(unsigned int *)(a1 + 588);
  v15 = *(_DWORD *)(a1 + 196);
  v63 = *(_DWORD *)(a1 + 588);
  v64 = v15;
  if ( v5 )
  {
    v16 = *(unsigned __int8 *)(a1 + 125);
    v17 = (*(_BYTE *)(a1 + 126) ^ v6) & 0x7F;
    v18 = ((v17 ^ *(_BYTE *)(a1 + 126)) & 0x80u) != 0;
    *(_BYTE *)(a1 + 126) ^= v17;
    if ( v18 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( v4 )
  {
LABEL_19:
    v16 = v6;
    goto LABEL_20;
  }
  v16 = *(_BYTE *)(a1 + 126) & 0x7F;
  *(_BYTE *)(a1 + 126) &= ~0x80u;
LABEL_20:
  if ( v16 == 8 )
    v16 = KiDefaultHeteroCpuPolicy;
  if ( !KeHeteroSystem )
  {
    v16 = 0;
    *(_BYTE *)(a1 + 126) &= ~0x80u;
  }
  if ( *(unsigned __int8 *)(a1 + 125) == v16 )
  {
    KiReleaseThreadLockSafe(a1);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && CurrentIrql <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = v20->SchedulerAssist;
          v22 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v54 = (v22 & v21[5]) == 0;
          v21[5] &= v22;
          if ( v54 )
            KiRemoveSystemWorkPriorityKick((__int64)v20);
        }
      }
    }
LABEL_98:
    __writecr8(CurrentIrql);
    return (unsigned int)v16;
  }
  v23 = v16;
  v24 = KiProcessorBlock[v14];
  if ( v16 >= 5 )
    v23 = KiConvertDynamicHeteroPolicy(a1, a2, a3, (__int64)SchedulerAssist);
  v25 = *(_WORD **)(a1 + 576);
  v26 = *(unsigned __int8 *)(v24 + 208);
  if ( (unsigned __int16)v26 >= *v25 )
    v27 = 0LL;
  else
    v27 = *(_QWORD *)&v25[4 * v26 + 4];
  KiGenerateHeteroSets(*(_QWORD *)(v24 + 192), v27, v23, *(_BYTE *)(a1 + 516), &v67);
  if ( ((unsigned __int64)v67 & *(_QWORD *)(v24 + 200)) == 0 )
  {
    v29 = *(_BYTE *)(v24 + 209);
    _BitScanForward64(&v30, __ROR8__(v67, v29));
    v31 = v30 + v29;
    LODWORD(v30) = *(_DWORD *)(a1 + 116);
    v32 = KiProcessorNumberToIndexMappingTable[64 * (_DWORD)v26 + (v31 & 0x3F)];
    *(_DWORD *)(a1 + 588) = v32;
    if ( (v30 & 8) == 0 )
      *(_DWORD *)(a1 + 196) = v32;
  }
  v33 = 0;
  v34 = KiAcquireThreadStateLock(a1, (__int64)&v62, (volatile signed __int32 **)&v66, v28);
  v35 = v62;
  *(_BYTE *)(a1 + 125) = v16;
  if ( v34 == 1 )
  {
    KiRemoveThreadFromAnyReadyQueue((__int64)v35, (__int64)v66, a1, *(char *)(a1 + 195));
    KiPrepareReadyThreadForRescheduling(a1, *(char *)(a1 + 195), (__int64)&v61);
  }
  else
  {
    v36 = (unsigned int)v34 - 2;
    if ( v34 == 2 )
    {
      if ( (v35->GroupSetMember & v68) == 0 )
      {
        if ( *(_BYTE *)(a1 + 388) == 2 )
        {
          _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0xCu);
          v35 = v62;
          if ( !v62->NextThread )
          {
            KiSelectNextThread(v62, (__int64)&v61);
            v33 = 1;
          }
        }
        else
        {
          *(_BYTE *)(a1 + 112) |= 8u;
          v35 = v62;
        }
      }
    }
    else if ( v34 == 3 && (v35->GroupSetMember & v68) == 0 )
    {
      KiSelectNextThread(v35, (__int64)&v61);
      KiInsertDeferredReadyList((__int64)&v61, a1);
    }
  }
  v37 = *(_DWORD *)(a1 + 588);
  v38 = *(_DWORD *)(a1 + 196);
  KiReleaseThreadStateLock(v36, (__int64)v35, v66);
  KiReleaseThreadLockSafe(a1);
  if ( v33 && KeGetPcr()->Prcb.Number != v62->Number )
    KiSendSoftwareInterrupt();
  if ( _bittest((const signed __int32 *)&xmmword_140D06910, 0x1Bu) )
    EtwTraceIdealProcessor(a1, 1350LL, v63, v37);
  if ( _bittest((const signed __int32 *)&xmmword_140D06910, 0x1Bu) )
    EtwTraceIdealProcessor(a1, 1351LL, v64, v38);
  v39 = KeGetCurrentPrcb();
  v40 = v61;
  v41 = 0;
  if ( v61 )
  {
    v61 = (_QWORD *)*v61;
    do
    {
      KiDeferredReadySingleThread((__int64)v39, (ULONG_PTR)(v40 - 27), (__int64)&v61);
      v40 = v61;
      ++v41;
      if ( v61 )
        v61 = (_QWORD *)*v61;
      if ( (v41 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch(&v39->DeferredDispatchInterrupts.Level);
    }
    while ( v40 );
  }
  KiFlushSoftwareInterruptBatch(&v39->DeferredDispatchInterrupts.Level);
  if ( CurrentIrql < 2u )
  {
    CurrentThread = (ULONG_PTR)v39->CurrentThread;
    if ( v39->NextThread )
    {
      KiAbProcessContextSwitch((__int64)v39->CurrentThread, 0);
      v46 = KeGetCurrentPrcb();
      v65 = 0;
      while ( 1 )
      {
        v47 = v46->SchedulerAssist;
        if ( v47 )
        {
          if ( v46->NestingLevel <= 1u )
          {
            v48 = v47[6];
            v47[6] = v48 + 1;
            if ( v48 == -1 )
              KiRemoveSystemWorkPriorityKick((__int64)v46);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v39->PrcbLock, 0LL) )
          break;
        v49 = v46->SchedulerAssist;
        if ( v49 )
        {
          if ( v46->NestingLevel <= 1u )
          {
            v50 = v49[6] - 1;
            v49[6] = v50;
            if ( !v50 )
              KiRemoveSystemWorkPriorityKick((__int64)v46);
          }
        }
        do
          KeYieldProcessorEx(&v65, v43, v44, v45);
        while ( v39->PrcbLock );
      }
      NextThread = (__int64)v39->NextThread;
      v39->NextThread = 0LL;
      _disable();
      LOBYTE(v45) = 1;
      KiEndThreadCycleAccumulation((__int64)v39, CurrentThread, 0LL, v45);
      _enable();
      v39->CurrentThread = (_KTHREAD *)NextThread;
      if ( *(_BYTE *)(NextThread + 388) == 1 )
      {
        v52 = (unsigned int)(*(_DWORD *)(NextThread + 132) - *(_DWORD *)(NextThread + 436));
        *(_DWORD *)(NextThread + 132) = v52 + MEMORY[0xFFFFF78000000320];
      }
      *(_BYTE *)(NextThread + 388) = 2;
      *(_BYTE *)(CurrentThread + 643) = 32;
      *(_BYTE *)(CurrentThread + 390) = CurrentIrql;
      KiQueueReadyThread(v39, CurrentThread, v52);
      LOBYTE(v53) = CurrentIrql;
      v54 = (unsigned __int8)KiSwapContext(CurrentThread, NextThread, v53) == 0;
    }
    else
    {
      v54 = (*(_DWORD *)(CurrentThread + 116) & 0x40) == 0;
    }
    if ( !v54 )
    {
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v55 = KeGetCurrentPrcb();
          v56 = v55->SchedulerAssist;
          v54 = (v56[5] & 0xFFFF0003) == 0;
          v56[5] &= 0xFFFF0003;
          if ( v54 )
            KiRemoveSystemWorkPriorityKick((__int64)v55);
        }
      }
      __writecr8(1uLL);
      *(_DWORD *)(CurrentThread + 116) &= ~0x40u;
      KiDeliverApc(0, 0LL, 0LL);
    }
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v57 = KeGetCurrentPrcb();
        v58 = v57->SchedulerAssist;
        v59 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v54 = (v59 & v58[5]) == 0;
        v58[5] &= v59;
        if ( v54 )
          KiRemoveSystemWorkPriorityKick((__int64)v57);
      }
    }
    goto LABEL_98;
  }
  if ( v39->NextThread && !v39->DpcRoutineActive )
  {
    if ( v39->NestingLevel )
    {
      v39->InterruptRequest = 1;
    }
    else
    {
      v69[0] = 5;
      *(_OWORD *)&v69[1] = 0LL;
      HalpInterruptSendIpi(v69, 0x2Fu);
    }
  }
  return (unsigned int)v16;
}
