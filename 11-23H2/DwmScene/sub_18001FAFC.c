/*
 * XREFs of sub_18001FAFC @ 0x18001FAFC
 * Callers:
 *     sub_180064308 @ 0x180064308 (sub_180064308.c)
 *     sub_180064494 @ 0x180064494 (sub_180064494.c)
 *     sub_1800645EC @ 0x1800645EC (sub_1800645EC.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_1800DBDE0 @ 0x1800DBDE0 (sub_1800DBDE0.c)
 * Callees:
 *     sub_18001DBD0 @ 0x18001DBD0 (sub_18001DBD0.c)
 *     sub_18001E768 @ 0x18001E768 (sub_18001E768.c)
 */

__int64 __fastcall sub_18001FAFC(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  _QWORD *v7; // rbx

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  v7 = (_QWORD *)a1;
  *(_WORD *)a2 = 0;
  sub_18001DBD0(a1, a3);
  if ( v7[2] - a3 < a4 )
    a4 = v7[2] - a3;
  if ( v7[3] >= 8uLL )
    v7 = (_QWORD *)*v7;
  sub_18001E768((char *)a2, (char *)v7 + 2 * a3, a4);
  return a2;
}
