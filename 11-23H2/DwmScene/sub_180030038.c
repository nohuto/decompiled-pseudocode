/*
 * XREFs of sub_180030038 @ 0x180030038
 * Callers:
 *     sub_18002E7AC @ 0x18002E7AC (sub_18002E7AC.c)
 *     sub_18003A3A4 @ 0x18003A3A4 (sub_18003A3A4.c)
 *     sub_180056CD4 @ 0x180056CD4 (sub_180056CD4.c)
 *     sub_18005F0EC @ 0x18005F0EC (sub_18005F0EC.c)
 *     sub_18006EA80 @ 0x18006EA80 (sub_18006EA80.c)
 *     sub_18009844C @ 0x18009844C (sub_18009844C.c)
 * Callees:
 *     sub_18002E2EC @ 0x18002E2EC (sub_18002E2EC.c)
 */

_QWORD *__fastcall sub_180030038(char *a1, char *a2, _QWORD *a3)
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
  sub_18002E2EC((__int64)v3, (__int64)v3);
  return v3;
}
