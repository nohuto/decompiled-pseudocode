/*
 * XREFs of sub_18009660C @ 0x18009660C
 * Callers:
 *     sub_180063890 @ 0x180063890 (sub_180063890.c)
 *     sub_180096570 @ 0x180096570 (sub_180096570.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_1800810C0 @ 0x1800810C0 (sub_1800810C0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009660C(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rcx
  _QWORD v6[4]; // [rsp+28h] [rbp-30h] BYREF

  sub_180010DD0(v6, (__int64)"Aimer");
  sub_1800810C0(a1, (__int64)v6, a2);
  sub_180011B24((__int64)v6);
  *(_QWORD *)a1 = &Spectre::Engine::Aimer::`vftable';
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_OWORD *)(a1 + 152) = xmmword_180115378;
  v4 = a2[1];
  if ( v4 )
    sub_180010530(v4);
  return a1;
}
