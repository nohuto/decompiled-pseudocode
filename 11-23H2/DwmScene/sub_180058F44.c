/*
 * XREFs of sub_180058F44 @ 0x180058F44
 * Callers:
 *     sub_180058A08 @ 0x180058A08 (sub_180058A08.c)
 *     sub_180058D20 @ 0x180058D20 (sub_180058D20.c)
 * Callees:
 *     sub_1800589C8 @ 0x1800589C8 (sub_1800589C8.c)
 */

_BYTE *__fastcall sub_180058F44(_QWORD *a1, _QWORD *a2, _BYTE *a3)
{
  _QWORD *v4; // r8
  _BYTE *v5; // r9

  if ( a1 != a2 )
  {
    v4 = a1 + 5;
    v5 = (_BYTE *)(a3 - (_BYTE *)a1);
    do
    {
      *a3 = *((_BYTE *)v4 - 40);
      a3 += 48;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 32) = *(v4 - 4);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 24) = *(v4 - 3);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 16) = *(v4 - 2);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = 0LL;
      *(_QWORD *)&v5[(_QWORD)v4] = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = *(v4 - 1);
      *(_QWORD *)&v5[(_QWORD)v4] = *v4;
      *(v4 - 1) = 0LL;
      *v4 = 0LL;
      v4 += 6;
    }
    while ( v4 - 5 != a2 );
  }
  sub_1800589C8((__int64)a3, (__int64)a3);
  return a3;
}
