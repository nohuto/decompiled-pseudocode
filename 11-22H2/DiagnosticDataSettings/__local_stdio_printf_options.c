/*
 * XREFs of __local_stdio_printf_options @ 0x180004AF4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180004AD0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180004B20 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180005010 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180005B00 (_vsnwprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
