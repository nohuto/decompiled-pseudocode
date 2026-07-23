/*
 * XREFs of vsprintf_s @ 0x1403E7050
 * Callers:
 *     sprintf_s @ 0x1403E7020 (sprintf_s.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_1403E8394 @ 0x1403E8394 (sub_1403E8394.c)
 */

int __cdecl vsprintf_s(char *DstBuf, size_t SizeInBytes, const char *Format, va_list ArgList)
{
  int result; // eax

  if ( !DstBuf || !SizeInBytes || !Format )
    goto LABEL_6;
  result = sub_1403E8394(DstBuf, SizeInBytes, Format, ArgList);
  if ( result >= 0 )
    return result;
  *DstBuf = 0;
  if ( result == -2 )
LABEL_6:
    _misaligned_access();
  return -1;
}
