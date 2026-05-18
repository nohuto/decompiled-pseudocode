/*
 * XREFs of sub_18003F2E0 @ 0x18003F2E0
 * Callers:
 *     sub_18003E350 @ 0x18003E350 (sub_18003E350.c)
 *     sub_18003E764 @ 0x18003E764 (sub_18003E764.c)
 *     sub_18003E900 @ 0x18003E900 (sub_18003E900.c)
 *     sub_18003F160 @ 0x18003F160 (sub_18003F160.c)
 *     sub_18003F210 @ 0x18003F210 (sub_18003F210.c)
 * Callees:
 *     sub_18003E588 @ 0x18003E588 (sub_18003E588.c)
 *     sub_18003E6C4 @ 0x18003E6C4 (sub_18003E6C4.c)
 */

_QWORD *__fastcall sub_18003F2E0(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v5; // rdx
  __int64 v6; // rdx
  _QWORD *v7; // r9

  v5 = a1;
  if ( a1 != a2 )
  {
    do
    {
      sub_18003E588(a3, v5);
      a3 += 2;
      v5 = (_QWORD *)(v6 + 16);
    }
    while ( v5 != v7 );
  }
  sub_18003E6C4((__int64)a3, (__int64)a3);
  return a3;
}
