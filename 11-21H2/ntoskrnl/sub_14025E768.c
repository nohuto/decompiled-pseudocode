/*
 * XREFs of sub_14025E768 @ 0x14025E768
 * Callers:
 *     sub_14085A4D0 @ 0x14085A4D0 (sub_14085A4D0.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

_QWORD *__fastcall sub_14025E768(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rbx
  _QWORD *result; // rax

  v2 = a2;
  memset(a1, 0, a2);
  a1[2] = (char *)a1 + v2;
  result = a1 + 5;
  a1[3] = a1 + 5;
  a1[4] = a1 + 5;
  return result;
}
