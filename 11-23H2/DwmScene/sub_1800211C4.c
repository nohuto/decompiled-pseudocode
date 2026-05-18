/*
 * XREFs of sub_1800211C4 @ 0x1800211C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800211C4(_QWORD *a1, __int64 a2)
{
  *a1 = &stdext::exception::`vftable';
  a1[1] = *(_QWORD *)(a2 + 8);
  *a1 = &std::logic_error::`vftable';
  return a1;
}
