/*
 * XREFs of GxpBitsToBytes @ 0x140387AC8
 * Callers:
 *     BgpGxRectangleCreate @ 0x140AEDA94 (BgpGxRectangleCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpBitsToBytes(int a1)
{
  return (unsigned int)(a1 + 7) >> 3;
}
