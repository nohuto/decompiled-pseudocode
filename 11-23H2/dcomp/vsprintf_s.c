/*
 * XREFs of vsprintf_s @ 0x180096AD4
 * Callers:
 *     ??$sprintf_s@$0CAA@@@YAHAEAY0CAA@DPEBDZZ @ 0x18018470C (--$sprintf_s@$0CAA@@@YAHAEAY0CAA@DPEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180095AE4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsprintf_s_0 @ 0x18009689E (_o___stdio_common_vsprintf_s_0.c)
 */

int __cdecl vsprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, va_list ArgList)
{
  int result; // eax

  _local_stdio_printf_options();
  result = o___stdio_common_vsprintf_s_0();
  if ( result < 0 )
    return -1;
  return result;
}
