/*
 * XREFs of sub_180027068 @ 0x180027068
 * Callers:
 *     sub_180059A9C @ 0x180059A9C (sub_180059A9C.c)
 *     sub_1800D8F04 @ 0x1800D8F04 (sub_1800D8F04.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_180026F0C @ 0x180026F0C (sub_180026F0C.c)
 *     sub_180026FCC @ 0x180026FCC (sub_180026FCC.c)
 *     sub_18002C2F4 @ 0x18002C2F4 (sub_18002C2F4.c)
 *     sub_18002C694 @ 0x18002C694 (sub_18002C694.c)
 *     sub_18007AF8C @ 0x18007AF8C (sub_18007AF8C.c)
 *     sub_18007B960 @ 0x18007B960 (sub_18007B960.c)
 */

// Hidden C++ exception states: #wind=20
__int64 __fastcall sub_180027068(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 perf_frequency; // rbx
  __int64 perf_counter; // rax
  __int64 *v13; // [rsp+A8h] [rbp+10h] BYREF
  _QWORD *v14; // [rsp+B0h] [rbp+18h]

  v14 = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a2 )
    v6 = sub_18002C694(a2 + 8);
  else
    v6 = 1;
  sub_18002C2F4(a1 + 24, v6);
  *(_QWORD *)a1 = &Spectre::Engine::RenderDevice::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 7LL;
  *(_WORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 7LL;
  *(_WORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 7LL;
  *(_WORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 7LL;
  *(_WORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_QWORD *)(a1 + 232) = 7LL;
  *(_WORD *)(a1 + 208) = 0;
  *(_DWORD *)(a1 + 240) = 1;
  *(_DWORD *)(a1 + 244) = _InterlockedExchangeAdd((volatile signed __int32 *)sub_18001DE70((__int64)&unk_1801F4B3C), 1u);
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
  v13 = (__int64 *)(a1 + 496);
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  v13 = (__int64 *)sub_180011088(0x68uLL);
  sub_18001DE8C(v13, (__int64 *)&v13);
  sub_18001DE8C((__int64 *)(v7 + 8), (__int64 *)&v13);
  sub_18001DE8C((__int64 *)(v8 + 16), (__int64 *)&v13);
  *(_WORD *)(v9 + 24) = 257;
  *(_QWORD *)(a1 + 496) = v9;
  Mtx_init_in_situ((_Mtx_t)(a1 + 512), 2);
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_QWORD *)(a1 + 600) = 0LL;
  *(_QWORD *)(a1 + 592) = *a3;
  *(_QWORD *)(a1 + 600) = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_18007AF8C(a1 + 608);
  sub_18007AF8C(a1 + 832);
  sub_18007AF8C(a1 + 1056);
  sub_18007B960(a1 + 1280);
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
  sub_180026F0C(a1 + 3992);
  sub_180026FCC((__int64 *)(a1 + 4096), a1);
  *(_OWORD *)(a1 + 424) = 0LL;
  *(_OWORD *)(a1 + 440) = 0LL;
  *(_OWORD *)(a1 + 456) = 0LL;
  *(_OWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  *(_QWORD *)(a1 + 424) = 1000000000 * (perf_counter % perf_frequency) / perf_frequency
                        + 1000000000 * (perf_counter / perf_frequency);
  sub_180010910((__int64)a3);
  return a1;
}
