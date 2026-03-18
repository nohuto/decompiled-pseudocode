/*
 * XREFs of KiTransitionSchedulingGroupGeneration @ 0x140291710
 * Callers:
 *     KiGroupSchedulingGenerationEnd @ 0x140291380 (KiGroupSchedulingGenerationEnd.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1402103E0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiInsertNonMaxOverQuotaScb @ 0x140210A70 (KiInsertNonMaxOverQuotaScb.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x140291A50 (KiChargeSchedulingGroupCycleTime.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x140291A94 (KiMoveScbThreadsToNewReadylist.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403B49A0 (KeInterlockedClearProcessorAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiSetSchedulerAssistPriority @ 0x14045B7FC (KiSetSchedulerAssistPriority.c)
 *     KiSetClockTimer @ 0x14056CF48 (KiSetClockTimer.c)
 */

void __fastcall KiTransitionSchedulingGroupGeneration(__int64 a1, unsigned __int64 a2, char a3)
{
  unsigned int v4; // r14d
  unsigned __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // edx
  bool v8; // zf
  __int64 v9; // r13
  _QWORD *v10; // r12
  _QWORD *v11; // rsi
  char v12; // al
  _QWORD *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  char *v16; // rbp
  volatile signed __int32 *v17; // rdx
  char v18; // r10
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  _BYTE *v24; // rbp
  char v25; // cl
  char v26; // al
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rdx
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r11
  unsigned __int8 v33; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v35; // eax
  __int64 v36; // rdx
  unsigned int v37; // edx
  char v38; // al
  char v39; // al
  char v40; // cl
  __int64 v41; // rdx
  char v42; // [rsp+70h] [rbp+8h]

  v4 = 1;
  v5 = *(_QWORD *)(a1 + 34520);
  if ( a2 > v5 )
    v4 = (a2 - 1 + (unsigned int)KiGenerationTicks - v5) / (unsigned int)KiGenerationTicks + 1;
  v6 = (unsigned int)KeMaximumIncrement;
  v7 = KiGenerationEndTick * KeMaximumIncrement;
  v8 = KiClockTimerPerCpuTickScheduling == 0;
  *(_QWORD *)(a1 + 34520) = KiGenerationEndTick;
  if ( !v8 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    KiSetClockTimer(a1, v7, v6, 4, 1, 0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v33 = KeGetCurrentIrql();
        if ( v33 <= 0xFu && CurrentIrql <= 0xFu && v33 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v6 = (__int64)CurrentPrcb->SchedulerAssist;
          v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v8 = (v35 & *(_DWORD *)(v6 + 20)) == 0;
          *(_DWORD *)(v6 + 20) &= v35;
          if ( v8 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  *(_QWORD *)(a1 + 32560) = 0LL;
  *(_QWORD *)(a1 + 32568) = 0LL;
  v9 = *(_QWORD *)(a1 + 16);
  v42 = 0;
  if ( !v9 )
    v9 = *(_QWORD *)(a1 + 8);
  v10 = *(_QWORD **)(v9 + 104);
  if ( v10 )
    v10 = (_QWORD *)((char *)v10 + *(unsigned int *)(a1 + 216));
  v11 = *(_QWORD **)(a1 + 34184);
  if ( v11 == (_QWORD *)(a1 + 34184) )
  {
LABEL_26:
    if ( *(_BYTE *)(a1 + 33113) )
    {
      v41 = *(unsigned int *)(a1 + 36);
      *(_BYTE *)(a1 + 33113) = 0;
      KeInterlockedClearProcessorAffinityEx(KiGroupSchedulingOverQuotaMask, v41, v6);
    }
    return;
  }
  v12 = v4;
  do
  {
    v13 = v11 - 9;
    if ( v4 >= 0x40 )
      v14 = 0LL;
    else
      v14 = v13[6] << v12;
    v15 = v14 | 1;
    if ( (v13[14] & 4) == 0 )
      v15 = v14;
    v13[6] = v15;
    v16 = (char *)v13 - *(unsigned int *)(a1 + 216);
    KiChargeSchedulingGroupCycleTime(v16, v11 - 9);
    if ( !a3 )
    {
      if ( *(_BYTE *)(a1 + 33) )
      {
        if ( (v13[14] & 0x10) == 0 )
        {
          v21 = *((_QWORD *)v16 + 5);
          v22 = v21 + _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 6, v21);
          v23 = *((_QWORD *)v16 + 5);
          if ( v22 > v23 )
            _InterlockedExchange64((volatile __int64 *)v16 + 6, v23);
        }
      }
    }
    if ( v13[1] != v13[2] )
    {
      v6 = (unsigned int)KiGroupSchedulingNumerator * (*v13 >> 10)
         + ((v13[4] * (unsigned __int64)(unsigned int)(1024 - KiGroupSchedulingNumerator)) >> 10);
      v13[4] = v6;
    }
    v17 = (volatile signed __int32 *)v13[15];
    v18 = 0;
    *v13 = 0LL;
    v13[5] = 0LL;
    if ( v17 )
    {
      v19 = ((*((unsigned __int8 *)v13 + 112) >> 3) & 1) - *((_DWORD *)v13 + 29);
      if ( (int)(v19 + _InterlockedExchangeAdd(v17, v19)) < 0 )
        *(_DWORD *)v13[15] = 0;
    }
    v20 = *((unsigned __int8 *)v13 + 112);
    v13[3] = 0LL;
    *((_BYTE *)v13 + 112) = v20 & 0xFC;
    *((_DWORD *)v13 + 29) = (v20 >> 3) & 1;
    *(_OWORD *)(v13 + 11) = 0LL;
    v13[13] = 0LL;
    v13[49] = 0LL;
    v13[50] = 0LL;
    if ( !*((_DWORD *)v13 + 29) )
    {
      *((_BYTE *)v13 + 112) &= ~4u;
      if ( v13 == v10 )
      {
        v24 = *(_BYTE **)(a1 + 56);
        if ( (*(_BYTE *)(v9 + 2) & 4) != 0 )
        {
          if ( *(char *)(v9 + 195) < 16
            && *(_QWORD *)(v9 + 104)
            && (v29 = *(_QWORD *)(v9 + 104)) != 0
            && (v30 = *(unsigned int *)(a1 + 216) + v29) != 0
            && (unsigned int)KiGetThreadEffectiveRankNonZero(v9, v30, v6, 0, 0LL) )
          {
            v25 = 1;
            v18 = 0;
          }
          else
          {
            v25 = *(_BYTE *)(v9 + 195);
            v18 = 0;
          }
        }
        else
        {
          v25 = *(_BYTE *)(v9 + 195);
        }
        v26 = v25 & 0x7F | (*(_BYTE *)(v9 + 119) << 7);
        *v24 = v26;
        v27 = *(_QWORD *)(a1 + 35000);
        if ( v27 )
        {
          if ( v9 == *(_QWORD *)(a1 + 24) )
            v36 = (unsigned int)KiVpThreadSystemWorkPriority;
          else
            v36 = v26 & 0x7F;
          KiSetSchedulerAssistPriority(v27, v36, 0LL);
        }
        v28 = *(_QWORD *)(a1 + 56);
        if ( KeHeteroSystem )
        {
          v37 = *(_DWORD *)(v9 + 80);
          v38 = (*(_BYTE *)(v28 + 64) ^ *(_BYTE *)(v9 + 512)) & 7 ^ *(_BYTE *)(v28 + 64);
          v39 = (v38 ^ (8 * *(_BYTE *)(v9 + 516))) & 0x38 ^ v38;
          if ( v37 <= *(_DWORD *)(v9 + 84) )
            v37 = *(_DWORD *)(v9 + 84);
          v40 = 64;
          if ( v37 < KiDynamicHeteroCpuPolicyExpectedCycles )
            v40 = v18;
          *(_BYTE *)(v28 + 64) = v40 | v39 & 0xBF;
        }
      }
LABEL_23:
      KiMoveScbThreadsToNewReadylist(v11 - 9, 0LL, a1, 0LL);
      goto LABEL_24;
    }
    if ( a3 )
      goto LABEL_23;
    if ( *((_WORD *)v13 + 57) )
    {
      KiInsertNonMaxOverQuotaScb((__int64)(v11 - 9), a1, 0LL);
      v42 = 1;
    }
LABEL_24:
    v11 = (_QWORD *)*v11;
    v12 = v4;
  }
  while ( v11 != (_QWORD *)(a1 + 34184) );
  if ( !v42 )
    goto LABEL_26;
}
