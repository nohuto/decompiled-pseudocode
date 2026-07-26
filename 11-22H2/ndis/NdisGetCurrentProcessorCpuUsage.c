/*
 * XREFs of NdisGetCurrentProcessorCpuUsage @ 0x1C00C3D10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisGetCurrentProcessorCpuUsage(PULONG pCpuUsage)
{
  ExGetCurrentProcessorCpuUsage(pCpuUsage);
}
