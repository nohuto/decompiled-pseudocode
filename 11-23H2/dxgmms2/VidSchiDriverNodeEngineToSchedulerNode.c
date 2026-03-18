/*
 * XREFs of VidSchiDriverNodeEngineToSchedulerNode @ 0x1C0004A6C
 * Callers:
 *     VidSchCreateContext @ 0x1C0090040 (VidSchCreateContext.c)
 *     VidSchInitializeComponentPowerManagement @ 0x1C00C2FB0 (VidSchInitializeComponentPowerManagement.c)
 *     VidSchiPreemptEngineNodes @ 0x1C0106130 (VidSchiPreemptEngineNodes.c)
 *     VidSchiResetEngines @ 0x1C01063A8 (VidSchiResetEngines.c)
 *     VidSchGetNodeOrdinal @ 0x1C01076D4 (VidSchGetNodeOrdinal.c)
 *     VidSchQueryNodeStatistics @ 0x1C0107980 (VidSchQueryNodeStatistics.c)
 *     VidSchQueryProcessNodeStatistics @ 0x1C0107A30 (VidSchQueryProcessNodeStatistics.c)
 *     VidSchCreateHwContext @ 0x1C0108FB0 (VidSchCreateHwContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiDriverNodeEngineToSchedulerNode(__int64 a1, int a2, unsigned int a3)
{
  return a2 + (unsigned int)*(unsigned __int8 *)(a3 + a1 + 88);
}
