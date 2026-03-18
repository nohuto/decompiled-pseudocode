/*
 * XREFs of KeInterlockedClearProcessorAffinityEx @ 0x1403418E0
 * Callers:
 *     KiProcessNMI @ 0x14020EA60 (KiProcessNMI.c)
 *     PpmIdleExecuteTransition @ 0x1402C5320 (PpmIdleExecuteTransition.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x14030860C (KiTransitionSchedulingGroupGeneration.c)
 *     KeWakeProcessor @ 0x140341880 (KeWakeProcessor.c)
 *     PpmParkReportUnparkedCore @ 0x1404637CC (PpmParkReportUnparkedCore.c)
 *     KiForceIdleParkUnparkProcessor @ 0x14057CD98 (KiForceIdleParkUnparkProcessor.c)
 *     PpmTestAndLockProcessor @ 0x140585EFC (PpmTestAndLockProcessor.c)
 *     PpmUnlockProcessors @ 0x140586168 (PpmUnlockProcessors.c)
 *     PpmParkReportSoftParkChange @ 0x14059D20C (PpmParkReportSoftParkChange.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall KeInterlockedClearProcessorAffinityEx(__int64 a1, int a2)
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
  return ((1LL << (v3 & 0x3F)) & _InterlockedAnd64(
                                   (volatile signed __int64 *)(a1 + 8LL * v5 + 8),
                                   ~(1LL << (v3 & 0x3F)))) != 0;
}
