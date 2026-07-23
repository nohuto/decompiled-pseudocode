/*
 * XREFs of _vsnwprintf_s @ 0x1403E6670
 * Callers:
 *     _snwprintf_s @ 0x1403E6640 (_snwprintf_s.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_1403E847C @ 0x1403E847C (sub_1403E847C.c)
 */

int __cdecl vsnwprintf_s(wchar_t *DstBuf, size_t SizeInWords, size_t MaxCount, const wchar_t *Format, va_list ArgList)
{
  int result; // eax

  if ( !Format )
    goto LABEL_12;
  if ( MaxCount )
  {
    if ( !DstBuf )
    {
LABEL_12:
      _misaligned_access();
      return -1;
    }
  }
  else if ( !DstBuf )
  {
    if ( !SizeInWords )
      return 0;
    goto LABEL_12;
  }
  if ( !SizeInWords )
    goto LABEL_12;
  if ( SizeInWords > MaxCount )
  {
    result = sub_1403E847C(DstBuf, MaxCount + 1, Format, ArgList);
    if ( result == -2 )
      return -1;
    goto LABEL_10;
  }
  result = sub_1403E847C(DstBuf, SizeInWords, Format, ArgList);
  if ( result != -2 )
  {
LABEL_10:
    if ( result >= 0 )
      return result;
    goto LABEL_11;
  }
  if ( MaxCount == -1LL )
    return -1;
LABEL_11:
  *DstBuf = 0;
  if ( result == -2 )
    goto LABEL_12;
  return -1;
}
