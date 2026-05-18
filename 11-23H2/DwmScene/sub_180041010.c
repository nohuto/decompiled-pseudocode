/*
 * XREFs of sub_180041010 @ 0x180041010
 * Callers:
 *     sub_18001BF00 @ 0x18001BF00 (sub_18001BF00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180012440 @ 0x180012440 (sub_180012440.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18002A37C @ 0x18002A37C (sub_18002A37C.c)
 *     sub_1800410C0 @ 0x1800410C0 (sub_1800410C0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180041010(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  __int64 v5; // rbx
  _BYTE v7[8]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v8; // [rsp+28h] [rbp-40h]
  _QWORD v9[5]; // [rsp+30h] [rbp-38h] BYREF

  v9[4] = a2;
  sub_18002A37C(a1 + 16);
  v4 = sub_180012440(v9, a2);
  v5 = *(_QWORD *)sub_1800410C0(a1, v7, v4);
  if ( v8 )
    sub_180010530(v8);
  sub_180013348(a2);
  return v5 + 48;
}
