/*
 * XREFs of sub_1403BB634 @ 0x1403BB634
 * Callers:
 *     sub_1403BB340 @ 0x1403BB340 (sub_1403BB340.c)
 *     sub_140AF89EC @ 0x140AF89EC (sub_140AF89EC.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_1403BB634(int a1)
{
  unsigned int v1; // edi
  void *v2; // rax
  void *v3; // rbx

  v1 = HalQueryMaximumProcessorCount() * a1;
  v2 = (void *)sub_1403BF104(v1, 1LL);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, v1);
  return v3;
}
