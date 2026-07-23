/*
 * XREFs of PpmPerfQueueAction @ 0x140252138
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x140256F40 (PpmCheckSnapAllDeliveredPerformance.c)
 *     PpmPerfApplyProcessorStates @ 0x14034EFB0 (PpmPerfApplyProcessorStates.c)
 *     PpmParkReportParkedCores @ 0x140350F60 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x140356DB0 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x140356E00 (PpmParkReportUnparkedCores.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x140254850 (KiInsertQueueDpc.c)
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
