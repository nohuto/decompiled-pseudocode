/*
 * XREFs of sub_1800FAE94 @ 0x1800FAE94
 * Callers:
 *     sub_18010D4E5 @ 0x18010D4E5 (sub_18010D4E5.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800FAE94(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Utils::ICancellationToken::`vftable';
  *a1 = &Spectre::Utils::ICancellationToken::`vftable';
  return result;
}
