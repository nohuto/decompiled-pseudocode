/*
 * XREFs of sub_14042BE50 @ 0x14042BE50
 * Callers:
 *     sub_140243B10 @ 0x140243B10 (sub_140243B10.c)
 * Callees:
 *     sub_14042BE30 @ 0x14042BE30 (sub_14042BE30.c)
 */

__int64 __fastcall sub_14042BE50(unsigned int *a1)
{
  return sub_14042BE30(((unsigned __int8)a1 & 3u) + 1, a1);
}
