/*
 * XREFs of sub_18004ADAC @ 0x18004ADAC
 * Callers:
 *     sub_180014288 @ 0x180014288 (sub_180014288.c)
 *     sub_18004AC38 @ 0x18004AC38 (sub_18004AC38.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18003D3C8 @ 0x18003D3C8 (sub_18003D3C8.c)
 *     sub_18004CB98 @ 0x18004CB98 (sub_18004CB98.c)
 *     sub_1800810C0 @ 0x1800810C0 (sub_1800810C0.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18004ADAC(__int64 a1, __int64 *a2)
{
  __int64 v4; // rcx
  _QWORD v6[4]; // [rsp+30h] [rbp-38h] BYREF

  sub_180010DD0(v6, (__int64)"Mesh Instance");
  sub_1800810C0(a1, v6, a2);
  sub_180011B24((__int64)v6);
  *(_QWORD *)a1 = &Spectre::Engine::MeshInstance::`vftable';
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_BYTE *)(a1 + 168) = -1;
  *(_OWORD *)(a1 + 172) = xmmword_180106A80;
  sub_18003D3C8(*a2, 3, 1);
  sub_18004CB98(a1, 1LL);
  v4 = a2[1];
  if ( v4 )
    sub_180010530(v4);
  return a1;
}
