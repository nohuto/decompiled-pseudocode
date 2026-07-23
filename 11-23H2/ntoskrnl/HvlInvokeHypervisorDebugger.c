/*
 * XREFs of HvlInvokeHypervisorDebugger @ 0x14053FEF0
 * Callers:
 *     KeAccumulateTicks @ 0x1402C7DA0 (KeAccumulateTicks.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x1403CD540 (HvcallInitiateHypercall.c)
 */

__int64 HvlInvokeHypervisorDebugger()
{
  __int64 result; // rax

  result = HvlpFlags;
  if ( (HvlpFlags & 2) == 0 || (result = HvlpRootFlags, (HvlpRootFlags & 1) != 0) )
  {
    if ( HvlHypervisorConnected )
      return HvcallInitiateHypercall(65546);
  }
  return result;
}
