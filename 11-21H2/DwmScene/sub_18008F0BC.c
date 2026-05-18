/*
 * XREFs of sub_18008F0BC @ 0x18008F0BC
 * Callers:
 *     sub_18008EB54 @ 0x18008EB54 (sub_18008EB54.c)
 * Callees:
 *     sub_18008E974 @ 0x18008E974 (sub_18008E974.c)
 */

_QWORD *__fastcall sub_18008F0BC(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 8;
    v5 = (char *)a3 - a1;
    do
    {
      *a3 = 0LL;
      *(_QWORD *)&v5[v4] = 0LL;
      *a3 = *(_QWORD *)(v4 - 8);
      a3 += 5;
      *(_QWORD *)&v5[v4] = *(_QWORD *)v4;
      *(_QWORD *)(v4 - 8) = 0LL;
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)&v5[v4 + 8] = 0LL;
      *(_QWORD *)&v5[v4 + 16] = 0LL;
      *(_QWORD *)&v5[v4 + 8] = *(_QWORD *)(v4 + 8);
      *(_QWORD *)&v5[v4 + 16] = *(_QWORD *)(v4 + 16);
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_QWORD *)(v4 + 16) = 0LL;
      *(_DWORD *)&v5[v4 + 24] = *(_DWORD *)(v4 + 24);
      v4 += 40LL;
    }
    while ( v4 - 8 != a2 );
  }
  sub_18008E974((__int64)a3, (__int64)a3);
  return a3;
}
