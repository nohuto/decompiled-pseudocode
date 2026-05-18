/*
 * XREFs of sub_180059898 @ 0x180059898
 * Callers:
 *     sub_18005B370 @ 0x18005B370 (sub_18005B370.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_1800981EC @ 0x1800981EC (sub_1800981EC.c)
 */

void **__fastcall sub_180059898(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x68uLL);
  sub_1800981EC(a1);
  result = &Spectre::Engine::IndexBufferGeneric::`vftable';
  *a1 = &Spectre::Engine::IndexBufferGeneric::`vftable';
  return result;
}
