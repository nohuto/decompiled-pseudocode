/*
 * XREFs of printf @ 0x18000C130
 * Callers:
 *     ?PrintLogMessage@Trace@@YAXPEBD@Z @ 0x18001FB00 (-PrintLogMessage@Trace@@YAXPEBD@Z.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18000AEE4 (__local_stdio_printf_options.c)
 *     _o___acrt_iob_func_0 @ 0x18000BEE6 (_o___acrt_iob_func_0.c)
 *     _o___stdio_common_vfprintf_0 @ 0x18000BF0A (_o___stdio_common_vfprintf_0.c)
 */

int printf(const char *const Format, ...)
{
  FILE *v1; // rbx
  unsigned __int64 *v2; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  v1 = o___acrt_iob_func_0(1u);
  v2 = _local_stdio_printf_options();
  return o___stdio_common_vfprintf_0(*v2, v1, Format, 0LL, va);
}
