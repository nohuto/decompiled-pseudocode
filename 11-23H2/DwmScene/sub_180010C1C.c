/*
 * XREFs of sub_180010C1C @ 0x180010C1C
 * Callers:
 *     sub_1800109F0 @ 0x1800109F0 (sub_1800109F0.c)
 *     sub_18002E6B4 @ 0x18002E6B4 (sub_18002E6B4.c)
 *     sub_18002F280 @ 0x18002F280 (sub_18002F280.c)
 *     sub_180056DBC @ 0x180056DBC (sub_180056DBC.c)
 * Callees:
 *     sub_1800109B0 @ 0x1800109B0 (sub_1800109B0.c)
 */

_QWORD *__fastcall sub_180010C1C(char *a1, char *a2, _QWORD *a3)
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
  sub_1800109B0((__int64)v3, (__int64)v3);
  return v3;
}
