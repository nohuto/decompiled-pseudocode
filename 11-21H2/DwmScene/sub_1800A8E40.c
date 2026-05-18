/*
 * XREFs of sub_1800A8E40 @ 0x1800A8E40
 * Callers:
 *     sub_1800BB174 @ 0x1800BB174 (sub_1800BB174.c)
 *     sub_1800C530C @ 0x1800C530C (sub_1800C530C.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800A8E40(_QWORD *a1, __int64 a2, unsigned int a3)
{
  *a1 = a2;
  a1[1] = a2 + a3;
  return a1;
}
