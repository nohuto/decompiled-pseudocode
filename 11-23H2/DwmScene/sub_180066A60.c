/*
 * XREFs of sub_180066A60 @ 0x180066A60
 * Callers:
 *     sub_180061EF0 @ 0x180061EF0 (sub_180061EF0.c)
 *     sub_180062028 @ 0x180062028 (sub_180062028.c)
 *     sub_180062160 @ 0x180062160 (sub_180062160.c)
 *     sub_180062298 @ 0x180062298 (sub_180062298.c)
 *     sub_1800623D0 @ 0x1800623D0 (sub_1800623D0.c)
 *     sub_180062508 @ 0x180062508 (sub_180062508.c)
 *     sub_180065860 @ 0x180065860 (sub_180065860.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18002A37C @ 0x18002A37C (sub_18002A37C.c)
 *     sub_180040DEC @ 0x180040DEC (sub_180040DEC.c)
 *     sub_180041274 @ 0x180041274 (sub_180041274.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180066A60(__int64 a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  _QWORD *v8; // rax
  __int64 v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v15[4]; // [rsp+50h] [rbp-78h] BYREF
  _QWORD v16[4]; // [rsp+70h] [rbp-58h] BYREF

  sub_18002A37C(a1 + 16);
  v8 = sub_18001246C(&v14, a4);
  sub_180041274(a1, v16, v8);
  v9 = *a3;
  v10 = sub_180012440(v15, (__int64)v16);
  sub_180040DEC(v9, a2, (__int64)v10);
  sub_180013348((__int64)v16);
  v11 = a3[1];
  if ( v11 )
    sub_180010530(v11);
  v12 = a4[1];
  if ( v12 )
    sub_180010530(v12);
  return a2;
}
