/*
 * XREFs of KiRemoveThreadFromSharedReadyQueue @ 0x140243C70
 * Callers:
 *     KiSetThreadSchedulingGroup @ 0x140204900 (KiSetThreadSchedulingGroup.c)
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14020666C (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiQuantumEnd @ 0x1402487C0 (KiQuantumEnd.c)
 *     KiNormalPriorityReadyScan @ 0x140307080 (KiNormalPriorityReadyScan.c)
 * Callees:
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x140243CF0 (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 */

__int64 __fastcall KiRemoveThreadFromSharedReadyQueue(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v4; // r9
  _QWORD *v5; // r8

  if ( (*(_DWORD *)(a2 + 120) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a2 + 968), 0xFFFBFFFF);
  v4 = *(_QWORD **)(a2 + 216);
  v5 = *(_QWORD **)(a2 + 224);
  if ( v4[1] != a2 + 216 || *v5 != a2 + 216 )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = v5;
  if ( v5 == v4 )
    *(_DWORD *)(a1 + 8) ^= 1 << a3;
  --*(_DWORD *)(a1 + 672);
  *(_QWORD *)(a1 + 680) -= *(unsigned int *)(a2 + 2288);
  return KiUpdateSoftParkElectionStatisticsOnRemoval(a1, a2, 0LL);
}
