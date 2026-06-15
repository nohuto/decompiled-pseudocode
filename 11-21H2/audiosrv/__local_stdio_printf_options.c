/*
 * XREFs of __local_stdio_printf_options @ 0x18005E504
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18005E4E0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18005E530 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18005F44C (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x18005F9E4 (_vsnwprintf.c)
 *     vswprintf_s @ 0x18005FA4C (vswprintf_s.c)
 *     _vscwprintf @ 0x18005FAB0 (_vscwprintf.c)
 *     swprintf_s @ 0x18005FB00 (swprintf_s.c)
 *     _vsnprintf_s @ 0x18005FB58 (_vsnprintf_s.c)
 *     _snprintf_s @ 0x18005FBC8 (_snprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
