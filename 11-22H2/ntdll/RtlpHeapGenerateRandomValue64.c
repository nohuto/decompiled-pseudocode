/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x180045730
 * Callers:
 *     RtlpInitializeLfhRandomDataArray @ 0x1800468D4 (RtlpInitializeLfhRandomDataArray.c)
 *     RtlpCreateHeapEncoding @ 0x1800479D8 (RtlpCreateHeapEncoding.c)
 *     RtlCreateHeap @ 0x180048130 (RtlCreateHeap.c)
 *     RtlInitializeHeapManager @ 0x1800AE4B8 (RtlInitializeHeapManager.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800AF0B0 (RtlpInitializeLowFragHeapManager.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x180041DF0 (RtlpHeapGenerateRandomValue32.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned __int64 v0; // rbx

  v0 = (unsigned __int64)(unsigned int)RtlpHeapGenerateRandomValue32() << 32;
  return v0 | (unsigned int)RtlpHeapGenerateRandomValue32();
}
