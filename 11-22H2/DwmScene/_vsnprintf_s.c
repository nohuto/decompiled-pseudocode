/*
 * XREFs of _vsnprintf_s @ 0x18000C1E8
 * Callers:
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x18000F650 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     ?Output@LevelSettings@Trace@@QEAAXW4Level@2@PEBDPEAD@Z @ 0x18001D938 (-Output@LevelSettings@Trace@@QEAAXW4Level@2@PEBDPEAD@Z.c)
 *     ??$_snprintf_s@$0BAA@@@YAHAEAY0BAA@D_KPEBDZZ @ 0x1800DAF7C (--$_snprintf_s@$0BAA@@@YAHAEAY0BAA@D_KPEBDZZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18000AEE4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsnprintf_s_0 @ 0x18000BF16 (_o___stdio_common_vsnprintf_s_0.c)
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
