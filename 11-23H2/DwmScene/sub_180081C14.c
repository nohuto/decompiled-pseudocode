/*
 * XREFs of sub_180081C14 @ 0x180081C14
 * Callers:
 *     sub_1800817C4 @ 0x1800817C4 (sub_1800817C4.c)
 * Callees:
 *     sub_180081650 @ 0x180081650 (sub_180081650.c)
 */

_QWORD *__fastcall sub_180081C14(__int64 a1, __int64 a2, _QWORD *a3)
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
  sub_180081650((__int64)a3, (__int64)a3);
  return a3;
}
