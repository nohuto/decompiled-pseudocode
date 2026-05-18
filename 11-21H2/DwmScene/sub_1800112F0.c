/*
 * XREFs of sub_1800112F0 @ 0x1800112F0
 * Callers:
 *     sub_180011198 @ 0x180011198 (sub_180011198.c)
 *     sub_180031324 @ 0x180031324 (sub_180031324.c)
 *     sub_180038F28 @ 0x180038F28 (sub_180038F28.c)
 * Callees:
 *     sub_180011138 @ 0x180011138 (sub_180011138.c)
 */

_QWORD *__fastcall sub_1800112F0(char *a1, char *a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  signed __int64 v4; // r8

  v3 = a3;
  if ( a1 != a2 )
  {
    v4 = a1 - (char *)a3;
    do
    {
      *v3 = 0LL;
      v3[1] = 0LL;
      *v3 = *(_QWORD *)((char *)v3 + v4);
      v3[1] = *(_QWORD *)((char *)v3 + v4 + 8);
      *(_QWORD *)((char *)v3 + v4) = 0LL;
      *(_QWORD *)((char *)v3 + v4 + 8) = 0LL;
      v3 += 2;
    }
    while ( (char *)v3 + v4 != a2 );
  }
  sub_180011138((__int64)v3, (__int64)v3);
  return v3;
}
