/*
 * XREFs of sub_1800447C8 @ 0x1800447C8
 * Callers:
 *     sub_1800456DC @ 0x1800456DC (sub_1800456DC.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18002C2F4 @ 0x18002C2F4 (sub_18002C2F4.c)
 *     sub_18002C694 @ 0x18002C694 (sub_18002C694.c)
 *     sub_180044734 @ 0x180044734 (sub_180044734.c)
 *     sub_1800FC230 @ 0x1800FC230 (sub_1800FC230.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800447C8(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 *v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+38h] [rbp+10h] BYREF

  v12 = (__int64 *)a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( a2 )
    v4 = sub_18002C694(a2 + 8);
  else
    v4 = 1;
  sub_18002C2F4(a1 + 16, v4);
  *(_QWORD *)(a1 + 72) = 0xFFFFFFFF00000001uLL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v13 = (__int64 *)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  v13 = (__int64 *)sub_180011088(0x50uLL);
  sub_18001DE8C(v13, (__int64 *)&v13);
  sub_18001DE8C((__int64 *)(v5 + 8), (__int64 *)&v13);
  sub_18001DE8C((__int64 *)(v6 + 16), (__int64 *)&v13);
  *(_WORD *)(v7 + 24) = 257;
  *(_QWORD *)(a1 + 88) = v7;
  *(_QWORD *)(a1 + 104) = a2;
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 116) = 0;
  sub_180044734(a1 + 120);
  sub_1800FC230(a1 + 184);
  *(_DWORD *)(a1 + 192) = 0;
  v13 = (__int64 *)(a1 + 200);
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 208) = 0LL;
  v12 = (__int64 *)sub_180011088(0x38uLL);
  sub_18001DE8C(v12, (__int64 *)&v12);
  sub_18001DE8C((__int64 *)(v8 + 8), (__int64 *)&v12);
  sub_18001DE8C((__int64 *)(v9 + 16), (__int64 *)&v12);
  *(_WORD *)(v10 + 24) = 257;
  *(_QWORD *)(a1 + 200) = v10;
  return a1;
}
