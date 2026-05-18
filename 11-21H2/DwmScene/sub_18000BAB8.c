/*
 * XREFs of sub_18000BAB8 @ 0x18000BAB8
 * Callers:
 *     sub_18000AF98 @ 0x18000AF98 (sub_18000AF98.c)
 * Callees:
 *     sub_18000AEE4 @ 0x18000AEE4 (sub_18000AEE4.c)
 *     sub_18000AEF4 @ 0x18000AEF4 (sub_18000AEF4.c)
 */

_QWORD *sub_18000BAB8()
{
  _QWORD *v0; // rax
  _QWORD *result; // rax

  v0 = sub_18000AEE4();
  *v0 |= 0x24uLL;
  result = sub_18000AEF4();
  *result |= 2uLL;
  return result;
}
