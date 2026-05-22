/*
 * XREFs of _vsnwprintf_s @ 0x180096998
 * Callers:
 *     ??$_snwprintf_s@$0CAA@@@YAHAEAY0CAA@G_KPEBGZZ @ 0x180149948 (--$_snwprintf_s@$0CAA@@@YAHAEAY0CAA@G_KPEBGZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180095AE4 (__local_stdio_printf_options.c)
 *     __stdio_common_vsnwprintf_s @ 0x180096892 (__stdio_common_vsnwprintf_s.c)
 */

int __cdecl vsnwprintf_s(
        wchar_t *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const wchar_t *const Format,
        va_list ArgList)
{
  unsigned __int64 *v9; // rax
  int result; // eax

  v9 = _local_stdio_printf_options();
  result = _stdio_common_vsnwprintf_s(*v9, Buffer, BufferCount, MaxCount, Format, 0LL, ArgList);
  if ( result < 0 )
    return -1;
  return result;
}
