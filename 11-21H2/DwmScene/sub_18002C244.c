/*
 * XREFs of sub_18002C244 @ 0x18002C244
 * Callers:
 *     sub_18002BE50 @ 0x18002BE50 (sub_18002BE50.c)
 *     sub_18002BF28 @ 0x18002BF28 (sub_18002BF28.c)
 *     LanguageEnumProc @ 0x18002C000 (LanguageEnumProc.c)
 *     sub_18002C0EC @ 0x18002C0EC (sub_18002C0EC.c)
 *     sub_18002C73C @ 0x18002C73C (sub_18002C73C.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 *     sub_180079BE8 @ 0x180079BE8 (sub_180079BE8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002C244(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // eax
  int v8; // r8d
  unsigned __int64 v9; // rdx
  __int64 v11[5]; // [rsp+38h] [rbp-40h] BYREF

  v11[4] = a2;
  v7 = (unsigned int)sub_18001875C(v11, a2);
  sub_180079BE8((_DWORD)a1, v7, v8, -2147024891, a4, 0);
  *a1 = &Spectre::Engine::EngineAccessDeniedException::`vftable';
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 >= 0x10 )
    sub_180010884(*(char **)a2, v9 + 1);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
