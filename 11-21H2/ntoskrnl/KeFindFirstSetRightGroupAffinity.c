/*
 * XREFs of KeFindFirstSetRightGroupAffinity @ 0x1402FE230
 * Callers:
 *     MiAddZeroingThreads @ 0x14024576C (MiAddZeroingThreads.c)
 *     MiReduceZeroingThreads @ 0x140266CA8 (MiReduceZeroingThreads.c)
 *     KiCallInterruptServiceRoutine @ 0x140294110 (KiCallInterruptServiceRoutine.c)
 *     KiIntPartGetLowestClassProcessorInMask @ 0x1402FE1C4 (KiIntPartGetLowestClassProcessorInMask.c)
 *     MiSetIdealProcessorThread @ 0x14035CA04 (MiSetIdealProcessorThread.c)
 *     HalpTimerConfigureInterrupt @ 0x1403AEA08 (HalpTimerConfigureInterrupt.c)
 *     MiTimeSingleLargePageZero @ 0x1403D4314 (MiTimeSingleLargePageZero.c)
 *     HalpIommuConfigureInterrupt @ 0x140517DCC (HalpIommuConfigureInterrupt.c)
 *     PpmRegisterPerfStates @ 0x140848C18 (PpmRegisterPerfStates.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeFindFirstSetRightGroupAffinity(__int64 a1)
{
  unsigned __int64 v2; // rcx

  v2 = *(_QWORD *)a1;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  _BitScanForward64(&v2, v2);
  return (unsigned int)KiProcessorNumberToIndexMappingTable[64 * *(unsigned __int16 *)(a1 + 8) + (unsigned int)v2];
}
