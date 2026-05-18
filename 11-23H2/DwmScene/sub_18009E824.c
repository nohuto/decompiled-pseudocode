/*
 * XREFs of sub_18009E824 @ 0x18009E824
 * Callers:
 *     sub_18009E648 @ 0x18009E648 (sub_18009E648.c)
 *     sub_18009E8C0 @ 0x18009E8C0 (sub_18009E8C0.c)
 * Callees:
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 */

__int64 *__fastcall sub_18009E824(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rbp

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = 15LL;
  do
  {
    sub_1800124F8(v4, (__int64 *)((char *)v4 + v3));
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
