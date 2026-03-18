/*
 * XREFs of KiUpdateLocalReadyQueueStatisticsOnInsertion @ 0x140410E10
 * Callers:
 *     KiAddThreadToReadyQueue @ 0x1402348E0 (KiAddThreadToReadyQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x140238940 (KiAddThreadToPrcbQueue.c)
 * Callees:
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x140372898 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
 */

__int64 __fastcall KiUpdateLocalReadyQueueStatisticsOnInsertion(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  ++*(_DWORD *)(a1 + 33140);
  v2 = *(unsigned int *)(a2 + 84);
  *(_DWORD *)(a2 + 2288) = v2;
  *(_QWORD *)(a1 + 33144) += v2;
  return KiUpdateSoftParkElectionStatisticsOnInsertion(*(_QWORD *)(a1 + 34888), a2);
}
