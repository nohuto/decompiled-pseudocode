/*
 * XREFs of sub_180098904 @ 0x180098904
 * Callers:
 *     sub_18007CAE4 @ 0x18007CAE4 (sub_18007CAE4.c)
 *     sub_18007FAE8 @ 0x18007FAE8 (sub_18007FAE8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18005F7EC @ 0x18005F7EC (sub_18005F7EC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180098904(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD v6[5]; // [rsp+28h] [rbp-40h] BYREF

  v6[4] = a2;
  v4 = sub_180017648(v6, a2);
  sub_18005F7EC((__int64)a1, (__int64)v4);
  *a1 = &Spectre::Engine::BaseShaderExtension::`vftable';
  a1[16] = 0LL;
  a1[17] = 0LL;
  a1[18] = 0LL;
  sub_180011B24(a2);
  return a1;
}
