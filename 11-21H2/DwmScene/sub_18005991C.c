/*
 * XREFs of sub_18005991C @ 0x18005991C
 * Callers:
 *     sub_18005B3F0 @ 0x18005B3F0 (sub_18005B3F0.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_1800979FC @ 0x1800979FC (sub_1800979FC.c)
 */

void **__fastcall sub_18005991C(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x68uLL);
  sub_1800979FC(a1);
  result = &Spectre::Engine::VertexBufferGeneric::`vftable';
  *a1 = &Spectre::Engine::VertexBufferGeneric::`vftable';
  return result;
}
