/*
 * XREFs of _i64toa_s @ 0x1403E5DB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1403E5E4C @ 0x1403E5E4C (sub_1403E5E4C.c)
 */

errno_t __cdecl i64toa_s(__int64 Val, char *DstBuf, size_t Size, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return sub_1403E5E4C(Val, (_DWORD)DstBuf, Size, Radix, v4);
}
