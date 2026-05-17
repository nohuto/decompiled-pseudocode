/*
 * XREFs of RtlpInitializeLfhRandomDataArray @ 0x1800468D4
 * Callers:
 *     RtlpCreateLowFragHeap @ 0x1800494C4 (RtlpCreateLowFragHeap.c)
 *     RtlpHpLfhContextInitialize @ 0x180066B88 (RtlpHpLfhContextInitialize.c)
 * Callees:
 *     RtlpHeapGenerateRandomValue64 @ 0x180045730 (RtlpHeapGenerateRandomValue64.c)
 */

unsigned __int64 RtlpInitializeLfhRandomDataArray()
{
  unsigned __int8 *v0; // rbx
  __int64 v1; // rdi
  unsigned __int64 result; // rax

  v0 = RtlpLowFragHeapRandomData;
  v1 = 32LL;
  do
  {
    result = RtlpHeapGenerateRandomValue64() & 0x7F7F7F7F7F7F7F7FLL;
    *(_QWORD *)v0 = result;
    v0 += 8;
    --v1;
  }
  while ( v1 );
  return result;
}
