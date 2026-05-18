/*
 * XREFs of sub_180030F34 @ 0x180030F34
 * Callers:
 *     sub_18002E4C4 @ 0x18002E4C4 (sub_18002E4C4.c)
 *     sub_18003A2BC @ 0x18003A2BC (sub_18003A2BC.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_180030F34(_QWORD *a1, __int64 a2)
{
  sub_180017648(a1, a2);
  sub_180017648(a1 + 4, a2 + 32);
  return a1;
}
