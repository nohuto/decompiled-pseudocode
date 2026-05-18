/*
 * XREFs of sub_1800B7F10 @ 0x1800B7F10
 * Callers:
 *     sub_18000AD10 @ 0x18000AD10 (sub_18000AD10.c)
 * Callees:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 *     sub_180030730 @ 0x180030730 (sub_180030730.c)
 *     sub_1800B806C @ 0x1800B806C (sub_1800B806C.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800B7F10(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 *v6; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v6 = (__int64 *)sub_180011088(0x38uLL);
  sub_180030730(v6, (__int64 *)&v6);
  sub_180030730((__int64 *)(v2 + 8), (__int64 *)&v6);
  *(_QWORD *)(a1 + 8) = v3;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  sub_1800B806C(a1 + 24, v4, *(_QWORD *)(a1 + 8));
  return a1;
}
