/*
 * XREFs of RaspRectangleDestroy @ 0x140384E8C
 * Callers:
 *     RaspDestroyCachedBitmap @ 0x140AEEAE0 (RaspDestroyCachedBitmap.c)
 * Callees:
 *     RaspFreeMemory @ 0x140385284 (RaspFreeMemory.c)
 */

__int64 __fastcall RaspRectangleDestroy(__int64 a1, __int64 a2)
{
  return RaspFreeMemory(a1, a2);
}
