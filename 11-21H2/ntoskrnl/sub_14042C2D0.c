/*
 * XREFs of sub_14042C2D0 @ 0x14042C2D0
 * Callers:
 *     sub_1402566A0 @ 0x1402566A0 (sub_1402566A0.c)
 *     sub_1406481F0 @ 0x1406481F0 (sub_1406481F0.c)
 * Callees:
 *     sub_14042C2B0 @ 0x14042C2B0 (sub_14042C2B0.c)
 */

__int64 __fastcall sub_14042C2D0(unsigned int *a1)
{
  return sub_14042C2B0(((unsigned __int8)a1 & 3u) + 1, a1);
}
