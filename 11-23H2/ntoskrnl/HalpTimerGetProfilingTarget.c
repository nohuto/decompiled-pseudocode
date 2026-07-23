/*
 * XREFs of HalpTimerGetProfilingTarget @ 0x14050AE28
 * Callers:
 *     HalpQueryProfileSource @ 0x14050806C (HalpQueryProfileSource.c)
 * Callees:
 *     <none>
 */

__int64 HalpTimerGetProfilingTarget()
{
  return *(unsigned int *)(32LL * KeGetPcr()->Prcb.Number + HalpProfileData + 24);
}
