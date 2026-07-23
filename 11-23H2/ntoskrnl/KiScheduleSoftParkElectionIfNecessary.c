/*
 * XREFs of KiScheduleSoftParkElectionIfNecessary @ 0x140234DC0
 * Callers:
 *     KiAddThreadToReadyQueue @ 0x1402349B0 (KiAddThreadToReadyQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x140238A10 (KiAddThreadToPrcbQueue.c)
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x140372A38 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
 * Callees:
 *     KiShouldSoftParkElectionBePerformed @ 0x140234DF0 (KiShouldSoftParkElectionBePerformed.c)
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiScheduleSoftParkElectionIfNecessary(__int64 a1)
{
  __int64 result; // rax

  result = KiShouldSoftParkElectionBePerformed();
  if ( (_BYTE)result )
  {
    if ( !*(_BYTE *)(a1 + 708) )
    {
      *(_BYTE *)(a1 + 708) = 1;
      return KiInsertQueueDpc(a1 + 720, 0);
    }
  }
  return result;
}
