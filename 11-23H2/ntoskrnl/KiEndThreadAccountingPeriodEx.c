/*
 * XREFs of KiEndThreadAccountingPeriodEx @ 0x140248520
 * Callers:
 *     KiSetLegacyAffinityThread @ 0x140201F04 (KiSetLegacyAffinityThread.c)
 *     KeSetUserAffinityThread @ 0x1402028C4 (KeSetUserAffinityThread.c)
 *     KeBoostPriorityThread @ 0x1402039B4 (KeBoostPriorityThread.c)
 *     KeSetSchedulingGroupRankBias @ 0x140205AD8 (KeSetSchedulingGroupRankBias.c)
 *     KiExitDispatcher @ 0x14023CE40 (KiExitDispatcher.c)
 *     KeYieldExecution @ 0x140246AC0 (KeYieldExecution.c)
 *     KiEndThreadAccountingPeriod @ 0x140248500 (KiEndThreadAccountingPeriod.c)
 *     KiDispatchInterrupt @ 0x140249600 (KiDispatchInterrupt.c)
 *     KeRemoveQueueEx @ 0x1402AA2D0 (KeRemoveQueueEx.c)
 *     KiProcessDeferredReadyList @ 0x1402B1100 (KiProcessDeferredReadyList.c)
 *     KiDirectSwitchThread @ 0x1402B1B30 (KiDirectSwitchThread.c)
 *     KiSetQuantumTargetThread @ 0x1402B2D80 (KiSetQuantumTargetThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1402B2F20 (KiEndThreadCycleAccumulation.c)
 *     KeSetBasePriorityThread @ 0x1402BA030 (KeSetBasePriorityThread.c)
 *     KiCheckForThreadDispatch @ 0x1402BCD08 (KiCheckForThreadDispatch.c)
 *     KeRemovePriQueue @ 0x1402BF340 (KeRemovePriQueue.c)
 *     KiAbThreadUnboostCpuPriority @ 0x140318150 (KiAbThreadUnboostCpuPriority.c)
 *     KiReadyOutSwappedThreads @ 0x14034D394 (KiReadyOutSwappedThreads.c)
 *     KeRevertToUserMultipleGroupAffinityThread @ 0x14036C2B8 (KeRevertToUserMultipleGroupAffinityThread.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x14036CD14 (KeSetSystemMultipleGroupAffinityThread.c)
 *     KeSetCpuSetsProcess @ 0x14039CD04 (KeSetCpuSetsProcess.c)
 *     KeUpdateThreadCpuSets @ 0x14039E2C8 (KeUpdateThreadCpuSets.c)
 *     KeSetUserGroupAffinityThread @ 0x1403AAF8C (KeSetUserGroupAffinityThread.c)
 *     KeRecomputeCpuSetAffinityProcess @ 0x140575794 (KeRecomputeCpuSetAffinityProcess.c)
 *     KeSetSelectedCpuSetsThread @ 0x140576070 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x140577EFC (KiSetHeteroPolicyThread.c)
 * Callees:
 *     PoGetFrequencyBucket @ 0x140249CF0 (PoGetFrequencyBucket.c)
 *     KiEndCounterAccumulation @ 0x140574804 (KiEndCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x140578BD0 (KiUpdateThreadHgsFeedback.c)
 */

