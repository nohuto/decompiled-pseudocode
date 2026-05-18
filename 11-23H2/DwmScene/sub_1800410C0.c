/*
 * XREFs of sub_1800410C0 @ 0x1800410C0
 * Callers:
 *     sub_18002DF34 @ 0x18002DF34 (sub_18002DF34.c)
 *     sub_18004093C @ 0x18004093C (sub_18004093C.c)
 *     sub_180040DEC @ 0x180040DEC (sub_180040DEC.c)
 *     sub_180040F64 @ 0x180040F64 (sub_180040F64.c)
 *     sub_180041010 @ 0x180041010 (sub_180041010.c)
 *     sub_1800412EC @ 0x1800412EC (sub_1800412EC.c)
 *     sub_18004189C @ 0x18004189C (sub_18004189C.c)
 *     sub_180041D50 @ 0x180041D50 (sub_180041D50.c)
 *     sub_180064EF0 @ 0x180064EF0 (sub_180064EF0.c)
 *     sub_180066CA0 @ 0x180066CA0 (sub_180066CA0.c)
 *     sub_18006A694 @ 0x18006A694 (sub_18006A694.c)
 *     sub_18008E410 @ 0x18008E410 (sub_18008E410.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180013348 @ 0x180013348 (sub_180013348.c)
 *     sub_18002A37C @ 0x18002A37C (sub_18002A37C.c)
 *     sub_18003F44C @ 0x18003F44C (sub_18003F44C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800410C0(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rax
  __int128 *v7; // rax
  char v8; // bl
  __int64 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  __int128 v12; // [rsp+38h] [rbp-30h] BYREF

  *(_QWORD *)&v12 = a3;
  sub_18002A37C(a1 + 16);
  v6 = sub_18003F44C(a1 + 88, a3);
  if ( v6 == *(_QWORD *)(a1 + 88) )
  {
    v12 = 0LL;
    v7 = &v12;
    v8 = 5;
  }
  else
  {
    v7 = (__int128 *)sub_18001246C(&v10, (_QWORD *)(v6 + 64));
    v8 = 6;
  }
  sub_18001246C(a2, v7);
  if ( (v8 & 2) != 0 )
  {
    v8 &= ~2u;
    if ( v11 )
      sub_180010530(v11);
  }
  if ( (v8 & 1) != 0 && *((_QWORD *)&v12 + 1) )
    sub_180010530(*((__int64 *)&v12 + 1));
  sub_180013348(a3);
  return a2;
}
