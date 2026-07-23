/*
 * XREFs of _ui64toa_s @ 0x1403E5E10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403E5E4C @ 0x1403E5E4C (sub_1403E5E4C.c)
 */

errno_t __cdecl ui64toa_s(unsigned __int64 Val, char *DstBuf, size_t Size, int Radix)
{
  return sub_1403E5E4C(Val, (_DWORD)DstBuf, Size, Radix, 0);
}
