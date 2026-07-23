/*
 * XREFs of _ltoa_s @ 0x1403E5DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403E5F80 @ 0x1403E5F80 (sub_1403E5F80.c)
 */

errno_t __cdecl ltoa_s(int Val, char *DstBuf, size_t Size, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return sub_1403E5F80(Val, (_DWORD)DstBuf, Size, Radix, v4);
}
