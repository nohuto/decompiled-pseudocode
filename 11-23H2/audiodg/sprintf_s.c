/*
 * XREFs of sprintf_s @ 0x1400285B0
 * Callers:
 *     ?GetDisplayName@CDisplayNode@@QEAAPEBDXZ @ 0x14006249C (-GetDisplayName@CDisplayNode@@QEAAPEBDXZ.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x140027AE4 (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsprintf_s_0 @ 0x1400290BA (_o___stdio_common_vsprintf_s_0.c)
 */

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  unsigned __int64 *v6; // rax
  int result; // eax
  va_list va; // [rsp+78h] [rbp+20h] BYREF

  va_start(va, Format);
  v6 = _local_stdio_printf_options();
  result = o___stdio_common_vsprintf_s_0(*v6, Buffer, BufferCount, Format, 0LL, (__int64 *)va);
  if ( result < 0 )
    return -1;
  return result;
}
