/*
 * XREFs of sub_14040BA98 @ 0x14040BA98
 * Callers:
 *     sub_140400F34 @ 0x140400F34 (sub_140400F34.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

void *__fastcall sub_14040BA98(__int64 a1, const void *a2, void *a3)
{
  void *result; // rax

  result = a3;
  if ( a2 != a3 )
    return memmove(a3, a2, *(unsigned int *)(a1 + 16));
  return result;
}
