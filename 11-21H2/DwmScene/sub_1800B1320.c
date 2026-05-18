/*
 * XREFs of sub_1800B1320 @ 0x1800B1320
 * Callers:
 *     sub_1800B1340 @ 0x1800B1340 (sub_1800B1340.c)
 *     sub_1800B17E0 @ 0x1800B17E0 (sub_1800B17E0.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800B1320(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ViewportState::`vftable';
  *a1 = &Spectre::Engine::ViewportState::`vftable';
  return result;
}
