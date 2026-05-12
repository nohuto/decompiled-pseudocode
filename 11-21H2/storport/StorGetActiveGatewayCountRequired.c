/*
 * XREFs of StorGetActiveGatewayCountRequired @ 0x1C0059298
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C0033A68 (RaidAdapterCompleteInitialization.c)
 *     RaInitializeRaidResources @ 0x1C0058B7C (RaInitializeRaidResources.c)
 * Callees:
 *     StorIsSoftNumaOptIn @ 0x1C005941C (StorIsSoftNumaOptIn.c)
 */

__int64 __fastcall StorGetActiveGatewayCountRequired(__int64 a1, ULONG *a2)
{
  ULONG ActiveProcessorCount; // eax
  __int64 v5; // rdx
  unsigned int v6; // r8d

  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  if ( a2 )
    *a2 = ActiveProcessorCount;
  if ( (unsigned __int8)StorIsSoftNumaOptIn(a1, v5, ActiveProcessorCount) && v6 > g_ProcessorCountPerGateway )
    return g_ProcessorCountPerGateway
         * ((v6 + g_ProcessorCountPerGateway - 1)
          / g_ProcessorCountPerGateway)
         / g_ProcessorCountPerGateway;
  else
    return 1LL;
}