void __fastcall KiEndThreadAccountingPeriodEx(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int8 a4)
{
  char v4; // bl
  int v5; // ebp
  unsigned __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v10; // rax
  __int64 v11; // r10
  unsigned int v12; // ecx
  __int64 v13; // rdx
  __int64 v14; // r9
  unsigned int FrequencyBucket; // eax
  __int64 v16; // r9
  __int64 v17; // r11
  char v18; // cl
  __int64 v19; // r10
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rcx
  _QWORD *v23; // rdx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  int v27; // eax
  __int64 v28; // rcx
  _QWORD *i; // rcx
  __int64 v30; // rax
  unsigned int v31; // r8d
  unsigned int v32; // ecx
  __int64 v33; // rcx
  __int64 v34; // [rsp+58h] [rbp+10h]

  v4 = *(_BYTE *)(a2 + 2);
  v5 = 0;
  v7 = a3;
  v8 = a2;
  if ( v4 < 0 )
  {
    v10 = *(_QWORD *)(a2 + 544);
    a3 = *(_QWORD *)(a1 + 34480);
    v11 = (*(_QWORD *)(v10 + 1024) >> 4) & 0x1FFLL;
    LODWORD(v10) = ((unsigned int)*(_QWORD *)(v10 + 1024) >> 13) & 0x3FFFF;
    _BitScanReverse(&v12, v10);
    a2 = *(_QWORD *)(*(_QWORD *)(a3 + 8LL * (v12 - 2)) + 8LL * ((unsigned int)v10 ^ (1 << v12)) + 8);
    *(_QWORD *)(a2 + 8 * v11) += v7;
    v4 &= ~0x80u;
  }
  if ( (v4 & 0x10) != 0 )
  {
    a2 = a1 + 8LL * *(unsigned __int8 *)(v8 + 124);
    *(_QWORD *)(a2 + 33160) += v7;
    v4 &= ~0x10u;
  }
  if ( (v4 & 0x20) != 0 )
  {
    v14 = *(_QWORD *)(v8 + 1608);
    if ( v14 )
    {
      FrequencyBucket = PoGetFrequencyBucket(a1, a2, a3, v14);
      if ( KeHeteroSystem )
        v18 = *(_BYTE *)(a1 + 34056);
      else
        v18 = *(_BYTE *)(a1 + 34059);
      v19 = FrequencyBucket;
      v20 = v17;
      if ( !v18 )
        v20 = 0LL;
      v21 = v20 + 2LL * FrequencyBucket;
      v22 = *(_QWORD *)(v16 + 8 * v21);
      v23 = (_QWORD *)(v16 + 8 * v21);
      v24 = KiTimelineBitmapTime;
      *v23 = v7 + v22;
      v25 = *(_DWORD *)(v16 + 192);
      if ( v24 > v25 )
      {
        LODWORD(v34) = v24;
        if ( v24 - v25 >= 0x20 )
          HIDWORD(v34) = v17;
        else
          HIDWORD(v34) = v17 | (*(_DWORD *)(v16 + 196) << (v24 - v25));
        *(_QWORD *)(v16 + 192) = v34;
      }
      else
      {
        v26 = v25 - v24;
        if ( v26 < 0x20 )
          *(_DWORD *)(v16 + 196) |= (_DWORD)v17 << v26;
      }
      if ( !KiEfficiencyClassSystem )
      {
        v27 = (unsigned __int8)*(_DWORD *)(v8 + 512);
        if ( v27 == 2 || (unsigned int)(v27 - 5) <= 1 )
          *(_QWORD *)(v16 + 16 * v19 + 8) += v7;
      }
      if ( *(_QWORD *)(v8 + 1552) )
      {
        *(_QWORD *)(v16 + 8 * (v20 + 2 * (v19 + 8))) += v7;
        _InterlockedExchangeAdd64(
          (volatile signed __int64 *)(*(_QWORD *)(*(_QWORD *)(v8 + 1552) + 1608LL) + 8 * (v20 + 2 * (v19 + 4))),
          v7);
      }
    }
    v4 &= ~0x20u;
  }
  if ( (v4 & 0x40) != 0 )
  {
    v30 = *(_QWORD *)(v8 + 968);
    if ( v30 )
      *(_BYTE *)(v30 + 64) = 0;
  }
  if ( KiHgsPlusEnabled )
    KiUpdateThreadHgsFeedback(a1, v8, v7, a4);
  v13 = *(_QWORD *)(a1 + 33200);
  if ( v13 )
  {
    if ( *(_BYTE *)(v8 + 125) )
    {
      v31 = (unsigned __int8)*(_DWORD *)(v8 + 512);
      if ( v31 < 7 )
      {
        v32 = *(_DWORD *)(v8 + 80);
        if ( v32 <= *(_DWORD *)(v8 + 84) )
          v32 = *(_DWORD *)(v8 + 84);
        LOBYTE(v5) = v32 >= KiDynamicHeteroCpuPolicyExpectedCycles;
        v33 = *(unsigned __int8 *)(v8 + 516) + (unsigned int)KiHgsPlusConfiguration * (v5 + 2 * v31);
        *(_QWORD *)(v13 + 8 * v33) += v7;
      }
    }
  }
  if ( (v4 & 0xBE) != 0 )
  {
    v28 = *(_QWORD *)(v8 + 104);
    if ( v28 )
    {
      for ( i = (_QWORD *)(*(unsigned int *)(a1 + 216) + v28); i; i = (_QWORD *)i[51] )
        *i += v7;
    }
    if ( (*(_BYTE *)(v8 + 2) & 8) != 0
      && (*(_QWORD *)(*(_QWORD *)(v8 + 576) + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 192) + 136LL) + 8) & *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL)) != *(_QWORD *)(*(_QWORD *)(a1 + 192) + 128LL) )
    {
      *(_QWORD *)(a1 + 33192) += v7;
    }
    if ( *(_QWORD *)(v8 + 360) )
      KiEndCounterAccumulation(v8);
  }
}
