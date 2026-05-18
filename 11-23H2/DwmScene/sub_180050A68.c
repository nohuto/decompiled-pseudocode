/*
 * XREFs of sub_180050A68 @ 0x180050A68
 * Callers:
 *     sub_180031048 @ 0x180031048 (sub_180031048.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180044E50 @ 0x180044E50 (sub_180044E50.c)
 *     sub_180045270 @ 0x180045270 (sub_180045270.c)
 *     sub_18004F214 @ 0x18004F214 (sub_18004F214.c)
 *     sub_18004F718 @ 0x18004F718 (sub_18004F718.c)
 *     sub_1800829E4 @ 0x1800829E4 (sub_1800829E4.c)
 *     sub_180082B30 @ 0x180082B30 (sub_180082B30.c)
 *     sub_18008349C @ 0x18008349C (sub_18008349C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180050A68(__int64 a1)
{
  __int64 *v2; // rax
  _QWORD *v3; // rsi
  __int64 v4; // rbx
  __int64 *v5; // rax
  _QWORD *v6; // rax
  __int64 v8; // [rsp+28h] [rbp-19h] BYREF
  __int64 v9; // [rsp+30h] [rbp-11h]
  _BYTE v10[64]; // [rsp+48h] [rbp+7h] BYREF

  v2 = sub_18004F718(a1, &v8, 1u);
  v3 = (_QWORD *)(a1 + 18632);
  sub_180011020((_QWORD *)(a1 + 18632), v2);
  if ( v9 )
    sub_180010530(v9);
  v4 = *v3;
  sub_180010DD0(&v8, (__int64)"Global");
  sub_18008349C(v4, &v8);
  sub_180011B24((__int64)&v8);
  sub_180082B30(*v3);
  v5 = (__int64 *)sub_1800829E4(*v3, &v8);
  sub_180011020((_QWORD *)(a1 + 18648), v5);
  if ( v9 )
    sub_180010530(v9);
  v6 = sub_180010DD0(&v8, (__int64)"Global/RenderTargetSize");
  sub_180044E50((__int64)v10, (__int64)v6, 5);
  sub_18004F214(a1);
  return sub_180045270((__int64)v10);
}
