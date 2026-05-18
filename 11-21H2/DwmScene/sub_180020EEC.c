/*
 * XREFs of sub_180020EEC @ 0x180020EEC
 * Callers:
 *     sub_180021530 @ 0x180021530 (sub_180021530.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180020EEC(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Utils::DefaultTimeProvider::`vftable';
  *a1 = &Spectre::Utils::DefaultTimeProvider::`vftable';
  return result;
}
