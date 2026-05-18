/*
 * XREFs of sub_18009F340 @ 0x18009F340
 * Callers:
 *     sub_18009F3B0 @ 0x18009F3B0 (sub_18009F3B0.c)
 *     sub_18009F818 @ 0x18009F818 (sub_18009F818.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18009F340(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ViewportState::`vftable';
  *a1 = &Spectre::Engine::ViewportState::`vftable';
  return result;
}
