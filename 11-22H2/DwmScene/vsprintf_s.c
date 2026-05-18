/*
 * XREFs of vsprintf_s @ 0x18000C184
 * Callers:
 *     ??$sprintf_s@$0BAA@@@YAHAEAY0BAA@DPEBDZZ @ 0x18001CE80 (--$sprintf_s@$0BAA@@@YAHAEAY0BAA@DPEBDZZ.c)
 *     ??$sprintf_s@$0IEA@@@YAHAEAY0IEA@DPEBDZZ @ 0x18001CEB0 (--$sprintf_s@$0IEA@@@YAHAEAY0IEA@DPEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18000AEE4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsprintf_s_0 @ 0x18000BF22 (_o___stdio_common_vsprintf_s_0.c)
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
