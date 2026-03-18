/*
 * XREFs of KiRemoveThreadFromReadyQueue @ 0x140206BE0
 * Callers:
 *     KiRemoveThreadFromAnyReadyQueue @ 0x14020666C (KiRemoveThreadFromAnyReadyQueue.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240C90 (KiSearchForNewThreadOnProcessor.c)
 *     KiRemoveCurrentlyEnumeratedThreadFromReadyQueue @ 0x1402435C0 (KiRemoveCurrentlyEnumeratedThreadFromReadyQueue.c)
 *     KiQuantumEnd @ 0x1402486F0 (KiQuantumEnd.c)
 *     KiNormalPriorityReadyScan @ 0x140306DF0 (KiNormalPriorityReadyScan.c)
 * Callees:
 *     KiUpdateLocalReadyQueueStatisticsOnRemoval @ 0x140410E44 (KiUpdateLocalReadyQueueStatisticsOnRemoval.c)
 */

__int64 __fastcall KiRemoveThreadFromReadyQueue(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v3; // r9
  _QWORD *v4; // rax

  if ( (*(_DWORD *)(a2 - 96) & 0x400000) != 0 )
    _InterlockedAnd(*(volatile signed __int32 **)(a2 + 752), 0xFFFBFFFF);
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)(*(_QWORD *)a2 + 8LL) != a2 || (v4 = *(_QWORD **)(a2 + 8), *v4 != a2) )
    __fastfail(3u);
  *v4 = v3;
  v3[1] = v4;
  if ( v4 == v3 )
    *(_DWORD *)(a1 + 32472) ^= 1 << a3;
  return KiUpdateLocalReadyQueueStatisticsOnRemoval(a1, a2 - 216);
}
