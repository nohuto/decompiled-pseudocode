/*
 * XREFs of sub_18002B3F0 @ 0x18002B3F0
 * Callers:
 *     sub_180101B42 @ 0x180101B42 (sub_180101B42.c)
 *     sub_1801065D0 @ 0x1801065D0 (sub_1801065D0.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18002B3F0(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::IVisitable::`vftable';
  *a1 = &Spectre::Engine::IVisitable::`vftable';
  return result;
}
