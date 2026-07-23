/*
 * XREFs of sub_1403C0478 @ 0x1403C0478
 * Callers:
 *     sub_140A57CB4 @ 0x140A57CB4 (sub_140A57CB4.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 */

void *__fastcall sub_1403C0478(_DWORD *a1)
{
  memset(a1, 0, 0x110uLL);
  a1[1] = -1;
  *(_BYTE *)a1 = 2;
  a1[3] = 0;
  a1[2] = 2097153;
  return memset(a1 + 4, 0, 0x100uLL);
}
