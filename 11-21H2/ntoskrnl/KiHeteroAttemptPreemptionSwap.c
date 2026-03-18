/*
 * XREFs of KiHeteroAttemptPreemptionSwap @ 0x140573DBC
 * Callers:
 *     KiHeteroChooseTargetProcessor @ 0x14045AFC6 (KiHeteroChooseTargetProcessor.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiFindBiasedSetMember @ 0x14056AAA4 (KiFindBiasedSetMember.c)
 *     KiEvaluatePreemptionSwapTarget @ 0x140573B50 (KiEvaluatePreemptionSwapTarget.c)
 *     KiHeteroScanQueueForPreemptionSwapTarget @ 0x140574294 (KiHeteroScanQueueForPreemptionSwapTarget.c)
 *     KiIsThreadEligibleForPreemptionSwap @ 0x140574648 (KiIsThreadEligibleForPreemptionSwap.c)
 */

__int64 __fastcall KiHeteroAttemptPreemptionSwap(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v22; // eax
  _DWORD *v23; // rcx
  int v24; // eax
  struct _KPRCB *v25; // rcx
  _DWORD *v26; // rdx
  int v27; // eax
  int v29[10]; // [rsp+30h] [rbp-28h] BYREF

  v11 = 0;
  if ( (unsigned __int8)KiIsThreadEligibleForPreemptionSwap(a5) )
  {
    v12 = *(_QWORD *)(a6 + 8);
    if ( (v12 & *(_QWORD *)(a4 + 200)) == 0 || (v9 & *(_QWORD *)(a4 + 34912)) != *(_QWORD *)(a4 + 34912) )
    {
      v13 = v12 & ~v9;
      if ( (v9 & *(_QWORD *)(a4 + 34912)) == *(_QWORD *)(a4 + 34912) )
        v13 &= *(_QWORD *)(v10 + 24);
      if ( v13 )
      {
        if ( (v13 & *(_QWORD *)(a2 + 34880)) != 0 )
        {
          v14 = a2;
        }
        else
        {
          v15 = *(unsigned __int8 *)(a2 + 208);
          v14 = KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64 * v15
                                                                    + (unsigned int)KiFindBiasedSetMember(
                                                                                      v13,
                                                                                      *(unsigned __int8 *)(a2 + 209))]];
        }
        v17 = KiHeteroScanQueueForPreemptionSwapTarget(*(_QWORD *)(v14 + 34888), a2, a4, v13, (__int64)a5);
        if ( v17 )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v29[0] = 0;
          while ( 1 )
          {
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            if ( SchedulerAssist )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v22 = SchedulerAssist[6];
                SchedulerAssist[6] = v22 + 1;
                if ( v22 == -1 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            if ( !_interlockedbittestandset64((volatile signed __int32 *)(v17 + 48), 0LL) )
              break;
            v23 = CurrentPrcb->SchedulerAssist;
            if ( v23 )
            {
              if ( CurrentPrcb->NestingLevel <= 1u )
              {
                v24 = v23[6] - 1;
                v23[6] = v24;
                if ( !v24 )
                  KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
              }
            }
            do
              KeYieldProcessorEx(v29, v16, v18, v19);
            while ( *(_QWORD *)(v17 + 48) );
          }
          if ( KiEvaluatePreemptionSwapTarget(v17, a4, a5) )
          {
            *(_DWORD *)(a7 + 8) = (*(_BYTE *)(v17 + 35) & 1) == 0;
            *(_QWORD *)a7 = v17;
            *(_DWORD *)(a7 + 12) = 1;
            return v11;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v17 + 48), 0LL);
          v25 = KeGetCurrentPrcb();
          v26 = v25->SchedulerAssist;
          if ( v26 )
          {
            if ( v25->NestingLevel <= 1u )
            {
              v27 = v26[6] - 1;
              v26[6] = v27;
              if ( !v27 )
                KiRemoveSystemWorkPriorityKick((__int64)v25);
            }
          }
        }
      }
    }
  }
  return (unsigned int)-1073741823;
}
