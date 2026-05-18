/*
 * XREFs of __local_stdio_printf_options @ 0x180001C54
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180001C30 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180001C80 (initialize_msvcrt_compatibility.c)
 *     _vsnwprintf @ 0x180002694 (_vsnwprintf.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180003274 (__scrt_initialize_default_local_stdio_options.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
