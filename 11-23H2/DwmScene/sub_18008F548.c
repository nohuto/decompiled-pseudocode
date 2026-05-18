/*
 * XREFs of sub_18008F548 @ 0x18008F548
 * Callers:
 *     sub_1800619C8 @ 0x1800619C8 (sub_1800619C8.c)
 *     sub_18008F7C0 @ 0x18008F7C0 (sub_18008F7C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_1800810C0 @ 0x1800810C0 (sub_1800810C0.c)
 *     sub_180090FAC @ 0x180090FAC (sub_180090FAC.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18008F548(__int64 a1, _QWORD *a2)
{
  _QWORD v5[4]; // [rsp+28h] [rbp-30h] BYREF

  sub_180010DD0(v5, (__int64)"ColorTransform");
  sub_1800810C0(a1, (__int64)v5, a2);
  sub_180011B24((__int64)v5);
  *(_QWORD *)a1 = &Spectre::Engine::ColorTransform::`vftable';
  *(_BYTE *)(a1 + 88) = 1;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_DWORD *)(a1 + 160) = 1065353216;
  sub_180090FAC(a1);
  return a1;
}
