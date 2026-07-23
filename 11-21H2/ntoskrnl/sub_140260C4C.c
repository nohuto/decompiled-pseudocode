/*
 * XREFs of sub_140260C4C @ 0x140260C4C
 * Callers:
 *     sub_1406ED528 @ 0x1406ED528 (sub_1406ED528.c)
 * Callees:
 *     sub_140260D58 @ 0x140260D58 (sub_140260D58.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140260C4C(__int64 a1)
{
  __int64 result; // rax

  memset((void *)a1, 0, 0x1A50uLL);
  *(_BYTE *)(a1 + 6020) = 2;
  sub_140260D58(a1);
  *(_QWORD *)(a1 + 6056) = a1 + 6048;
  *(_QWORD *)(a1 + 6048) = 0LL;
  *(_QWORD *)(a1 + 6072) = a1 + 6064;
  *(_QWORD *)(a1 + 6064) = 0LL;
  *(_QWORD *)(a1 + 6088) = a1 + 6080;
  *(_QWORD *)(a1 + 6080) = 0LL;
  *(_QWORD *)(a1 + 6040) = 0LL;
  *(_QWORD *)(a1 + 6168) = a1 + 6160;
  *(_QWORD *)(a1 + 6160) = a1 + 6160;
  *(_WORD *)(a1 + 6152) = 0;
  *(_BYTE *)(a1 + 6154) = 6;
  *(_DWORD *)(a1 + 6156) = 0;
  *(_QWORD *)(a1 + 6144) = a1 + 6136;
  *(_QWORD *)(a1 + 6136) = a1 + 6136;
  *(_WORD *)(a1 + 6128) = 0;
  *(_BYTE *)(a1 + 6130) = 6;
  *(_DWORD *)(a1 + 6132) = 0;
  *(_QWORD *)(a1 + 6192) = a1 + 6184;
  *(_QWORD *)(a1 + 6184) = a1 + 6184;
  *(_WORD *)(a1 + 6176) = 1;
  *(_BYTE *)(a1 + 6178) = 6;
  *(_DWORD *)(a1 + 6180) = 0;
  memset((void *)(a1 + 6608), 0, 0x70uLL);
  result = a1 + 6624;
  *(_WORD *)(a1 + 6616) = 1;
  *(_BYTE *)(a1 + 6618) = 6;
  *(_DWORD *)(a1 + 6620) = 0;
  *(_QWORD *)(a1 + 6632) = a1 + 6624;
  *(_QWORD *)(a1 + 6624) = a1 + 6624;
  return result;
}
