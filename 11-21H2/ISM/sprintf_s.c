/*
 * XREFs of sprintf_s @ 0x18004B100
 * Callers:
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@N@Z @ 0x1800AF448 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@N@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180030F68 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsprintf_s_0 @ 0x18004A76A (_o___stdio_common_vsprintf_s_0.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  int result; // eax

  _local_stdio_printf_options();
  result = o___stdio_common_vsprintf_s_0();
  if ( result < 0 )
    return -1;
  return result;
}
