/*
 * XREFs of KiUpdateLocalReadyQueueStatisticsOnRemoval @ 0x140411050
 * Callers:
 *     KiRemoveThreadFromReadyQueue @ 0x140206BE0 (KiRemoveThreadFromReadyQueue.c)
 * Callees:
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x140243CF0 (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 */

__int64 __fastcall KiUpdateLocalReadyQueueStatisticsOnRemoval(__int64 a1, __int64 a2)
{
  --*(_DWORD *)(a1 + 33140);
  *(_QWORD *)(a1 + 33144) -= *(unsigned int *)(a2 + 2288);
  return KiUpdateSoftParkElectionStatisticsOnRemoval(*(_QWORD *)(a1 + 34888), a2, 0);
}
