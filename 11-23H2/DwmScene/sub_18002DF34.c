/*
 * XREFs of sub_18002DF34 @ 0x18002DF34
 * Callers:
 *     sub_18002DE00 @ 0x18002DE00 (sub_18002DE00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18002DE64 @ 0x18002DE64 (sub_18002DE64.c)
 *     sub_1800410C0 @ 0x1800410C0 (sub_1800410C0.c)
 *     sub_180041410 @ 0x180041410 (sub_180041410.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18002DF34(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  __int64 v9; // [rsp+20h] [rbp-58h] BYREF
  __int64 v10; // [rsp+28h] [rbp-50h]
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h]
  __int64 v13; // [rsp+50h] [rbp-28h]

  v13 = a3;
  v6 = sub_180012440(&v11, a3);
  sub_1800410C0(a1, &v9, v6);
  v7 = (_QWORD *)sub_180041410(v9, &v11);
  sub_18002DE64(a1, a2, v7);
  if ( v12 )
    sub_180010530(v12);
  if ( v10 )
    sub_180010530(v10);
  return sub_180013348(a3);
}
