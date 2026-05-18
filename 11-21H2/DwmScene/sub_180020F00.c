/*
 * XREFs of sub_180020F00 @ 0x180020F00
 * Callers:
 *     sub_180021530 @ 0x180021530 (sub_180021530.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180020F00(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Utils::ETWTraceProvider::`vftable';
  *a1 = &Spectre::Utils::ETWTraceProvider::`vftable';
  return result;
}
