/*
 * XREFs of sub_18002DB6C @ 0x18002DB6C
 * Callers:
 *     sub_180032900 @ 0x180032900 (sub_180032900.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 *     sub_180024B5C @ 0x180024B5C (sub_180024B5C.c)
 *     sub_1800301D0 @ 0x1800301D0 (sub_1800301D0.c)
 *     sub_18003B7C4 @ 0x18003B7C4 (sub_18003B7C4.c)
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 */

_QWORD *__fastcall sub_18002DB6C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  sub_18003E370();
  v4 = *sub_180024B5C(a1, &v8);
  if ( v9 )
    sub_180010530(v9);
  if ( v4 )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v5 = sub_180011D4C(a1 + 8, &v8);
    sub_1800301D0(v7, v5);
    if ( v9 )
      sub_180010530(v9);
    sub_180011DA0(&v8, v7);
    sub_18003B7C4(a1, &v8);
    if ( v9 )
      sub_180010530(v9);
    *a2 = v7[0];
    a2[1] = v7[1];
  }
  return a2;
}
