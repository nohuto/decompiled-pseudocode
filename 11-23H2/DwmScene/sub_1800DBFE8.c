/*
 * XREFs of sub_1800DBFE8 @ 0x1800DBFE8
 * Callers:
 *     sub_1800DDB4C @ 0x1800DDB4C (sub_1800DDB4C.c)
 *     sub_1800DDC64 @ 0x1800DDC64 (sub_1800DDC64.c)
 * Callees:
 *     sub_1800DF954 @ 0x1800DF954 (sub_1800DF954.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_1800DBFE8(_QWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax

  v4 = *a3;
  *a1 = 0LL;
  a1[2] = 0LL;
  a1[3] = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)v4;
  *((_OWORD *)a1 + 1) = *(_OWORD *)(v4 + 16);
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_QWORD *)(v4 + 24) = 7LL;
  *(_WORD *)v4 = 0;
  sub_1800DF954(a1 + 4);
  return a1;
}
