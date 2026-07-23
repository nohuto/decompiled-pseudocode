/*
 * XREFs of sub_140A5A9F8 @ 0x140A5A9F8
 * Callers:
 *     sub_140A5A98C @ 0x140A5A98C (sub_140A5A98C.c)
 *     sub_140A61424 @ 0x140A61424 (sub_140A61424.c)
 *     sub_140A61564 @ 0x140A61564 (sub_140A61564.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

_DWORD *__fastcall sub_140A5A9F8(_DWORD *a1)
{
  _DWORD *result; // rax

  memset(a1, 0, 0x174uLL);
  a1[6] = dword_140C549B4;
  result = a1 + 20;
  *((_QWORD *)a1 + 6) = a1 + 20;
  *((_OWORD *)a1 + 2) = xmmword_140026E48;
  *a1 = 1095059543;
  a1[1] = 3;
  a1[2] = 372;
  a1[14] = 1;
  a1[16] = 80;
  a1[17] = 292;
  return result;
}
