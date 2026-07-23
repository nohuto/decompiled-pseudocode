/*
 * XREFs of KeInterlockedSetProcessorAffinityEx @ 0x140348E30
 * Callers:
 *     KiProcessNMI @ 0x14020EA60 (KiProcessNMI.c)
 *     PpmIdleExecuteTransition @ 0x1402C55B0 (PpmIdleExecuteTransition.c)
 *     KiComputeGroupSchedulingRank @ 0x140305AC8 (KiComputeGroupSchedulingRank.c)
 *     KiStartIdleThread @ 0x140382AB4 (KiStartIdleThread.c)
 *     KiStartProfileTarget @ 0x140574970 (KiStartProfileTarget.c)
 *     KiForceIdleParkUnparkProcessor @ 0x14057D288 (KiForceIdleParkUnparkProcessor.c)
 *     PpmTestAndLockProcessor @ 0x1405863EC (PpmTestAndLockProcessor.c)
 *     PpmParkReportParkedCore @ 0x14059D5EC (PpmParkReportParkedCore.c)
 *     PpmParkReportSoftParkChange @ 0x14059D6FC (PpmParkReportSoftParkChange.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeInterlockedSetProcessorAffinityEx(__int64 a1, int a2)
{
  unsigned int v3; // r10d
  unsigned int v4; // eax
  unsigned int v5; // ecx

  v3 = KiProcessorIndexToNumberMappingTable[a2];
  v4 = *(unsigned __int16 *)(a1 + 2);
  v5 = v3 >> 6;
  if ( v4 <= v3 >> 6 )
    return 0LL;
  _m_prefetchw((const void *)(a1 + 8LL * v5 + 8));
  return ((1LL << (v3 & 0x3F)) & _InterlockedOr64((volatile signed __int64 *)(a1 + 8LL * v5 + 8), 1LL << (v3 & 0x3F))) != 0;
}
