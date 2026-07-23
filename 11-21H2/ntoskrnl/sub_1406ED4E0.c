/*
 * XREFs of sub_1406ED4E0 @ 0x1406ED4E0
 * Callers:
 *     sub_140260D58 @ 0x140260D58 (sub_140260D58.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_1406ED4E0(_DWORD *a1)
{
  void *result; // rax

  memset(a1, 0, 0x90uLL);
  a1[2] = 1;
  result = memset(a1 + 16, 0, 0x50uLL);
  a1[14] = 88;
  a1[15] = 1;
  return result;
}
