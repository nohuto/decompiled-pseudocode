/*
 * XREFs of RaspRectangleDestroy @ 0x140385E6C
 * Callers:
 *     RaspDestroyCachedBitmap @ 0x140AEDB20 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     RaspFreeMemory @ 0x140386264 (RaspFreeMemory.c)
 */

__int64 __fastcall RaspRectangleDestroy(__int64 a1, __int64 a2)
{
  return RaspFreeMemory(a1, a2);
}
