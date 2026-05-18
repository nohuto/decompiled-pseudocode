/*
 * XREFs of sub_1800A00F4 @ 0x1800A00F4
 * Callers:
 *     sub_18009FFB8 @ 0x18009FFB8 (sub_18009FFB8.c)
 * Callees:
 *     sub_18002E2B0 @ 0x18002E2B0 (sub_18002E2B0.c)
 */

_DWORD *__fastcall sub_1800A00F4(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // r8
  char *v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 8;
    v5 = (char *)a3 - a1;
    do
    {
      *a3 = *(_DWORD *)(v4 - 8);
      a3 += 14;
      *(_QWORD *)&v5[v4] = 0LL;
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
  sub_18002E2B0((__int64)a3, (__int64)a3);
  return a3;
}
