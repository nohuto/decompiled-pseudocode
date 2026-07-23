/*
 * XREFs of RtlRandom @ 0x1407E66B0
 * Callers:
 *     CcGetRandomVacbArrayWithReference @ 0x140538534 (CcGetRandomVacbArrayWithReference.c)
 *     CcUnmapInactiveViewsInternal @ 0x140538930 (CcUnmapInactiveViewsInternal.c)
 *     PspInitPhase2 @ 0x140B67208 (PspInitPhase2.c)
 * Callees:
 *     ExGenRandom @ 0x140317860 (ExGenRandom.c)
 */

ULONG __stdcall RtlRandom(PULONG Seed)
{
  ULONG result; // eax

  result = ExGenRandom(1) & 0x7FFFFFFF;
  *Seed = result;
  return result;
}
