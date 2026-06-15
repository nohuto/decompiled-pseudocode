/*
 * XREFs of _vsnprintf_s @ 0x140030A34
 * Callers:
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x14004F13C (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x14002F264 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsnprintf_s_0 @ 0x14003082E (_o___stdio_common_vsnprintf_s_0.c)
 */

int __cdecl vsnprintf_s(
        char *const Buffer,
        const size_t BufferCount,
        const size_t MaxCount,
        const char *const Format,
        va_list ArgList)
{
  int result; // eax

  _local_stdio_printf_options();
  result = o___stdio_common_vsnprintf_s_0();
  if ( result < 0 )
    return -1;
  return result;
}
