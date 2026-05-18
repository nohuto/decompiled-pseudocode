/*
 * XREFs of sub_18005E244 @ 0x18005E244
 * Callers:
 *     sub_180029030 @ 0x180029030 (sub_180029030.c)
 *     sub_18005D1D8 @ 0x18005D1D8 (sub_18005D1D8.c)
 *     sub_1800664E8 @ 0x1800664E8 (sub_1800664E8.c)
 *     sub_18007E8D8 @ 0x18007E8D8 (sub_18007E8D8.c)
 *     sub_1800D9B40 @ 0x1800D9B40 (sub_1800D9B40.c)
 *     sub_1800D9F90 @ 0x1800D9F90 (sub_1800D9F90.c)
 *     sub_1800DD040 @ 0x1800DD040 (sub_1800DD040.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18005E244(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = a2;
  *a2 = *(_QWORD *)(a1 + 144);
  return result;
}
