/*
 * XREFs of KiComputeGroupSchedulingRank @ 0x140305708
 * Callers:
 *     KiQueueReadyThread @ 0x1402344F0 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x14023F3D0 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140307E24 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     KiCheckForEffectivePriorityChange @ 0x1402064E4 (KiCheckForEffectivePriorityChange.c)
 *     KiRemoveSchedulingGroupQueue @ 0x140206878 (KiRemoveSchedulingGroupQueue.c)
 *     KiResortScbQueue @ 0x1403055D0 (KiResortScbQueue.c)
 *     KiCheckMaxOverQuotaTransition @ 0x140305858 (KiCheckMaxOverQuotaTransition.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403486B0 (KeInterlockedSetProcessorAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall KiComputeGroupSchedulingRank(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v7; // al
  char v8; // dl
  _QWORD *v9; // r9
  char v10; // r8
  char v11; // al
  char v12; // al
  __int64 v13; // r8
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // ecx
  volatile signed __int32 *v17; // rax
  bool v18; // zf
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r10
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v24; // r8
  int v25; // eax

  v7 = KiCheckMaxOverQuotaTransition(a4, a1);
  v8 = *(_BYTE *)(a4 + 112);
  v9 = (_QWORD *)(a4 + 8);
  v10 = v7;
  if ( (v8 & 0x24) != 0 || *(_QWORD *)a4 < *v9 )
  {
    v11 = 0;
  }
  else
  {
    v8 |= 4u;
    v11 = 1;
    *(_BYTE *)(a4 + 112) = v8;
  }
  if ( (v8 & 0x20) == 0 && v11 || (v8 & 0x10) == 0 && v10 )
  {
    *(_BYTE *)(a4 + 112) = v8 | 4;
    v13 = *(unsigned int *)(a1 + 8);
    v14 = (unsigned __int64)(KiCycleDivisorLongTerm * v13) >> 7;
    v15 = *(_QWORD *)(a4 + 32) % v14;
    v16 = *(_QWORD *)(a4 + 32) / v14 + 1;
    v17 = *(volatile signed __int32 **)(a4 + 120);
    *(_DWORD *)(a4 + 116) = v16;
    if ( v17 )
      _InterlockedExchangeAdd(v17, v16);
    *(_QWORD *)(a4 + 24) = *v9 + ((unsigned __int64)(KiCycleDivisorShortTerm * v13) >> 7);
    KiCheckForEffectivePriorityChange(a2, v15, a4);
  }
  v12 = *(_BYTE *)(a4 + 112);
  if ( (v12 & 1) != 0 )
  {
    if ( (v12 & 2) != 0 )
      KiRemoveSchedulingGroupQueue((_RTL_RB_TREE *)a2, a4, 1);
    else
      KiResortScbQueue((_RTL_RB_TREE *)a2, a4, 1);
  }
  if ( (*(_BYTE *)(a4 + 112) & 4) != 0 && !*(_BYTE *)(a2 + 33113) )
  {
    KeInterlockedSetProcessorAffinityEx(KiGroupSchedulingOverQuotaMask, *(unsigned int *)(a2 + 36));
    v18 = KiClockTimerPerCpuTickScheduling == 0;
    *(_BYTE *)(a2 + 33113) = 1;
    if ( !v18 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        if ( CurrentIrql == 15 )
          LODWORD(v21) = 0x8000;
        else
          v21 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
        SchedulerAssist[5] |= v21;
      }
      *(_BYTE *)(a2 + 36452) &= ~2u;
      if ( (_DWORD)KiIrqlFlags )
      {
        v22 = KeGetCurrentIrql();
        if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v24 = CurrentPrcb->SchedulerAssist;
          v25 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v18 = (v25 & v24[5]) == 0;
          v24[5] &= v25;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      __writecr8(CurrentIrql);
    }
  }
}
