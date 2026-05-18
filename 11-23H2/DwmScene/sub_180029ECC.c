/*
 * XREFs of sub_180029ECC @ 0x180029ECC
 * Callers:
 *     sub_180029B1C @ 0x180029B1C (sub_180029B1C.c)
 *     sub_180029BDC @ 0x180029BDC (sub_180029BDC.c)
 *     sub_180029C9C @ 0x180029C9C (sub_180029C9C.c)
 *     sub_180029D6C @ 0x180029D6C (sub_180029D6C.c)
 *     sub_18002A37C @ 0x18002A37C (sub_18002A37C.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18006EDE8 @ 0x18006EDE8 (sub_18006EDE8.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180029ECC(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // eax
  int v8; // r8d
  _QWORD v10[5]; // [rsp+38h] [rbp-40h] BYREF

  v10[4] = a2;
  v7 = (unsigned int)sub_180017648(v10, a2);
  sub_18006EDE8((_DWORD)a1, v7, v8, -2147024891, a4, 0);
  *a1 = &Spectre::Engine::EngineAccessDeniedException::`vftable';
  sub_180011B24(a2);
  return a1;
}
