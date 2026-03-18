/*
 * XREFs of PpmPerfQueueAction @ 0x140345110
 * Callers:
 *     PpmParkReportParkedCores @ 0x140235F70 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x14023A7D0 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x14023A820 (PpmParkReportUnparkedCores.c)
 *     PpmPerfApplyProcessorStates @ 0x14023B5A0 (PpmPerfApplyProcessorStates.c)
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140304A20 (PpmCheckSnapAllDeliveredPerformance.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140345190 (KiInsertQueueDpc.c)
 */

__int64 __fastcall PpmPerfQueueAction(__int64 a1, char a2)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 33944));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 33944), 1 << a2);
  if ( !(_DWORD)result )
    return KiInsertQueueDpc(a1 + 33880, 0);
  return result;
}
