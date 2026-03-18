/*
 * XREFs of KiSetPriorityThread @ 0x140344A30
 * Callers:
 *     KiSetPriorityBoost @ 0x14021050C (KiSetPriorityBoost.c)
 *     KiAbThreadUnboostCpuPriority @ 0x14022B5D8 (KiAbThreadUnboostCpuPriority.c)
 *     KeBoostPriorityThread @ 0x140255110 (KeBoostPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x14028FD20 (KeSetActualBasePriorityThread.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1402EB9D0 (KiTryUnwaitThreadWithPriority.c)
 *     KeSetPriorityAndQuantumProcess @ 0x1402EBB58 (KeSetPriorityAndQuantumProcess.c)
 *     KeSetBasePriorityThread @ 0x1402EBF30 (KeSetBasePriorityThread.c)
 *     PsImpersonateContainerOfThread @ 0x14030F330 (PsImpersonateContainerOfThread.c)
 *     KeRemovePriQueue @ 0x14033D110 (KeRemovePriQueue.c)
 *     KeSetPriorityBoost @ 0x1403438F0 (KeSetPriorityBoost.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 *     KeClearSystemPriority @ 0x140344640 (KeClearSystemPriority.c)
 *     KeInsertPriQueue @ 0x1403462B0 (KeInsertPriQueue.c)
 *     KiAbApplyWakeupBoost @ 0x1403597CC (KiAbApplyWakeupBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x14035A424 (KiAbSetMinimumThreadPriority.c)
 *     KeSetThreadSchedulerAssist @ 0x140576AA4 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1405779D0 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x140210C14 (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSendSoftwareInterrupt @ 0x14022BA48 (KiSendSoftwareInterrupt.c)
 *     KiPrepareReadyThreadForRescheduling @ 0x14028F83C (KiPrepareReadyThreadForRescheduling.c)
 *     KiUpdateThreadPriority @ 0x140291010 (KiUpdateThreadPriority.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x140292818 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiSelectReadyThreadEx @ 0x1402B7AE0 (KiSelectReadyThreadEx.c)
 *     KiInsertDeferredReadyList @ 0x1402F6970 (KiInsertDeferredReadyList.c)
 *     KiAcquireThreadStateLock @ 0x140344DD0 (KiAcquireThreadStateLock.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1403457BC (KiHvEnlightenedGuestPriorityKick.c)
 *     KiReleaseThreadStateLock @ 0x14035D0F8 (KiReleaseThreadStateLock.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 */

