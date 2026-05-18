/*
 * XREFs of sub_180044734 @ 0x180044734
 * Callers:
 *     sub_1800447C8 @ 0x1800447C8 (sub_1800447C8.c)
 *     sub_180044918 @ 0x180044918 (sub_180044918.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180030730 @ 0x180030730 (sub_180030730.c)
 *     sub_180047D08 @ 0x180047D08 (sub_180047D08.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180044734(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 *v5; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v5 = (__int64 *)sub_180011088(0x28uLL);
  sub_180030730(v5, (__int64 *)&v5);
  sub_180030730((__int64 *)(v2 + 8), (__int64 *)&v5);
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  sub_180047D08(a1 + 24, 16LL, *(_QWORD *)(a1 + 8));
  return a1;
}
