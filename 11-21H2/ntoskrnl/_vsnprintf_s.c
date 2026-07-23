/*
 * XREFs of _vsnprintf_s @ 0x1403E6560
 * Callers:
 *     _snprintf_s @ 0x1403E6530 (_snprintf_s.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_1403E8394 @ 0x1403E8394 (sub_1403E8394.c)
 */

int __cdecl vsnprintf_s(char *DstBuf, size_t SizeInBytes, size_t MaxCount, const char *Format, va_list ArgList)
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
    if ( !SizeInBytes )
      return 0;
    goto LABEL_12;
  }
  if ( !SizeInBytes )
    goto LABEL_12;
  if ( SizeInBytes > MaxCount )
  {
    result = sub_1403E8394(DstBuf, MaxCount + 1, Format, ArgList);
    if ( result == -2 )
      return -1;
    goto LABEL_10;
  }
  result = sub_1403E8394(DstBuf, SizeInBytes, Format, ArgList);
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
