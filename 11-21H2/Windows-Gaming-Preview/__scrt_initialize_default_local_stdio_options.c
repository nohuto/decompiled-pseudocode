/*
 * XREFs of __scrt_initialize_default_local_stdio_options @ 0x18004B16C
 * Callers:
 *     dllmain_crt_process_attach @ 0x18004A278 (dllmain_crt_process_attach.c)
 * Callees:
 *     __local_stdio_printf_options @ 0x18004A1C4 (__local_stdio_printf_options.c)
 *     __local_stdio_scanf_options @ 0x18004A1D4 (__local_stdio_scanf_options.c)
 */

unsigned __int64 *_scrt_initialize_default_local_stdio_options()
{
  unsigned __int64 *v0; // rax
  unsigned __int64 *result; // rax

  v0 = _local_stdio_printf_options();
  *v0 |= 0x24uLL;
  result = _local_stdio_scanf_options();
  *result |= 2uLL;
  return result;
}
