/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x1800455D0
 * Callers:
 *     RtlpInitializeLfhRandomDataArray @ 0x180046774 (RtlpInitializeLfhRandomDataArray.c)
 *     RtlpCreateHeapEncoding @ 0x180047878 (RtlpCreateHeapEncoding.c)
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 *     RtlInitializeHeapManager @ 0x1800B0588 (RtlInitializeHeapManager.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1800B1180 (RtlpInitializeLowFragHeapManager.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x180041C90 (RtlpHeapGenerateRandomValue32.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned __int64 v0; // rbx

  v0 = (unsigned __int64)(unsigned int)RtlpHeapGenerateRandomValue32() << 32;
  return v0 | (unsigned int)RtlpHeapGenerateRandomValue32();
}
