/*
 * XREFs of sub_1406A1AB8 @ 0x1406A1AB8
 * Callers:
 *     sub_1406A1370 @ 0x1406A1370 (sub_1406A1370.c)
 *     sub_140713980 @ 0x140713980 (sub_140713980.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 */

void *__fastcall sub_1406A1AB8(__int64 a1, size_t a2)
{
  void *result; // rax
  const void *v4; // rdx

  result = *(void **)a1;
  v4 = *(const void **)(a1 + 8);
  if ( *(const void **)a1 != v4 )
    return memmove(result, v4, a2);
  return result;
}