char __fastcall KiSetPriorityThread(_KTHREAD *a1, __int64 a2, char a3)
{
  unsigned int PriorityFloorSummary; // eax
  int v4; // edi
  unsigned int v7; // r14d
  char v8; // al
  signed int Priority; // r12d
  char v10; // r13
  struct _KPRCB *v11; // rsi
  _KTHREAD *NextThread; // r15
  __int64 v13; // rcx
  struct _KPRCB *v14; // rdx
  struct _KPRCB *v15; // rsi
  _KPRIORITY_STATE **p_PriorityState; // r15
  unsigned __int8 *PriorityState; // r12
  char v18; // cl
  unsigned __int8 v19; // al
  void *SchedulerAssist; // rcx
  _KPRIORITY_STATE *v21; // r8
  _BYTE *v22; // rax
  __int64 v23; // rcx
  __int64 ready; // rax
  __int64 v26; // r8
  __int64 v27; // r14
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // r14
  _KPRIORITY_STATE **v35; // r12
  unsigned __int8 *v36; // r13
  char v37; // cl
  __int64 v38; // rdx
  __int64 v39; // rdx
  unsigned __int8 v40; // al
  void *v41; // rcx
  __int64 v42; // rdx
  _KPRIORITY_STATE *v43; // r8
  unsigned int v44; // edx
  char v45; // al
  char v46; // al
  char v47; // cl
  _BYTE *v48; // rax
  bool v49; // cl
  __int64 v50; // rdx
  unsigned int v51; // edx
  char v52; // al
  char v53; // al
  char v54; // cl
  _KTHREAD **p_NextThread; // [rsp+30h] [rbp-20h]
  struct _KPRCB *v56; // [rsp+80h] [rbp+30h] BYREF
  int v57; // [rsp+90h] [rbp+40h]
  __int64 v58; // [rsp+98h] [rbp+48h] BYREF

  PriorityFloorSummary = a1->PriorityFloorSummary;
  v4 = 0;
  v56 = 0LL;
  v58 = 0LL;
  v57 = 0;
  if ( PriorityFloorSummary )
  {
    _BitScanReverse((unsigned int *)&v28, PriorityFloorSummary);
    v57 = v28;
    if ( a3 < v28 )
      a3 = v28;
  }
  v7 = a3;
  if ( a1->Priority != a3 )
  {
    v8 = KiAcquireThreadStateLock(a1, &v56, &v58);
    Priority = a1->Priority;
    v10 = 0;
    if ( v8 == 2 )
    {
      v11 = v56;
      NextThread = v56->NextThread;
      p_NextThread = &v56->NextThread;
      KiUpdateThreadPriority((__int64)v56, (__int64)a1, (PVOID *)v7, NextThread == 0LL);
      if ( (int)v7 >= Priority )
      {
        if ( (int)v7 > Priority && !NextThread )
        {
          if ( a1->WaitBlockFill6[68] == 2 )
          {
            v4 = v7;
            KiUpdateSharedReadyQueueAffinityThread(0LL, (__int64)a1);
            v14 = v56;
            goto LABEL_12;
          }
          goto LABEL_23;
        }
LABEL_24:
        KiUpdateSharedReadyQueueAffinityThread(0LL, (__int64)a1);
        KiReleaseThreadStateLock(v23, v11, v58);
        if ( v10 && KeGetPcr()->Prcb.Number != v56->Number )
          KiSendSoftwareInterrupt();
        return 1;
      }
      if ( NextThread )
        goto LABEL_24;
      v11 = v56;
      if ( a1->WaitBlockFill6[68] != 2 )
      {
        if ( v56->ReadySummary >> (v7 + 1) )
          a1->WaitRegister.Flags |= 0x10u;
        goto LABEL_24;
      }
      ready = KiSelectReadyThreadEx(v56, a1, 0LL);
      v27 = ready;
      if ( !ready )
        goto LABEL_24;
      p_PriorityState = &v11->PriorityState;
      PriorityState = (unsigned __int8 *)v11->PriorityState;
      if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
      {
        if ( *(char *)(ready + 195) < 16 )
        {
          if ( *(_QWORD *)(ready + 104) && (v30 = *(_QWORD *)(ready + 104)) != 0 )
          {
            v11 = v56;
            v31 = v56->ScbOffset + v30;
            if ( v31 && (unsigned int)KiGetThreadEffectiveRankNonZero(ready, v31, v26, 0, 0LL) )
            {
              v18 = 1;
              goto LABEL_16;
            }
          }
          else
          {
            v11 = v56;
          }
        }
        v18 = *(_BYTE *)(v27 + 195);
      }
      else
      {
        v18 = *(_BYTE *)(ready + 195);
      }
LABEL_16:
      v19 = v18 & 0x7F | (*(_BYTE *)(v27 + 119) << 7);
      *PriorityState = v19;
      SchedulerAssist = v11->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( (_KTHREAD *)v27 == v11->IdleThread )
          v50 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v50 = v19 & 0x7F;
        KiSetSchedulerAssistPriority(SchedulerAssist, v50, 0LL);
      }
      v21 = *p_PriorityState;
      if ( KeHeteroSystem )
      {
        v51 = *(_DWORD *)(v27 + 80);
        v52 = (v21[64].AllFields ^ *(_BYTE *)(v27 + 512)) & 7 ^ v21[64].AllFields;
        v53 = (v52 ^ (8 * *(_BYTE *)(v27 + 516))) & 0x38 ^ v52;
        if ( v51 <= *(_DWORD *)(v27 + 84) )
          v51 = *(_DWORD *)(v27 + 84);
        v54 = 64;
        if ( v51 < KiDynamicHeteroCpuPolicyExpectedCycles )
          v54 = 0;
        v21[64].AllFields = v54 | v53 & 0xBF;
      }
      *p_NextThread = (_KTHREAD *)v27;
      v22 = v11->SchedulerAssist;
      if ( v22 )
        v22[16] = (_KTHREAD *)v27 == v11->IdleThread;
      if ( *(_BYTE *)(v27 + 388) == 1 )
        *(_DWORD *)(v27 + 132) = *(_DWORD *)(v27 + 132) - *(_DWORD *)(v27 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v27 + 388) = 3;
      v10 = 1;
LABEL_23:
      v11 = v56;
      goto LABEL_24;
    }
    if ( v8 == 1 )
    {
      KiRemoveThreadFromAnyReadyQueue((__int64)v56, v58, (__int64)a1, Priority);
      KiUpdateThreadPriority(0LL, (__int64)a1, (PVOID *)v7, 0);
      KiPrepareReadyThreadForRescheduling((__int64)a1, v7, a2);
      goto LABEL_35;
    }
    if ( v8 != 3 )
    {
      KiUpdateThreadPriority(0LL, (__int64)a1, (PVOID *)v7, 0);
LABEL_35:
      KiUpdateSharedReadyQueueAffinityThread(0LL, (__int64)a1);
      KiReleaseThreadStateLock(v29, v56, v58);
      return 1;
    }
    v15 = v56;
    KiUpdateThreadPriority((__int64)v56, (__int64)a1, (PVOID *)v7, 1);
    if ( (int)v7 >= Priority )
    {
      v4 = v7;
LABEL_11:
      KiUpdateSharedReadyQueueAffinityThread(0LL, (__int64)a1);
      v14 = v15;
LABEL_12:
      KiReleaseThreadStateLock(v13, v14, v58);
      if ( v4 > 0 )
        KiHvEnlightenedGuestPriorityKick(KeGetCurrentPrcb(), v56, (unsigned int)v4);
      return 1;
    }
    v32 = KiSelectReadyThreadEx(v15, a1, 0LL);
    v34 = v32;
    if ( !v32 )
      goto LABEL_11;
    v35 = &v15->PriorityState;
    v36 = (unsigned __int8 *)v15->PriorityState;
    if ( (*(_BYTE *)(v32 + 2) & 4) == 0 )
    {
      v37 = *(_BYTE *)(v32 + 195);
LABEL_62:
      v40 = v37 & 0x7F | (*(_BYTE *)(v34 + 119) << 7);
      *v36 = v40;
      v41 = v15->SchedulerAssist;
      if ( v41 )
      {
        if ( (_KTHREAD *)v34 == v15->IdleThread )
          v42 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v42 = v40 & 0x7F;
        KiSetSchedulerAssistPriority(v41, v42, 0LL);
      }
      v43 = *v35;
      if ( KeHeteroSystem )
      {
        v44 = *(_DWORD *)(v34 + 80);
        v45 = (v43[64].AllFields ^ *(_BYTE *)(v34 + 512)) & 7 ^ v43[64].AllFields;
        v46 = (v45 ^ (8 * *(_BYTE *)(v34 + 516))) & 0x38 ^ v45;
        if ( v44 <= *(_DWORD *)(v34 + 84) )
          v44 = *(_DWORD *)(v34 + 84);
        v47 = 64;
        if ( v44 < KiDynamicHeteroCpuPolicyExpectedCycles )
          v47 = 0;
        v43[64].AllFields = v47 | v46 & 0xBF;
      }
      v48 = v15->SchedulerAssist;
      v49 = (_KTHREAD *)v34 == v15->IdleThread;
      v15->NextThread = (_KTHREAD *)v34;
      if ( v48 )
        v48[16] = v49;
      if ( *(_BYTE *)(v34 + 388) == 1 )
        *(_DWORD *)(v34 + 132) = *(_DWORD *)(v34 + 132) - *(_DWORD *)(v34 + 436) + MEMORY[0xFFFFF78000000320];
      *(_BYTE *)(v34 + 388) = 3;
      KiInsertDeferredReadyList(a2, (__int64)a1);
      v15 = v56;
      goto LABEL_11;
    }
    if ( *(char *)(v32 + 195) < 16 )
    {
      if ( *(_QWORD *)(v32 + 104) && (v38 = *(_QWORD *)(v32 + 104)) != 0 )
      {
        v15 = v56;
        v39 = v56->ScbOffset + v38;
        if ( v39 && (unsigned int)KiGetThreadEffectiveRankNonZero(v32, v39, v33, 0, 0LL) )
        {
          v37 = 1;
          goto LABEL_62;
        }
      }
      else
      {
        v15 = v56;
      }
    }
    v37 = *(_BYTE *)(v34 + 195);
    goto LABEL_62;
  }
  return 0;
}
