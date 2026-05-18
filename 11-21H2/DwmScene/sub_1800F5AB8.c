/*
 * XREFs of sub_1800F5AB8 @ 0x1800F5AB8
 * Callers:
 *     sub_1800205DC @ 0x1800205DC (sub_1800205DC.c)
 *     sub_1800206F8 @ 0x1800206F8 (sub_1800206F8.c)
 * Callees:
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 */

_QWORD *__fastcall sub_1800F5AB8(__int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)sub_18001D684();
  if ( result )
  {
    *result = lpMem;
    result[1] = a1;
  }
  lpMem = result;
  return result;
}
