/*
 * XREFs of sub_18009F05C @ 0x18009F05C
 * Callers:
 *     sub_18009EE9C @ 0x18009EE9C (sub_18009EE9C.c)
 *     sub_18009F190 @ 0x18009F190 (sub_18009F190.c)
 * Callees:
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 */

__int64 *__fastcall sub_18009F05C(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rbp

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = 8LL;
  do
  {
    sub_1800124F8(v4, (__int64 *)((char *)v4 + v3));
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
