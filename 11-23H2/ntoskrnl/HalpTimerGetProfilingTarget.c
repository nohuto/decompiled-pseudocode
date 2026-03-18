/*
 * XREFs of HalpTimerGetProfilingTarget @ 0x14050A8D8
 * Callers:
 *     HalpQueryProfileSource @ 0x140507B1C (HalpQueryProfileSource.c)
 * Callees:
 *     <none>
 */

__int64 HalpTimerGetProfilingTarget()
{
  return *(unsigned int *)(32LL * KeGetPcr()->Prcb.Number + HalpProfileData + 24);
}
