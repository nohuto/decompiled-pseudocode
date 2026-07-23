/*
 * XREFs of sub_140A1A61C @ 0x140A1A61C
 * Callers:
 *     sub_14066B830 @ 0x14066B830 (sub_14066B830.c)
 *     sub_1409CE94C @ 0x1409CE94C (sub_1409CE94C.c)
 * Callees:
 *     sub_1402199B0 @ 0x1402199B0 (sub_1402199B0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_140A1A61C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *result; // rax
  void *v5; // rbx

  result = (void *)sub_1402199B0(608LL, a2, 1950442835LL, a4);
  v5 = result;
  if ( result )
  {
    memset(result, 0, 0x260uLL);
    return v5;
  }
  return result;
}
