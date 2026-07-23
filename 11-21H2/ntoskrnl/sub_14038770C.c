/*
 * XREFs of sub_14038770C @ 0x14038770C
 * Callers:
 *     sub_1403790A8 @ 0x1403790A8 (sub_1403790A8.c)
 *     sub_140382478 @ 0x140382478 (sub_140382478.c)
 *     sub_1403828A4 @ 0x1403828A4 (sub_1403828A4.c)
 *     sub_14038F99C @ 0x14038F99C (sub_14038F99C.c)
 *     sub_1403905FC @ 0x1403905FC (sub_1403905FC.c)
 *     sub_1405F80DC @ 0x1405F80DC (sub_1405F80DC.c)
 *     sub_1405F9824 @ 0x1405F9824 (sub_1405F9824.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_14038770C(__int64 a1, unsigned int a2)
{
  _WORD *v2; // r8

  v2 = (_WORD *)(*(_QWORD *)(a1 + 6216) + 8LL * a2);
  return (*v2 & 0x7FFF) != 0 || *(_WORD **)(a1 + 6576) == v2;
}
