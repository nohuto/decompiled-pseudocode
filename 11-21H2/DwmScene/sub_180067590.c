/*
 * XREFs of sub_180067590 @ 0x180067590
 * Callers:
 *     sub_180066E10 @ 0x180066E10 (sub_180066E10.c)
 *     sub_18008AEA0 @ 0x18008AEA0 (sub_18008AEA0.c)
 *     sub_18008BD68 @ 0x18008BD68 (sub_18008BD68.c)
 *     sub_18008C370 @ 0x18008C370 (sub_18008C370.c)
 *     sub_18008CAF4 @ 0x18008CAF4 (sub_18008CAF4.c)
 *     sub_1800A927C @ 0x1800A927C (sub_1800A927C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_18001875C @ 0x18001875C (sub_18001875C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180067590(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::IShaderExtension::`vftable';
  sub_18001875C((__int64 *)(a1 + 24), a2);
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 15LL;
  *(_BYTE *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 104) = 1;
  v4 = *(_QWORD *)(a2 + 24);
  if ( v4 >= 0x10 )
    sub_180010884(*(char **)a2, v4 + 1);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  return a1;
}
