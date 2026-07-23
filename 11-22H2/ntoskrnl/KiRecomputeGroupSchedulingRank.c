/*
 * XREFs of KiRecomputeGroupSchedulingRank @ 0x140364F20
 * Callers:
 *     KiQueueReadyThread @ 0x1402344F0 (KiQueueReadyThread.c)
 *     KiSwapThread @ 0x14023F3D0 (KiSwapThread.c)
 *     KiGroupSchedulingQuantumEnd @ 0x140307E24 (KiGroupSchedulingQuantumEnd.c)
 * Callees:
 *     KiResortScbQueue @ 0x1403055D0 (KiResortScbQueue.c)
 *     KiChargeSchedulingGroupCycleTime @ 0x140308808 (KiChargeSchedulingGroupCycleTime.c)
 */

void __fastcall KiRecomputeGroupSchedulingRank(__int64 a1, __int64 a2, _RTL_RB_TREE *a3)
{
  unsigned __int64 v6; // r9
  volatile signed __int32 *v7; // rax
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rtt
  volatile signed __int32 *v12; // rcx

  KiChargeSchedulingGroupCycleTime((volatile signed __int64 *)a1, (_QWORD *)a2);
  v6 = KiCycleDivisorShortTerm * *(unsigned int *)(a1 + 8);
  ++*(_DWORD *)(a2 + 116);
  v7 = *(volatile signed __int32 **)(a2 + 120);
  v8 = v6 >> 7;
  *(_QWORD *)(a2 + 24) += v8;
  if ( v7 )
    _InterlockedIncrement(v7);
  v9 = *(_QWORD *)(a2 + 24);
  if ( *(_QWORD *)a2 > v9 )
  {
    v11 = v8 + *(_QWORD *)a2 - v9 - 1;
    v10 = v11 / v8;
    *(_DWORD *)(a2 + 116) += v11 / v8;
    *(_QWORD *)(a2 + 24) = v9 + v8 * (unsigned int)(v11 / v8);
    v12 = *(volatile signed __int32 **)(a2 + 120);
    if ( v12 )
      _InterlockedExchangeAdd(v12, v10);
  }
  if ( (*(_BYTE *)(a2 + 112) & 1) != 0 )
    KiResortScbQueue(a3, a2, 1);
}
