/*
 * XREFs of __local_stdio_printf_options @ 0x18010EDD4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18010EDB0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18010EE00 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18010FE98 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180110010 (_vsnwprintf.c)
 *     swprintf_s @ 0x180110078 (swprintf_s.c)
 *     _vsnprintf @ 0x1801100D0 (_vsnprintf.c)
 *     vsprintf_s @ 0x180110138 (vsprintf_s.c)
 *     _vscprintf @ 0x18011019C (_vscprintf.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
