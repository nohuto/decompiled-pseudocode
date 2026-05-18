/*
 * XREFs of sub_180044918 @ 0x180044918
 * Callers:
 *     sub_18004576C @ 0x18004576C (sub_18004576C.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18002C2F4 @ 0x18002C2F4 (sub_18002C2F4.c)
 *     sub_180044734 @ 0x180044734 (sub_180044734.c)
 *     sub_1800FC230 @ 0x1800FC230 (sub_1800FC230.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180044918(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 *v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v12; // [rsp+38h] [rbp+10h] BYREF

  v11 = (__int64 *)a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_18002C2F4(a1 + 16, 0);
  *(_QWORD *)(a1 + 72) = 0xFFFFFFFF00000001uLL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v12 = (__int64 *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v12 = (__int64 *)sub_180011088(0x50uLL);
  sub_18001DE8C(v12, (__int64 *)&v12);
  sub_18001DE8C((__int64 *)(v4 + 8), (__int64 *)&v12);
  sub_18001DE8C((__int64 *)(v5 + 16), (__int64 *)&v12);
  *(_WORD *)(v6 + 24) = 257;
  *(_QWORD *)(a1 + 88) = v6;
  *(_QWORD *)(a1 + 104) = a2;
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 116) = 0;
  sub_180044734(a1 + 120);
  sub_1800FC230(a1 + 184);
  *(_DWORD *)(a1 + 192) = 0;
  v12 = (__int64 *)(a1 + 200);
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  v11 = (__int64 *)sub_180011088(0x38uLL);
  sub_18001DE8C(v11, (__int64 *)&v11);
  sub_18001DE8C((__int64 *)(v7 + 8), (__int64 *)&v11);
  sub_18001DE8C((__int64 *)(v8 + 16), (__int64 *)&v11);
  *(_WORD *)(v9 + 24) = 257;
  *(_QWORD *)(a1 + 200) = v9;
  return a1;
}
