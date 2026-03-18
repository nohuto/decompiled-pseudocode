/*
 * XREFs of GxpBitsToBytes @ 0x1403AA754
 * Callers:
 *     BgpGxRectangleCreate @ 0x140AAD404 (BgpGxRectangleCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GxpBitsToBytes(int a1)
{
  return (unsigned int)(a1 + 7) >> 3;
}
