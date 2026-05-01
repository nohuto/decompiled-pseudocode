/*
 * XREFs of vswprintf_s @ 0x180188FE0
 * Callers:
 *     ??$swprintf_s@$0CI@@@YAHAEAY0CI@GPEBGZZ @ 0x18019B1FC (--$swprintf_s@$0CI@@@YAHAEAY0CI@GPEBGZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180187DD4 (__local_stdio_printf_options.c)
 *     __stdio_common_vswprintf_s @ 0x180188E0A (__stdio_common_vswprintf_s.c)
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
