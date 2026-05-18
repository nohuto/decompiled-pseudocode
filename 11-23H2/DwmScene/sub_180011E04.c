/*
 * XREFs of sub_180011E04 @ 0x180011E04
 * Callers:
 *     sub_18001278C @ 0x18001278C (sub_18001278C.c)
 *     sub_180065CC0 @ 0x180065CC0 (sub_180065CC0.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011D4C @ 0x180011D4C (sub_180011D4C.c)
 *     sub_180011DA0 @ 0x180011DA0 (sub_180011DA0.c)
 *     sub_180011ED4 @ 0x180011ED4 (sub_180011ED4.c)
 *     sub_180012394 @ 0x180012394 (sub_180012394.c)
 *     sub_18003B7C4 @ 0x18003B7C4 (sub_18003B7C4.c)
 *     sub_18003E370 @ 0x18003E370 (sub_18003E370.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall sub_180011E04(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  _QWORD v7[2]; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  sub_18003E370();
  v4 = *(_QWORD *)sub_180011ED4(a1, &v8);
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
    sub_180012394(v7, v5);
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
