/*
 * XREFs of _ultoa_s @ 0x1403E5E30
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403E5F80 @ 0x1403E5F80 (sub_1403E5F80.c)
 */

errno_t __cdecl ultoa_s(unsigned int Val, char *DstBuf, size_t Size, int Radix)
{
  return sub_1403E5F80(Val, (_DWORD)DstBuf, Size, Radix, 0);
}
