/*
 * XREFs of __local_stdio_printf_options @ 0x1400058E4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1400058C0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x140005910 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x140006154 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x140006AA0 (_vsnwprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
