/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x1403631E0
 * Callers:
 *     RtlpHpLfhSubsegmentInitialize @ 0x140362FA0 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhContextInitialize @ 0x14036FC3C (RtlpHpLfhContextInitialize.c)
 *     RtlHpGlobalsInitialize @ 0x1403C44EC (RtlHpGlobalsInitialize.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 * Callees:
 *     ExGenRandom @ 0x140363220 (ExGenRandom.c)
 */

unsigned __int64 __fastcall RtlpHeapGenerateRandomValue64(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rax

  v2 = ExGenRandom(1LL, a2) & 0x7FFFFFFF;
  v4 = ExGenRandom(1LL, v3);
  LODWORD(v4) = v4 & 0x7FFFFFFF;
  return ((unsigned __int64)v2 << 32) | v4;
}
