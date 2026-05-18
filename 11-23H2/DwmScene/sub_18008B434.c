/*
 * XREFs of sub_18008B434 @ 0x18008B434
 * Callers:
 *     sub_1800895DC @ 0x1800895DC (sub_1800895DC.c)
 *     sub_1800895F0 @ 0x1800895F0 (sub_1800895F0.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18008B434(_QWORD *a1)
{
  void **result; // rax

  result = &Spectre::Engine::ArrayBufferDesc::`vftable';
  *a1 = &Spectre::Engine::ArrayBufferDesc::`vftable';
  return result;
}
