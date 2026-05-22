/*
 * XREFs of vswprintf_s @ 0x180057B64
 * Callers:
 *     ??$swprintf_s@$0FC@@@YAHAEAY0FC@GPEBGZZ @ 0x1800521E0 (--$swprintf_s@$0FC@@@YAHAEAY0FC@GPEBGZZ.c)
 *     ??$swprintf_s@$0DI@@@YAHAEAY0DI@GPEBGZZ @ 0x180126728 (--$swprintf_s@$0DI@@@YAHAEAY0DI@GPEBGZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1800351E8 (__local_stdio_printf_options.c)
 *     __stdio_common_vswprintf_s @ 0x180057276 (__stdio_common_vswprintf_s.c)
 */

int __cdecl vswprintf_s(wchar_t *const Buffer, const size_t BufferCount, const wchar_t *const Format, va_list ArgList)
{
  unsigned __int64 *v8; // rax
  int result; // eax

  v8 = _local_stdio_printf_options();
  result = _stdio_common_vswprintf_s(*v8, Buffer, BufferCount, Format, 0LL, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
