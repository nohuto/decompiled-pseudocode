/*
 * XREFs of sub_1800598E4 @ 0x1800598E4
 * Callers:
 *     sub_18005B570 @ 0x18005B570 (sub_18005B570.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18005C83C @ 0x18005C83C (sub_18005C83C.c)
 */

void **__fastcall sub_1800598E4(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0xA0uLL);
  sub_18005C83C(a1);
  result = &Spectre::Engine::TextureGeneric::`vftable';
  *a1 = &Spectre::Engine::TextureGeneric::`vftable';
  return result;
}
