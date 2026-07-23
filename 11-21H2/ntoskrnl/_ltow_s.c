/*
 * XREFs of _ltow_s @ 0x1403E60E0
 * Callers:
 *     sub_1403C7B58 @ 0x1403C7B58 (sub_1403C7B58.c)
 * Callees:
 *     sub_1403E6290 @ 0x1403E6290 (sub_1403E6290.c)
 */

errno_t __cdecl ltow_s(int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return sub_1403E6290(Val, (_DWORD)DstBuf, SizeInWords, Radix, v4);
}
