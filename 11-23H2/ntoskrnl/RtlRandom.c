/*
 * XREFs of RtlRandom @ 0x1407E63E0
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x140537FE4 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x1405383E0 (CcUnmapInactiveViewsInternal.c)
 *     PspInitPhase2 @ 0x140B67208 (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x1403175D0 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
