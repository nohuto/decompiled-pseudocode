/*
 * XREFs of sub_180059950 @ 0x180059950
 * Callers:
 *     sub_18005B470 @ 0x18005B470 (sub_18005B470.c)
 * Callees:
 *     memset @ 0x18000C0CC (memset.c)
 *     sub_18009AB04 @ 0x18009AB04 (sub_18009AB04.c)
 */

void **__fastcall sub_180059950(_QWORD *a1)
{
  void **result; // rax

  memset(a1, 0, 0x90uLL);
  sub_18009AB04(a1);
  result = &Spectre::Engine::VertexLayoutGeneric::`vftable';
  *a1 = &Spectre::Engine::VertexLayoutGeneric::`vftable';
  return result;
}
