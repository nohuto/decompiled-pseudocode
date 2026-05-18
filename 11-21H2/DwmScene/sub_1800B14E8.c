/*
 * XREFs of sub_1800B14E8 @ 0x1800B14E8
 * Callers:
 *     sub_1800B1500 @ 0x1800B1500 (sub_1800B1500.c)
 *     sub_1800B17E0 @ 0x1800B17E0 (sub_1800B17E0.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_1800B14E8(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ScissorState::`vftable';
  *a1 = &Spectre::Engine::ScissorState::`vftable';
  return result;
}
