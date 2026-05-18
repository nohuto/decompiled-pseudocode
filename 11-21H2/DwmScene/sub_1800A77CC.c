/*
 * XREFs of sub_1800A77CC @ 0x1800A77CC
 * Callers:
 *     sub_1800A78A4 @ 0x1800A78A4 (sub_1800A78A4.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180012170 @ 0x180012170 (sub_180012170.c)
 *     sub_18006BC2C @ 0x18006BC2C (sub_18006BC2C.c)
 */

_QWORD *__fastcall sub_1800A77CC(_QWORD *a1, char *a2, char *a3)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rax

  *a1 = 0LL;
  v3 = (a3 - a2) >> 4;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v3 )
  {
    if ( v3 > 0xFFFFFFFFFFFFFFFLL )
      sub_180012170();
    v7 = 2 * v3;
    v8 = (_QWORD *)sub_180011088(v7 * 8);
    *a1 = v8;
    a1[1] = v8;
    a1[2] = &v8[v7];
    a1[1] = sub_18006BC2C(a2, a3, v8);
  }
  return a1;
}
