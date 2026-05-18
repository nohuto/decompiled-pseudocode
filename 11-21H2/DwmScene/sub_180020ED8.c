/*
 * XREFs of sub_180020ED8 @ 0x180020ED8
 * Callers:
 *     sub_180021530 @ 0x180021530 (sub_180021530.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_180020ED8(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Utils::DefaultMemoryStatsProvider::`vftable';
  *a1 = &Spectre::Utils::DefaultMemoryStatsProvider::`vftable';
  return result;
}
