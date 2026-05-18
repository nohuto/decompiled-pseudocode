/*
 * XREFs of sub_180017A80 @ 0x180017A80
 * Callers:
 *     sub_180018090 @ 0x180018090 (sub_180018090.c)
 *     sub_18001E574 @ 0x18001E574 (sub_18001E574.c)
 * Callees:
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 */

void **__fastcall sub_180017A80(_QWORD *a1)
{
  void **result; // rax

  sub_180011B24((__int64)(a1 + 2));
  result = &stdext::exception::`vftable';
  *a1 = &stdext::exception::`vftable';
  return result;
}
