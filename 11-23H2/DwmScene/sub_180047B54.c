/*
 * XREFs of sub_180047B54 @ 0x180047B54
 * Callers:
 *     sub_180048EE8 @ 0x180048EE8 (sub_180048EE8.c)
 *     sub_180049130 @ 0x180049130 (sub_180049130.c)
 *     sub_180049288 @ 0x180049288 (sub_180049288.c)
 *     sub_180049360 @ 0x180049360 (sub_180049360.c)
 *     sub_18004951C @ 0x18004951C (sub_18004951C.c)
 *     sub_1800496A8 @ 0x1800496A8 (sub_1800496A8.c)
 *     sub_1800497F8 @ 0x1800497F8 (sub_1800497F8.c)
 *     sub_180049938 @ 0x180049938 (sub_180049938.c)
 *     sub_180049B14 @ 0x180049B14 (sub_180049B14.c)
 *     sub_180049C54 @ 0x180049C54 (sub_180049C54.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18006EDE8 @ 0x18006EDE8 (sub_18006EDE8.c)
 */

_QWORD *__fastcall sub_180047B54(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // eax
  int v8; // r8d
  _QWORD v10[5]; // [rsp+38h] [rbp-40h] BYREF

  v10[4] = a2;
  v7 = (unsigned int)sub_180017648(v10, a2);
  sub_18006EDE8((_DWORD)a1, v7, v8, -2147467261, a4, 0);
  *a1 = &Spectre::Engine::EngineInvalidPointerException::`vftable';
  sub_180011B24(a2);
  return a1;
}
