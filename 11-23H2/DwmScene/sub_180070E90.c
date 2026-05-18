/*
 * XREFs of sub_180070E90 @ 0x180070E90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180070EDC @ 0x180070EDC (sub_180070EDC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180070E90(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  sub_180070EDC(a1, a3, a4, a2, 1);
  return a2;
}
