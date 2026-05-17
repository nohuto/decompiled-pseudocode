/*
 * XREFs of RtlpHeapGenerateRandomValue64 @ 0x18002EA94
 * Callers:
 *     RtlpInitializeLfhRandomDataArray @ 0x18002EFBC (RtlpInitializeLfhRandomDataArray.c)
 *     RtlpCreateHeapEncoding @ 0x18002F0BC (RtlpCreateHeapEncoding.c)
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlInitializeHeapManager @ 0x1800B0C34 (RtlInitializeHeapManager.c)
 *     RtlpInitializeLowFragHeapManager @ 0x1801186A4 (RtlpInitializeLowFragHeapManager.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue32 @ 0x18002DAA0 (RtlpHeapGenerateRandomValue32.c)
 */

unsigned __int64 RtlpHeapGenerateRandomValue64()
{
  unsigned __int64 v0; // rbx

  v0 = (unsigned __int64)(unsigned int)RtlpHeapGenerateRandomValue32() << 32;
  return v0 | (unsigned int)RtlpHeapGenerateRandomValue32();
}
