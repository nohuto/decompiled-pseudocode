/*
 * XREFs of sub_1800B216C @ 0x1800B216C
 * Callers:
 *     sub_1800B1FC8 @ 0x1800B1FC8 (sub_1800B1FC8.c)
 * Callees:
 *     sub_180030B3C @ 0x180030B3C (sub_180030B3C.c)
 */

_QWORD *__fastcall sub_1800B216C(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 8;
    v5 = (char *)a3 - a1;
    do
    {
      *(_DWORD *)a3 = *(_DWORD *)(v4 - 8);
      a3 += 7;
      *(_QWORD *)&v5[v4 + 16] = 0LL;
      *(_QWORD *)&v5[v4 + 24] = 0LL;
      *(_OWORD *)&v5[v4] = *(_OWORD *)v4;
      *(_OWORD *)&v5[v4 + 16] = *(_OWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_QWORD *)(v4 + 24) = 15LL;
      *(_BYTE *)v4 = 0;
      *(_QWORD *)&v5[v4 + 32] = *(_QWORD *)(v4 + 32);
      *(_QWORD *)&v5[v4 + 40] = *(_QWORD *)(v4 + 40);
      v4 += 56LL;
    }
    while ( v4 - 8 != a2 );
  }
  sub_180030B3C(a3, a3);
  return a3;
}
