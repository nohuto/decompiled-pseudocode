/*
 * XREFs of sub_18006EDE8 @ 0x18006EDE8
 * Callers:
 *     sub_180029ECC @ 0x180029ECC (sub_180029ECC.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_180047B54 @ 0x180047B54 (sub_180047B54.c)
 *     sub_18004ACFC @ 0x18004ACFC (sub_18004ACFC.c)
 *     sub_18008ACE0 @ 0x18008ACE0 (sub_18008ACE0.c)
 *     sub_1800CD298 @ 0x1800CD298 (sub_1800CD298.c)
 *     sub_1800CE190 @ 0x1800CE190 (sub_1800CE190.c)
 *     sub_1800CECC0 @ 0x1800CECC0 (sub_1800CECC0.c)
 *     sub_1800D3ACC @ 0x1800D3ACC (sub_1800D3ACC.c)
 *     sub_1800D85E8 @ 0x1800D85E8 (sub_1800D85E8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001C45C @ 0x18001C45C (sub_18001C45C.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18006EDE8(_QWORD *a1, __int64 a2, __int64 a3, int a4, const char *a5, char a6)
{
  sub_18001C45C((__int64)a1, a4, a5, a6);
  *a1 = &Spectre::Engine::EngineException::`vftable';
  sub_180011B24(a2);
  return a1;
}
