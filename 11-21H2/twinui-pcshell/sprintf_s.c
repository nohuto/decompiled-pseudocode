/*
 * XREFs of sprintf_s @ 0x180189274
 * Callers:
 *     ?ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z @ 0x1800C7D14 (-ToStringImpl@TraceLoggingCorrelationVector@@AEAA_N_KPEAD@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x180187DD4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsprintf_s_0 @ 0x180188DF2 (_o___stdio_common_vsprintf_s_0.c)
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
