/*
 * XREFs of sub_180051128 @ 0x180051128
 * Callers:
 *     sub_180051710 @ 0x180051710 (sub_180051710.c)
 *     sub_180061AE8 @ 0x180061AE8 (sub_180061AE8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_180016268 @ 0x180016268 (sub_180016268.c)
 *     sub_1800810C0 @ 0x1800810C0 (sub_1800810C0.c)
 *     sub_18008141C @ 0x18008141C (sub_18008141C.c)
 *     sub_1800A3A14 @ 0x1800A3A14 (sub_1800A3A14.c)
 *     sub_1800A3D78 @ 0x1800A3D78 (sub_1800A3D78.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180051128(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  _QWORD v9[4]; // [rsp+28h] [rbp-30h] BYREF

  sub_180010DD0(v9, (__int64)"LightProbe");
  sub_1800810C0(a1, v9, a2);
  sub_180011B24((__int64)v9);
  *(_QWORD *)a1 = &Spectre::Engine::LightProbe::`vftable';
  *(_BYTE *)(a1 + 88) = 1;
  *(_OWORD *)(a1 + 92) = xmmword_180106A28;
  sub_1800A3A14(a1 + 108);
  sub_1800A3D78(a1 + 256, v4, v5, v6);
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 412) = 1065353216LL;
  *(_QWORD *)(a1 + 420) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  v7 = sub_18008141C(a1);
  sub_180016268(v7, (_QWORD *)(a1 + 448));
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_OWORD *)(a1 + 496) = xmmword_180106A08;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 528) = 1065353216;
  return a1;
}
