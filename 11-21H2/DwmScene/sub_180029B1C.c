/*
 * XREFs of sub_180029B1C @ 0x180029B1C
 * Callers:
 *     sub_180011100 @ 0x180011100 (sub_180011100.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DD3C @ 0x18001DD3C (sub_18001DD3C.c)
 *     sub_18001DE64 @ 0x18001DE64 (sub_18001DE64.c)
 *     sub_18001DE70 @ 0x18001DE70 (sub_18001DE70.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_180029A18 @ 0x180029A18 (sub_180029A18.c)
 *     sub_18002B33C @ 0x18002B33C (sub_18002B33C.c)
 *     sub_18002BC44 @ 0x18002BC44 (sub_18002BC44.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180029B1C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r8
  __int64 v5; // rcx
  int *v6; // rax
  __int64 v7; // rax
  __int64 *v9[2]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v10[32]; // [rsp+30h] [rbp-58h] BYREF
  char *v11[3]; // [rsp+50h] [rbp-38h] BYREF
  unsigned __int64 v12; // [rsp+68h] [rbp-20h]

  v9[1] = (__int64 *)a1;
  sub_18002B33C(a1, 10LL, 3LL);
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::FrameBuffer::`vftable';
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  v9[0] = (__int64 *)sub_180011088(0x38uLL);
  sub_18001DE8C(v9[0], (__int64 *)v9);
  sub_18001DE8C((__int64 *)(v2 + 8), (__int64 *)v9);
  sub_18001DE8C((__int64 *)(v3 + 16), (__int64 *)v9);
  *(_WORD *)(v4 + 24) = 257;
  *(_QWORD *)(a1 + 120) = v4;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)sub_18001DE70((__int64)&unk_1801F74D8));
  v6 = (int *)sub_18001DE64(v5);
  sub_180029A18((__int64 *)v11, *v6);
  v7 = sub_18001DD3C((__int64)v10, (__int64)"FrameBuffer", v11);
  sub_18002BC44(a1, v7);
  if ( v12 >= 0x10 )
    sub_180010884(v11[0], v12 + 1);
  return a1;
}
