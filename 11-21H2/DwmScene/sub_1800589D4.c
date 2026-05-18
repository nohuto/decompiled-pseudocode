/*
 * XREFs of sub_1800589D4 @ 0x1800589D4
 * Callers:
 *     sub_180058598 @ 0x180058598 (sub_180058598.c)
 *     sub_18006B7C0 @ 0x18006B7C0 (sub_18006B7C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_180017558 @ 0x180017558 (sub_180017558.c)
 *     sub_18008E340 @ 0x18008E340 (sub_18008E340.c)
 *     sub_18008E70C @ 0x18008E70C (sub_18008E70C.c)
 *     sub_1800B623C @ 0x1800B623C (sub_1800B623C.c)
 *     sub_1800B659C @ 0x1800B659C (sub_1800B659C.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800589D4(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // rax
  char *v9[3]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-18h]

  v9[2] = 0LL;
  v10 = 15LL;
  LOBYTE(v9[0]) = 0;
  sub_180012190((__int64 *)v9, "LightProbe", 0xAuLL);
  sub_18008E340(a1, v9, a2);
  if ( v10 >= 0x10 )
    sub_180010884(v9[0], v10 + 1);
  *(_QWORD *)a1 = &Spectre::Engine::LightProbe::`vftable';
  *(_BYTE *)(a1 + 88) = 1;
  *(_OWORD *)(a1 + 92) = xmmword_180128A10;
  sub_1800B623C(a1 + 108);
  sub_1800B659C(a1 + 256, v4, v5, v6);
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 412) = 1065353216LL;
  *(_QWORD *)(a1 + 420) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  v7 = (__int64 *)sub_18008E70C(a1);
  sub_180017558(v7, (_QWORD *)(a1 + 448));
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_OWORD *)(a1 + 496) = xmmword_1801289A8;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 528) = 1065353216;
  return a1;
}
