/*
 * XREFs of sub_18004E738 @ 0x18004E738
 * Callers:
 *     sub_1800305EC @ 0x1800305EC (sub_1800305EC.c)
 * Callees:
 *     sub_18000C8C8 @ 0x18000C8C8 (sub_18000C8C8.c)
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180011BA0 @ 0x180011BA0 (sub_180011BA0.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_180047200 @ 0x180047200 (sub_180047200.c)
 *     sub_18004D538 @ 0x18004D538 (sub_18004D538.c)
 *     sub_18004E6D8 @ 0x18004E6D8 (sub_18004E6D8.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_18004E738(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 *v10; // r10
  __int64 *v12; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v14; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v15; // [rsp+A8h] [rbp+58h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_18004E6D8((__int64 *)(a1 + 16));
  sub_18000C8C8(a1 + 32, 32LL, 64LL);
  *(_DWORD *)(a1 + 2080) = 0;
  v14 = a1 + 2088;
  *(_QWORD *)(a1 + 2088) = 0LL;
  *(_QWORD *)(a1 + 2096) = 0LL;
  v4 = sub_18001C190();
  *(_QWORD *)v4 = v4;
  *(_QWORD *)(v4 + 8) = v4;
  *(_QWORD *)(v4 + 16) = v4;
  *(_WORD *)(v4 + 24) = 257;
  *(_QWORD *)(a1 + 2088) = v4;
  sub_18000C8C8(a1 + 2104, 32LL, 512LL);
  *(_DWORD *)(a1 + 18488) = 0;
  sub_180017648((_QWORD *)(a1 + 18496), (__int64)&unk_1801D7E88);
  sub_180017648((_QWORD *)(a1 + 18528), (__int64)&unk_1801D8408);
  v14 = a1 + 18560;
  *(_QWORD *)(a1 + 18560) = 0LL;
  *(_QWORD *)(a1 + 18568) = 0LL;
  v5 = sub_18001C190();
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *(_QWORD *)(a1 + 18560) = v5;
  v14 = a1 + 18576;
  *(_QWORD *)(a1 + 18576) = 0LL;
  *(_QWORD *)(a1 + 18584) = 0LL;
  v6 = sub_18001C190();
  *(_QWORD *)v6 = v6;
  *(_QWORD *)(v6 + 8) = v6;
  *(_QWORD *)(v6 + 16) = v6;
  *(_WORD *)(v6 + 24) = 257;
  *(_QWORD *)(a1 + 18576) = v6;
  v14 = a1 + 18592;
  *(_QWORD *)(a1 + 18592) = 0LL;
  *(_QWORD *)(a1 + 18600) = 0LL;
  v7 = sub_18001C190();
  *(_QWORD *)v7 = v7;
  *(_QWORD *)(v7 + 8) = v7;
  *(_QWORD *)(v7 + 16) = v7;
  *(_WORD *)(v7 + 24) = 257;
  *(_QWORD *)(a1 + 18592) = v7;
  v14 = a1 + 18608;
  *(_QWORD *)(a1 + 18608) = 0LL;
  *(_QWORD *)(a1 + 18616) = 0LL;
  v8 = sub_18001090C(0x38uLL);
  *(_QWORD *)v8 = v8;
  *(_QWORD *)(v8 + 8) = v8;
  *(_QWORD *)(v8 + 16) = v8;
  *(_WORD *)(v8 + 24) = 257;
  *(_QWORD *)(a1 + 18608) = v8;
  *(_BYTE *)(a1 + 18624) = 1;
  *(_QWORD *)(a1 + 18632) = 0LL;
  *(_QWORD *)(a1 + 18640) = 0LL;
  *(_QWORD *)(a1 + 18648) = 0LL;
  *(_QWORD *)(a1 + 18656) = 0LL;
  LODWORD(v14) = 3;
  v13[0] = &v14;
  v13[1] = (char *)&v14 + 4;
  *(_QWORD *)(a1 + 18664) = 0LL;
  *(_QWORD *)(a1 + 18672) = 0LL;
  *(_QWORD *)(a1 + 18680) = 0LL;
  v15 = (__int64)&v14 + 4;
  v12 = &v14;
  v9 = sub_180047200(v13);
  sub_18004D538(v10, v9, (void **)&v12, &v15);
  *(_QWORD *)(a1 + 18688) = a2;
  sub_180011BA0((void **)(a1 + 18456), "<invalid>", 9uLL);
  return a1;
}
