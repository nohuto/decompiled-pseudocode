/*
 * XREFs of sub_1800DF954 @ 0x1800DF954
 * Callers:
 *     sub_1800DBFE8 @ 0x1800DBFE8 (sub_1800DBFE8.c)
 *     sub_1800DDA48 @ 0x1800DDA48 (sub_1800DDA48.c)
 *     sub_1800DE600 @ 0x1800DE600 (sub_1800DE600.c)
 *     sub_1800DF830 @ 0x1800DF830 (sub_1800DF830.c)
 * Callees:
 *     sub_180042798 @ 0x180042798 (sub_180042798.c)
 *     sub_1800DDF88 @ 0x1800DDF88 (sub_1800DDF88.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800DF954(__int64 a1)
{
  __int64 v2; // rdi

  *(_DWORD *)a1 = 5;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 7LL;
  *(_WORD *)(a1 + 8) = 0;
  v2 = a1 + 64;
  *(_DWORD *)(a1 + 64) = 0;
  sub_1800DDF88((_QWORD *)(a1 + 72));
  *(_QWORD *)(v2 + 24) = 0LL;
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  *(_QWORD *)(v2 + 48) = 7LL;
  *(_QWORD *)(v2 + 56) = 8LL;
  *(_DWORD *)v2 = 1065353216;
  sub_180042798(v2 + 24, 0x10uLL, *(_QWORD *)(v2 + 8));
  return a1;
}
