/*
 * XREFs of sub_180060BA8 @ 0x180060BA8
 * Callers:
 *     sub_1800606D0 @ 0x1800606D0 (sub_1800606D0.c)
 *     sub_180060A6C @ 0x180060A6C (sub_180060A6C.c)
 * Callees:
 *     sub_180060694 @ 0x180060694 (sub_180060694.c)
 */

_BYTE *__fastcall sub_180060BA8(_QWORD *a1, _QWORD *a2, _BYTE *a3)
{
  _QWORD *v4; // r8
  _BYTE *v5; // r9
  __int64 v6; // rax

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
      v6 = *(v4 - 2);
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = 0LL;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 16) = v6;
      *(_QWORD *)((char *)v4 + (_QWORD)v5 - 8) = *(v4 - 1);
      *(_QWORD *)((char *)v4 + (_QWORD)v5) = *v4;
      *(v4 - 1) = 0LL;
      *v4 = 0LL;
      v4 += 6;
    }
    while ( v4 - 5 != a2 );
  }
  sub_180060694((__int64)a3, (__int64)a3);
  return a3;
}
