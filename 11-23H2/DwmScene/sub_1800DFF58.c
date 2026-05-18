/*
 * XREFs of sub_1800DFF58 @ 0x1800DFF58
 * Callers:
 *     sub_1800F2140 @ 0x1800F2140 (sub_1800F2140.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800DFF58(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Utils::ICancellationToken::`vftable';
  *a1 = &Spectre::Utils::ICancellationToken::`vftable';
  return result;
}
