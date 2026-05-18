/*
 * XREFs of sub_1800FA768 @ 0x1800FA768
 * Callers:
 *     sub_1800F8034 @ 0x1800F8034 (sub_1800F8034.c)
 *     sub_1800F88AC @ 0x1800F88AC (sub_1800F88AC.c)
 *     sub_1800F8A14 @ 0x1800F8A14 (sub_1800F8A14.c)
 *     sub_1800F8E90 @ 0x1800F8E90 (sub_1800F8E90.c)
 *     sub_1800FA570 @ 0x1800FA570 (sub_1800FA570.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180030730 @ 0x180030730 (sub_180030730.c)
 *     sub_180047D08 @ 0x180047D08 (sub_180047D08.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800FA768(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 *v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h]

  *(_DWORD *)a1 = 5;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 7LL;
  *(_WORD *)(a1 + 8) = 0;
  v2 = a1 + 64;
  v7 = a1 + 64;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  v6 = (__int64 *)sub_180011088(0xB0uLL);
  sub_180030730(v6, (__int64 *)&v6);
  sub_180030730((__int64 *)(v3 + 8), (__int64 *)&v6);
  *(_QWORD *)(v2 + 8) = v4;
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 48) = 7LL;
  *(_QWORD *)(v2 + 56) = 8LL;
  *(_DWORD *)v2 = 1065353216;
  sub_180047D08(v2 + 24, 0x10uLL, *(_QWORD *)(v2 + 8));
  return a1;
}
