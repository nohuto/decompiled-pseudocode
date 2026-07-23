/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x140317818
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x1403175E0 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x1403898E4 (RtlpHpLfhContextInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x140389E0C (RtlHpGlobalsInitialize.c)
 *     RtlCreateHeap @ 0x1407D9350 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x140317860 (ExGenRandom.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned int v0; // ebx
  __int64 v1; // rax

  v0 = ExGenRandom(1LL) & 0x7FFFFFFF;
  v1 = ExGenRandom(1LL);
  LODWORD(v1) = v1 & 0x7FFFFFFF;
  return ((unsigned __int64)v0 << 32) | v1;
}
