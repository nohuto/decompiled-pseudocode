/*
 * XREFs of KiAcquireSoftParkElectionLock @ 0x140410424
 * Callers:
 *     KiAddThreadToReadyQueue @ 0x1402349B0 (KiAddThreadToReadyQueue.c)
 *     KiAddThreadToPrcbQueue @ 0x140238A10 (KiAddThreadToPrcbQueue.c)
 *     KiSearchForNewThreadOnProcessor @ 0x140240D60 (KiSearchForNewThreadOnProcessor.c)
 *     KiUpdateSoftParkElectionStatisticsOnRemoval @ 0x140243CF0 (KiUpdateSoftParkElectionStatisticsOnRemoval.c)
 *     KiUpdateSoftParkElectionStatisticsOnInsertion @ 0x140372A38 (KiUpdateSoftParkElectionStatisticsOnInsertion.c)
 *     KiFlushReadyLists @ 0x14057E2A4 (KiFlushReadyLists.c)
 *     KiSoftParkElectionDpcRoutine @ 0x14057E740 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140242F10 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KiAcquireSoftParkElectionLock(__int64 a1)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
  {
    do
    {
      KeYieldProcessorEx(&v3);
      result = *(_QWORD *)(a1 + 688);
    }
    while ( result );
  }
  return result;
}
