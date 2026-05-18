/*
 * XREFs of sub_18005F7EC @ 0x18005F7EC
 * Callers:
 *     sub_18005F568 @ 0x18005F568 (sub_18005F568.c)
 *     sub_18007E850 @ 0x18007E850 (sub_18007E850.c)
 *     sub_18007F388 @ 0x18007F388 (sub_18007F388.c)
 *     sub_18007F77C @ 0x18007F77C (sub_18007F77C.c)
 *     sub_18007FD84 @ 0x18007FD84 (sub_18007FD84.c)
 *     sub_180098904 @ 0x180098904 (sub_180098904.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18005F7EC(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::IShaderExtension::`vftable';
  sub_180017648((_QWORD *)(a1 + 24), a2);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 15LL;
  *(_BYTE *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 104) = 1;
  sub_180011B24(a2);
  return a1;
}
