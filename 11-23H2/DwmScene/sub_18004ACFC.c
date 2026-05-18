/*
 * XREFs of sub_18004ACFC @ 0x18004ACFC
 * Callers:
 *     sub_18004B580 @ 0x18004B580 (sub_18004B580.c)
 *     sub_180081210 @ 0x180081210 (sub_180081210.c)
 *     sub_18008F6D0 @ 0x18008F6D0 (sub_18008F6D0.c)
 *     sub_18008F990 @ 0x18008F990 (sub_18008F990.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18006EDE8 @ 0x18006EDE8 (sub_18006EDE8.c)
 */

_QWORD *__fastcall sub_18004ACFC(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // eax
  int v8; // r8d
  _QWORD v10[5]; // [rsp+38h] [rbp-40h] BYREF

  v10[4] = a2;
  v7 = (unsigned int)sub_180017648(v10, a2);
  sub_18006EDE8((_DWORD)a1, v7, v8, -2147467263, a4, 0);
  *a1 = &Spectre::Engine::EngineNotImplException::`vftable';
  sub_180011B24(a2);
  return a1;
}
