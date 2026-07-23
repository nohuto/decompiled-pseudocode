/*
 * XREFs of KiTransitionSchedulingGroupGeneration @ 0x14030889C
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x140308538 (KiGroupSchedulingGenerationEnd.c)
 *     KiParkCurrentProcessor @ 0x14057E38C (KiParkCurrentProcessor.c)
 * Callees:
 *     KiSetClockTimer @ 0x1402C2828 (KiSetClockTimer.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x140308BC8 (KiChargeSchedulingGroupCycleTime.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x140308C0C (KiMoveScbThreadsToNewReadylist.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x140308D7C (KiInsertNonMaxOverQuotaScb.c)
 *     KiIsThreadRankNonZero @ 0x140309270 (KiIsThreadRankNonZero.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x140341B70 (KeInterlockedClearProcessorAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x140410704 (KiSetSchedulerAssistPriority.c)
 */

void __fastcall KiTransitionSchedulingGroupGeneration(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned int v5; // r15d
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // r11d
  __int64 v9; // r10
  __int64 v10; // r10
  unsigned __int8 CurrentIrql; // bl
  __int64 v12; // rbp
  _QWORD *v13; // r12
  _QWORD *v14; // r14
  char v15; // al
  _QWORD *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rcx
  char *v19; // rbx
  char v20; // r8
  volatile signed __int32 *v21; // rdx
  unsigned int v22; // ecx
  unsigned int v23; // ecx
  char v24; // al
  char *v25; // r15
  char v26; // bl
  char v27; // al
  char v28; // bl
  __int64 v29; // rcx
  bool v30; // zf
  char v31; // al
  _DWORD *SchedulerAssist; // r9
  __int64 v33; // rdx
  unsigned __int8 v34; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v36; // r8
  int v37; // eax
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rdx
  int v43; // [rsp+80h] [rbp+8h]
  char v44; // [rsp+88h] [rbp+10h]
  char i; // [rsp+90h] [rbp+18h]

  v5 = 1;
  v6 = *(_QWORD *)(a1 + 34520);
  v43 = 1;
  if ( a3 > v6 )
  {
    v5 = (a3 + (unsigned int)KiGenerationTicks - v6 - 1) / (unsigned int)KiGenerationTicks + 1;
    v43 = v5;
  }
  v7 = KiGenerationEndTick;
  v8 = KeMaximumIncrement;
  v9 = KeMaximumIncrement;
  *(_QWORD *)(a1 + 34520) = KiGenerationEndTick;
  v10 = v7 * v9;
  if ( KiClockTimerPerCpuTickScheduling )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 15 )
        LODWORD(v33) = 0x8000;
      else
        v33 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
      SchedulerAssist[5] |= v33;
    }
    KiSetClockTimer(a1, v10, v8, 4, 1, 0);
    if ( (_DWORD)KiIrqlFlags )
    {
      v34 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v36 = CurrentPrcb->SchedulerAssist;
        v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v30 = (v37 & v36[5]) == 0;
        v36[5] &= v37;
        if ( v30 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
  }
  *(_QWORD *)(a1 + 32560) = 0LL;
  *(_QWORD *)(a1 + 32568) = 0LL;
  v12 = *(_QWORD *)(a1 + 16);
  v44 = 0;
  if ( !v12 )
    v12 = *(_QWORD *)(a1 + 8);
  v13 = *(_QWORD **)(v12 + 104);
  if ( v13 )
    v13 = (_QWORD *)((char *)v13 + *(unsigned int *)(a1 + 216));
  v14 = *(_QWORD **)(a1 + 34184);
  if ( v14 != (_QWORD *)(a1 + 34184) )
  {
    v15 = v5;
    for ( i = v5; ; v15 = i )
    {
      v16 = v14 - 9;
      if ( v5 >= 0x40 )
        v17 = 0LL;
      else
        v17 = v16[6] << v15;
      v18 = v17 | 1;
      if ( (v16[14] & 4) == 0 )
        v18 = v17;
      v16[6] = v18;
      v19 = (char *)v16 - *(unsigned int *)(a1 + 216);
      KiChargeSchedulingGroupCycleTime(v19, v14 - 9);
      v20 = a4;
      if ( !a4 )
      {
        if ( *(_BYTE *)(a1 + 33) )
        {
          if ( (v16[14] & 0x10) == 0 )
          {
            v38 = *((_QWORD *)v19 + 5);
            v39 = _InterlockedExchangeAdd64((volatile signed __int64 *)v19 + 6, v38) + v38;
            v40 = *((_QWORD *)v19 + 5);
            if ( v39 > v40 )
              _InterlockedExchange64((volatile __int64 *)v19 + 6, v40);
          }
        }
      }
      if ( v16[1] != v16[2] )
      {
        v16[4] = (unsigned int)KiGroupSchedulingNumerator * (*v16 >> 10)
               + ((v16[4] * (unsigned __int64)(unsigned int)(1024 - KiGroupSchedulingNumerator)) >> 10);
        v20 = a4;
      }
      v21 = (volatile signed __int32 *)v16[15];
      *v16 = 0LL;
      v16[5] = 0LL;
      if ( v21 )
      {
        v22 = ((*((unsigned __int8 *)v16 + 112) >> 3) & 1) - *((_DWORD *)v16 + 29);
        if ( (int)(v22 + _InterlockedExchangeAdd(v21, v22)) < 0 )
          *(_DWORD *)v16[15] = 0;
      }
      v23 = *((unsigned __int8 *)v16 + 112);
      v16[3] = 0LL;
      *((_BYTE *)v16 + 112) = v23 & 0xFC;
      *((_DWORD *)v16 + 29) = (v23 >> 3) & 1;
      *(_OWORD *)(v16 + 11) = 0LL;
      v16[13] = 0LL;
      v16[49] = 0LL;
      v16[50] = 0LL;
      if ( !*((_DWORD *)v16 + 29) )
        break;
      if ( v20 )
        goto LABEL_26;
      if ( !*((_WORD *)v16 + 57) )
        goto LABEL_27;
      KiInsertNonMaxOverQuotaScb(v14 - 9, a1, 0LL);
      v24 = 1;
      v44 = 1;
LABEL_28:
      v14 = (_QWORD *)*v14;
      if ( v14 == (_QWORD *)(a1 + 34184) )
      {
        if ( v24 )
          return;
        goto LABEL_35;
      }
    }
    *((_BYTE *)v16 + 112) &= ~4u;
    if ( v16 == v13 )
    {
      v25 = *(char **)(a1 + 56);
      v26 = *v25;
      if ( (*(_BYTE *)(v12 + 2) & 4) != 0 )
      {
        v30 = (unsigned __int8)KiIsThreadRankNonZero(v12, a1) == 0;
        v31 = 1;
        if ( v30 )
          v31 = *(_BYTE *)(v12 + 195);
        v27 = v26 ^ v31;
      }
      else
      {
        v27 = *(_BYTE *)(v12 + 195) ^ v26;
      }
      v28 = v27 & 0x7F ^ v26;
      *v25 = v28;
      v29 = *(_QWORD *)(a1 + 35000);
      if ( v29 )
      {
        if ( v12 == *(_QWORD *)(a1 + 24) )
          v41 = (unsigned int)KiVpThreadSystemWorkPriority;
        else
          v41 = v28 & 0x7F;
        KiSetSchedulerAssistPriority(v29, v41, 0LL);
      }
      v5 = v43;
    }
LABEL_26:
    KiMoveScbThreadsToNewReadylist(v14 - 9, 0LL, a1, 0LL);
LABEL_27:
    v24 = v44;
    goto LABEL_28;
  }
LABEL_35:
  if ( *(_BYTE *)(a1 + 33113) )
  {
    v42 = *(unsigned int *)(a1 + 36);
    *(_BYTE *)(a1 + 33113) = 0;
    KeInterlockedClearProcessorAffinityEx(KiGroupSchedulingOverQuotaMask, v42);
  }
}
