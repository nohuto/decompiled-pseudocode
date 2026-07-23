/*
 * XREFs of sub_1403DC498 @ 0x1403DC498
 * Callers:
 *     sub_14082A0D8 @ 0x14082A0D8 (sub_14082A0D8.c)
 * Callees:
 *     <none>
 */

__int64 *sub_1403DC498()
{
  __int64 *result; // rax
  __int64 v1; // rcx

  result = qword_140C2B8D0;
  v1 = 5LL;
  do
  {
    *(result - 2) = 0LL;
    *(result - 1) = 0LL;
    *result = -1LL;
    result += 3;
    --v1;
  }
  while ( v1 );
  qword_140C2B938 = -1LL;
  return result;
}
