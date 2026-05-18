/*
 * XREFs of sub_18004051C @ 0x18004051C
 * Callers:
 *     sub_180032900 @ 0x180032900 (sub_180032900.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_180065CC0 @ 0x180065CC0 (sub_180065CC0.c)
 *     sub_1800727D0 @ 0x1800727D0 (sub_1800727D0.c)
 *     sub_180073CE0 @ 0x180073CE0 (sub_180073CE0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_1800403BC @ 0x1800403BC (sub_1800403BC.c)
 *     sub_1800412EC @ 0x1800412EC (sub_1800412EC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18004051C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v11; // [rsp+28h] [rbp-80h] BYREF
  __int64 v12; // [rsp+38h] [rbp-70h] BYREF
  __int64 v13; // [rsp+40h] [rbp-68h]
  _QWORD v14[5]; // [rsp+48h] [rbp-60h] BYREF

  v14[4] = a4;
  v8 = sub_180012440(v14, a4);
  sub_1800412EC(a1, &v12, v8);
  v9 = sub_18001246C(&v11, &v12);
  sub_1800403BC(a1, a2, a3, v9);
  if ( v13 )
    sub_180010530(v13);
  sub_180013348(a4);
  return a2;
}
