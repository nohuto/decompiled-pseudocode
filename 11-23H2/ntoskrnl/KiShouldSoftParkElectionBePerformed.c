/*
 * XREFs of KiShouldSoftParkElectionBePerformed @ 0x140234DF0
 * Callers:
 *     KiScheduleSoftParkElectionIfNecessary @ 0x140234DC0 (KiScheduleSoftParkElectionIfNecessary.c)
 *     KiSoftParkElectionDpcRoutine @ 0x14057E740 (KiSoftParkElectionDpcRoutine.c)
 * Callees:
 *     KiAreSoftUnparkingElectionsEnabled @ 0x14057DFEC (KiAreSoftUnparkingElectionsEnabled.c)
 */

bool __fastcall KiShouldSoftParkElectionBePerformed(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v3; // rcx

  v1 = (unsigned int)KeSoftParkedQueueThreshold;
  if ( !KeSoftParkedQueueThreshold
    || !(unsigned __int8)KiAreSoftUnparkingElectionsEnabled()
    || *(_QWORD *)(a1 + 712) <= v1 )
  {
    return 0;
  }
  v3 = *(_QWORD *)(KiProcessorBlock[KiProcessorNumberToIndexMappingTable[64
                                                                       * (unsigned __int64)*(unsigned __int16 *)(a1 + 662)
                                                                       + *(unsigned __int8 *)(a1 + 657)]]
                 + 192);
  return (~*(_QWORD *)(v3 + 80) & *(_QWORD *)(v3 + 96)) != 0LL;
}
