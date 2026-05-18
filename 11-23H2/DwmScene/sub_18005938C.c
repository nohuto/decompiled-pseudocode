/*
 * XREFs of sub_18005938C @ 0x18005938C
 * Callers:
 *     sub_1800301D0 @ 0x1800301D0 (sub_1800301D0.c)
 *     sub_1800591E0 @ 0x1800591E0 (sub_1800591E0.c)
 *     sub_18008D684 @ 0x18008D684 (sub_18008D684.c)
 *     sub_180091D14 @ 0x180091D14 (sub_180091D14.c)
 *     sub_180097934 @ 0x180097934 (sub_180097934.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_1800294DC @ 0x1800294DC (sub_1800294DC.c)
 *     sub_180059C7C @ 0x180059C7C (sub_180059C7C.c)
 *     sub_18005CC00 @ 0x18005CC00 (sub_18005CC00.c)
 *     sub_1800810C0 @ 0x1800810C0 (sub_1800810C0.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_18005938C(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  _QWORD v10[4]; // [rsp+38h] [rbp-40h] BYREF

  sub_180010DD0(v10, (__int64)"Camera");
  sub_1800810C0(a1, v10, a2);
  sub_180011B24((__int64)v10);
  *(_QWORD *)a1 = &Spectre::Engine::Camera::`vftable';
  *(_DWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 128) = 1;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = -1;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = -1;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 15LL;
  *(_BYTE *)(a1 + 184) = 0;
  *(_QWORD *)(a1 + 216) = 0LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 240) = 15LL;
  *(_BYTE *)(a1 + 216) = 0;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 15LL;
  *(_BYTE *)(a1 + 248) = 0;
  v4 = a1 + 280;
  sub_1800294DC(a1 + 280, 4LL, 3LL, (__int64 (__fastcall *)(__int64))sub_180059350);
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_DWORD *)(a1 + 304) = 0;
  *(_DWORD *)(a1 + 308) = 1065353216;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_DWORD *)(a1 + 364) = 1065353216;
  *(_DWORD *)(a1 + 368) = 1065353216;
  *(_BYTE *)(a1 + 388) = 0;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_DWORD *)(a1 + 412) = 3;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_DWORD *)(a1 + 440) = 0;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  v5 = sub_18001090C(0x38uLL);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *(_QWORD *)(a1 + 448) = v5;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  sub_1800294DC(a1 + 548, 256LL, 4LL, sub_1800592A0);
  *(_QWORD *)(a1 + 1572) = 0LL;
  *(_QWORD *)(a1 + 1580) = 0LL;
  *(_QWORD *)(a1 + 1588) = 0LL;
  *(_QWORD *)(a1 + 1596) = 0LL;
  *(_QWORD *)(a1 + 1604) = 0LL;
  *(_QWORD *)(a1 + 1616) = 0LL;
  *(_QWORD *)(a1 + 1624) = 0LL;
  v6 = sub_18001090C(0x58uLL);
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *(_QWORD *)(a1 + 1616) = v6;
  *(_QWORD *)(a1 + 1632) = 0LL;
  *(_QWORD *)(a1 + 1640) = 0LL;
  *(_QWORD *)(a1 + 1648) = 0LL;
  *(_QWORD *)(a1 + 1656) = 0LL;
  *(_QWORD *)(a1 + 1664) = 0LL;
  *(_QWORD *)(a1 + 1672) = 0LL;
  *(_QWORD *)(a1 + 1680) = 0LL;
  *(_QWORD *)(a1 + 1688) = 0LL;
  *(_QWORD *)(a1 + 1696) = &off_1801C96A0;
  *(_QWORD *)(a1 + 1760) = 0LL;
  sub_18005CC00(a1);
  v7 = a1 + 292;
  while ( v4 != v7 )
  {
    sub_180059C7C(v4);
    v4 += 4LL;
  }
  v8 = *(_QWORD *)(a2 + 8);
  if ( v8 )
    sub_180010530(v8);
  return a1;
}
