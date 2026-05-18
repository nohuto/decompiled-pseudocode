/*
 * XREFs of sub_1800B49A4 @ 0x1800B49A4
 * Callers:
 *     sub_1800B2620 @ 0x1800B2620 (sub_1800B2620.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_18001DE8C @ 0x18001DE8C (sub_18001DE8C.c)
 *     sub_18002D554 @ 0x18002D554 (sub_18002D554.c)
 *     sub_1800B3D60 @ 0x1800B3D60 (sub_1800B3D60.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800B49A4(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 *v9; // [rsp+38h] [rbp+10h] BYREF

  sub_1800B3D60(a1);
  sub_1800B3D60(v4 + 176);
  sub_1800B3D60(a1 + 352);
  sub_1800B3D60(a1 + 528);
  sub_1800B3D60(a1 + 704);
  v9 = (__int64 *)(a1 + 880);
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 888) = 0LL;
  v9 = (__int64 *)sub_180011088(0x1D0uLL);
  sub_18001DE8C(v9, (__int64 *)&v9);
  sub_18001DE8C((__int64 *)(v5 + 8), (__int64 *)&v9);
  sub_18001DE8C((__int64 *)(v6 + 16), (__int64 *)&v9);
  *(_WORD *)(v7 + 24) = 257;
  *(_QWORD *)(a1 + 880) = v7;
  *(_QWORD *)(a1 + 896) = 0LL;
  *(_QWORD *)(a1 + 904) = 0LL;
  *(_QWORD *)(a1 + 912) = a2;
  sub_18002D554(a1 + 928);
  *(_DWORD *)(a1 + 920) = 0;
  return a1;
}
