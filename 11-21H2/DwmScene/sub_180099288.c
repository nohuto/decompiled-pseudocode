/*
 * XREFs of sub_180099288 @ 0x180099288
 * Callers:
 *     sub_180099870 @ 0x180099870 (sub_180099870.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180079BE8 @ 0x180079BE8 (sub_180079BE8.c)
 */

_QWORD *__fastcall sub_180099288(_QWORD *a1, __int64 a2, __int64 a3, const char *a4)
{
  __int64 *v7; // rax
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  __int64 v11[5]; // [rsp+38h] [rbp-40h] BYREF

  v11[4] = a2;
  v7 = sub_18001875C(v11, a2);
  sub_180079BE8(a1, (__int64)v7, v8, -2147418113, a4, 0);
  *a1 = &Spectre::Engine::EngineUnexpectedException::`vftable';
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 >= 0x10 )
    sub_180010884(*(char **)a2, v9 + 1);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
