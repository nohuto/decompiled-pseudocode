/*
 * XREFs of sub_18003F590 @ 0x18003F590
 * Callers:
 *     sub_180045AA4 @ 0x180045AA4 (sub_180045AA4.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001266C @ 0x18001266C (sub_18001266C.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_180043324 @ 0x180043324 (sub_180043324.c)
 *     sub_1800436D4 @ 0x1800436D4 (sub_1800436D4.c)
 */

// Hidden C++ exception states: #wind=22
__int64 __fastcall sub_18003F590(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  __int64 *v12; // [rsp+50h] [rbp+18h] BYREF

  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::SceneNode::`vftable';
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(*a2 + 104LL);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  if ( a2[1] )
  {
    *(_QWORD *)(a1 + 72) = *a2;
    v5 = a2[1];
    *(_QWORD *)(a1 + 80) = v5;
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 12));
  }
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_BYTE *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_DWORD *)(a1 + 168) = 1065353216;
  *(_DWORD *)(a1 + 172) = 1065353216;
  *(_DWORD *)(a1 + 176) = 1065353216;
  *(_DWORD *)(a1 + 180) = 1065353216;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 224) = 1065353216LL;
  *(_QWORD *)(a1 + 232) = 0LL;
  *(_DWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 244) = 1065353216LL;
  *(_QWORD *)(a1 + 252) = 0LL;
  *(_DWORD *)(a1 + 260) = 0;
  *(_QWORD *)(a1 + 264) = 1065353216LL;
  *(_QWORD *)(a1 + 272) = 0LL;
  *(_DWORD *)(a1 + 280) = 0;
  *(_DWORD *)(a1 + 284) = 1065353216;
  *(_QWORD *)(a1 + 288) = 1065353216LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_DWORD *)(a1 + 304) = 0;
  *(_QWORD *)(a1 + 308) = 1065353216LL;
  *(_QWORD *)(a1 + 316) = 0LL;
  *(_DWORD *)(a1 + 324) = 0;
  *(_QWORD *)(a1 + 328) = 1065353216LL;
  *(_QWORD *)(a1 + 336) = 0LL;
  *(_DWORD *)(a1 + 344) = 0;
  *(_DWORD *)(a1 + 348) = 1065353216;
  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = a3;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_QWORD *)(a1 + 392) = 0LL;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 15LL;
  *(_BYTE *)(a1 + 400) = 0;
  v12 = (__int64 *)(a1 + 432);
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_QWORD *)(a1 + 440) = 0LL;
  v12 = (__int64 *)sub_180011088(0x60uLL);
  sub_18001DE8C(v12, (__int64 *)&v12);
  sub_18001DE8C((__int64 *)(v6 + 8), (__int64 *)&v12);
  sub_18001DE8C((__int64 *)(v7 + 16), (__int64 *)&v12);
  *(_WORD *)(v8 + 24) = 257;
  *(_QWORD *)(a1 + 432) = v8;
  *(_QWORD *)(a1 + 448) = 0LL;
  *(_QWORD *)(a1 + 456) = 0LL;
  *(_QWORD *)(a1 + 464) = 0LL;
  *(_QWORD *)(a1 + 472) = 0LL;
  *(_QWORD *)(a1 + 480) = 0LL;
  *(_QWORD *)(a1 + 488) = 0LL;
  *(_QWORD *)(a1 + 496) = 0LL;
  *(_QWORD *)(a1 + 504) = 0LL;
  *(_QWORD *)(a1 + 512) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_QWORD *)(a1 + 528) = 0LL;
  *(_QWORD *)(a1 + 536) = 0LL;
  *(_QWORD *)(a1 + 544) = 0LL;
  *(_QWORD *)(a1 + 552) = 0LL;
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 584) = 0LL;
  v9 = _InterlockedIncrement64((volatile signed __int64 *)sub_18001266C((__int64)&unk_1801F4B40));
  *(_QWORD *)(a1 + 208) = v9;
  v10 = *(_QWORD *)(a1 + 216);
  if ( v9 >= v10 )
    v10 = v9;
  *(_QWORD *)(a1 + 216) = v10;
  sub_1800436D4(a1);
  *(_QWORD *)(a1 + 448) |= 1uLL;
  sub_1800436D4(a1);
  *(_QWORD *)(a1 + 448) |= 2uLL;
  sub_1800436D4(a1);
  *(_QWORD *)(a1 + 448) |= 4uLL;
  sub_1800436D4(a1);
  *(_QWORD *)(a1 + 448) |= 0x10000uLL;
  sub_180043324(a1);
  sub_180010910((__int64)a2);
  return a1;
}
