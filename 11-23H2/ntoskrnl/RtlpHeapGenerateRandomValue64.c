/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x140317588
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x140317350 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x140389704 (RtlpHpLfhContextInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x140389C2C (RtlHpGlobalsInitialize.c)
 *     RtlCreateHeap @ 0x1407D9080 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x1403175D0 (ExGenRandom.c)
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
