/*
 * XREFs of sub_140A4F9F4 @ 0x140A4F9F4
 * Callers:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 * Callees:
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 *     sub_140A4FA24 @ 0x140A4FA24 (sub_140A4FA24.c)
 */

__int64 __fastcall sub_140A4F9F4(unsigned __int64 a1)
{
  _QWORD *v1; // rax

  v1 = sub_1402FDA80(a1, 2);
  return sub_140A4FA24(v1[6], v1[6] + *((unsigned int *)v1 + 16) - 1LL, 0LL);
}
