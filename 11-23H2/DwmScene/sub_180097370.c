/*
 * XREFs of sub_180097370 @ 0x180097370
 * Callers:
 *     sub_1800970DC @ 0x1800970DC (sub_1800970DC.c)
 *     sub_1800E0590 @ 0x1800E0590 (sub_1800E0590.c)
 * Callees:
 *     sub_18001203C @ 0x18001203C (sub_18001203C.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 */

_QWORD *__fastcall sub_180097370(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v5; // rdx
  __int64 v6; // rdx
  _QWORD *v7; // r8

  v5 = a1;
  if ( a1 != a2 )
  {
    do
    {
      sub_18001246C(a3, v5);
      a3 += 2;
      v5 = (_QWORD *)(v6 + 16);
    }
    while ( v5 != v7 );
  }
  sub_18001203C((__int64)a3, (__int64)a3);
  return a3;
}
