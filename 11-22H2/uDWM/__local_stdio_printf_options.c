/*
 * XREFs of __local_stdio_printf_options @ 0x18005C404
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18005C3E0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18005C430 (initialize_msvcrt_compatibility.c)
 *     _vsnwprintf @ 0x18005D34C (_vsnwprintf.c)
 *     _vsnprintf @ 0x18005D3B4 (_vsnprintf.c)
 *     _vsnprintf_s @ 0x18005D41C (_vsnprintf_s.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18005E524 (__scrt_initialize_default_local_stdio_options.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
