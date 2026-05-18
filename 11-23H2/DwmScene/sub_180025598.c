/*
 * XREFs of sub_180025598 @ 0x180025598
 * Callers:
 *     sub_180052770 @ 0x180052770 (sub_180052770.c)
 *     sub_1800C4174 @ 0x1800C4174 (sub_1800C4174.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_1800211EC @ 0x1800211EC (sub_1800211EC.c)
 *     sub_1800254A8 @ 0x1800254A8 (sub_1800254A8.c)
 *     sub_180025524 @ 0x180025524 (sub_180025524.c)
 *     sub_1800258F0 @ 0x1800258F0 (sub_1800258F0.c)
 *     sub_180029F5C @ 0x180029F5C (sub_180029F5C.c)
 *     sub_18002A2D4 @ 0x18002A2D4 (sub_18002A2D4.c)
 *     sub_18007007C @ 0x18007007C (sub_18007007C.c)
 *     sub_1800707C4 @ 0x1800707C4 (sub_1800707C4.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall sub_180025598(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // eax
  __int64 v7; // rcx
  _QWORD *v9; // [rsp+A0h] [rbp+18h] BYREF

  v9 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a2 )
    v6 = sub_18002A2D4(a2 + 8);
  else
    v6 = 1;
  sub_180029F5C(a1 + 24, v6);
  *(_QWORD *)a1 = &Spectre::Engine::RenderDevice::`vftable';
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 7LL;
  *(_WORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 7LL;
  *(_WORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 7LL;
  *(_WORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 7LL;
  *(_WORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 208) = 0LL;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 7LL;
  *(_WORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 240) = 1;
  *(_DWORD *)(a1 + 244) = sub_1800211EC((__int64)&unk_1801D2B5C);
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_QWORD *)(a1 + 256) = 0LL;
  *(_QWORD *)(a1 + 264) = 0LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_QWORD *)(a1 + 280) = 0LL;
  *(_DWORD *)(a1 + 288) = 1;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = 0LL;
  *(_BYTE *)(a1 + 312) = 0;
  *(_DWORD *)(a1 + 316) = 40960;
  *(_QWORD *)(a1 + 320) = 45312LL;
  *(_QWORD *)(a1 + 328) = 1LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_QWORD *)(a1 + 344) = 0LL;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_DWORD *)(a1 + 376) = 0;
  *(_DWORD *)(a1 + 384) = 3;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 400) = 0LL;
  *(_DWORD *)(a1 + 408) = 0;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  sub_1800258F0(a1 + 496);
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_QWORD *)(a1 + 600) = 0LL;
  *(_QWORD *)(a1 + 592) = *a3;
  *(_QWORD *)(a1 + 600) = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_18007007C(a1 + 608);
  sub_18007007C(a1 + 832);
  sub_18007007C(a1 + 1056);
  sub_1800707C4(a1 + 1280);
  *(_QWORD *)(a1 + 3840) = 0LL;
  *(_QWORD *)(a1 + 3848) = 0LL;
  *(_QWORD *)(a1 + 3856) = 0LL;
  *(_QWORD *)(a1 + 3864) = 0LL;
  *(_QWORD *)(a1 + 3872) = 0LL;
  *(_QWORD *)(a1 + 3880) = 3LL;
  *(_QWORD *)(a1 + 3888) = 0LL;
  *(_QWORD *)(a1 + 3896) = 0LL;
  *(_QWORD *)(a1 + 3904) = 0LL;
  *(_QWORD *)(a1 + 3912) = 0LL;
  *(_DWORD *)(a1 + 3920) = 0;
  *(_QWORD *)(a1 + 3928) = 0LL;
  *(_QWORD *)(a1 + 3936) = 0LL;
  *(_QWORD *)(a1 + 3944) = 0LL;
  *(_QWORD *)(a1 + 3952) = 0LL;
  *(_QWORD *)(a1 + 3960) = 0LL;
  *(_QWORD *)(a1 + 3968) = 0LL;
  *(_WORD *)(a1 + 3976) = 0;
  *(_QWORD *)(a1 + 3984) = a2;
  sub_1800254A8(a1 + 3992);
  sub_180025524((_QWORD *)(a1 + 4096), a1);
  *(_OWORD *)(a1 + 424) = 0LL;
  *(_OWORD *)(a1 + 440) = 0LL;
  *(_OWORD *)(a1 + 456) = 0LL;
  *(_OWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 424) = *sub_180011CA0(&v9);
  v7 = a3[1];
  if ( v7 )
    sub_180010530(v7);
  return a1;
}
