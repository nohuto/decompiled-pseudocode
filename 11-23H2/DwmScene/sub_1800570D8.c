/*
 * XREFs of sub_1800570D8 @ 0x1800570D8
 * Callers:
 *     sub_180067B80 @ 0x180067B80 (sub_180067B80.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18002E2EC @ 0x18002E2EC (sub_18002E2EC.c)
 *     sub_180057290 @ 0x180057290 (sub_180057290.c)
 *     sub_1800584C0 @ 0x1800584C0 (sub_1800584C0.c)
 */

_QWORD *__fastcall sub_1800570D8(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // r8
  _QWORD *v5; // rdx
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4 )
  {
    sub_1800584C0();
    v4 = *(_QWORD **)(a2 + 8);
    v5 = *(_QWORD **)a2;
    v6 = (_QWORD *)*a1;
    while ( v5 != v4 )
    {
      sub_18001246C(v6, v5);
      v6 += 2;
      v5 = (_QWORD *)(v7 + 16);
    }
    sub_18002E2EC((__int64)v6, (__int64)v6);
    v9 = 0LL;
    a1[1] = v6;
    sub_180057290(&v9);
  }
  return a1;
}
