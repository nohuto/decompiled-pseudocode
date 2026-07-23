/*
 * XREFs of KeQueryGroupAffinityEx @ 0x1403B6BA0
 * Callers:
 *     KiAddThreadToReadyQueue @ 0x1402349B0 (KiAddThreadToReadyQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x140238A10 (KiAddThreadToPrcbQueue.c)
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x140372A38 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryGroupAffinityEx(unsigned __int16 *a1, unsigned __int16 a2)
{
  if ( a2 >= *a1 )
    return 0LL;
  else
    return *(_QWORD *)&a1[4 * a2 + 4];
}
