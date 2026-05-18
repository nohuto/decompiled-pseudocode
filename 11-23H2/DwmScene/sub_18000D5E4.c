/*
 * XREFs of sub_18000D5E4 @ 0x18000D5E4
 * Callers:
 *     sub_18000D670 @ 0x18000D670 (sub_18000D670.c)
 * Callees:
 *     sub_18000FDB4 @ 0x18000FDB4 (sub_18000FDB4.c)
 */

void **__fastcall sub_18000D5E4(_QWORD *a1)
{
  void **result; // rax

  sub_18000FDB4(a1 + 23);
  sub_18000FDB4(a1 + 21);
  result = &stdext::exception::`vftable';
  *a1 = &stdext::exception::`vftable';
  return result;
}
