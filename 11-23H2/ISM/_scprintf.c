/*
 * XREFs of _scprintf @ 0x180056F54
 * Callers:
 *     ?to_string@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@N@Z @ 0x1800C8448 (-to_string@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@1@N@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x1800339BC (__local_stdio_printf_options.c)
 *     _o___stdio_common_vsprintf_0 @ 0x1800564CE (_o___stdio_common_vsprintf_0.c)
 */

int scprintf(const char *const Format, ...)
{
  unsigned __int64 *v2; // rax
  int result; // eax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  v2 = _local_stdio_printf_options();
  result = o___stdio_common_vsprintf_0(*v2 | 2, 0LL, 0LL, Format, 0LL, va);
  if ( result < 0 )
    return -1;
  return result;
}
