/*
 * XREFs of _itow_s @ 0x1403E60E0
 * Callers:
 *     RtlpFindRegTziForCurrentYear @ 0x1403C7B58 (RtlpFindRegTziForCurrentYear.c)
 * Callees:
 *     xtow_s @ 0x1403E6290 (xtow_s.c)
 */

errno_t __cdecl itow_s(int Val, wchar_t *DstBuf, size_t SizeInWords, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return xtow_s(Val, (_DWORD)DstBuf, SizeInWords, Radix, v4);
}
