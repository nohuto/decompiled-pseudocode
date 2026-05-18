/*
 * XREFs of sub_1800A927C @ 0x1800A927C
 * Callers:
 *     sub_180088EC8 @ 0x180088EC8 (sub_180088EC8.c)
 *     sub_18008C7D0 @ 0x18008C7D0 (sub_18008C7D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180067590 @ 0x180067590 (sub_180067590.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800A927C(_QWORD *a1, __int64 a2)
{
  __int64 *v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v7[5]; // [rsp+28h] [rbp-40h] BYREF

  v7[4] = a2;
  v4 = sub_18001875C(v7, a2);
  sub_180067590((__int64)a1, (__int64)v4);
  *a1 = &Spectre::Engine::BaseShaderExtension::`vftable';
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[18] = 0LL;
  v5 = *(_QWORD *)(a2 + 24);
  if ( v5 >= 0x10 )
    sub_180010884(*(char **)a2, v5 + 1);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
