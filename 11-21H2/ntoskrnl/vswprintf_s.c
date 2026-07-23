/*
 * XREFs of vswprintf_s @ 0x1403E5D50
 * Callers:
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 *     sub_1403E847C @ 0x1403E847C (sub_1403E847C.c)
 */

int __cdecl vswprintf_s(wchar_t *Dst, size_t SizeInWords, const wchar_t *Format, va_list ArgList)
{
  int result; // eax

  if ( !Dst || !SizeInWords || !Format )
    goto LABEL_6;
  result = sub_1403E847C(Dst, SizeInWords, Format, ArgList);
  if ( result >= 0 )
    return result;
  *Dst = 0;
  if ( result == -2 )
LABEL_6:
    _misaligned_access();
  return -1;
}
