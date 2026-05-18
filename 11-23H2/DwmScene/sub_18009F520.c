/*
 * XREFs of sub_18009F520 @ 0x18009F520
 * Callers:
 *     sub_18009F540 @ 0x18009F540 (sub_18009F540.c)
 *     sub_18009F818 @ 0x18009F818 (sub_18009F818.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18009F520(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ScissorState::`vftable';
  *a1 = &Spectre::Engine::ScissorState::`vftable';
  return result;
}
