/*
 * XREFs of sub_180088A5C @ 0x180088A5C
 * Callers:
 *     sub_18008A6B0 @ 0x18008A6B0 (sub_18008A6B0.c)
 *     sub_18008DE00 @ 0x18008DE00 (sub_18008DE00.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_180088DC8 @ 0x180088DC8 (sub_180088DC8.c)
 */

__int64 *__fastcall sub_180088A5C(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v7; // rbx
  __int64 v8; // rax

  *a1 = 0LL;
  v3 = (a3 - a2) >> 4;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v3 )
  {
    if ( v3 > 0xFFFFFFFFFFFFFFFLL )
      sub_180012170();
    v7 = 16 * v3;
    v8 = sub_180011088(v7);
    *a1 = v8;
    a1[1] = v8;
    a1[2] = v7 + v8;
    a1[1] = sub_180088DC8(a2, a3, v8);
  }
  return a1;
}
