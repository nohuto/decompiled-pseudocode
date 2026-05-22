/*
 * XREFs of __local_stdio_printf_options @ 0x180095AE4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180095AC0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180095B10 (initialize_msvcrt_compatibility.c)
 *     _vsnwprintf_s @ 0x180096998 (_vsnwprintf_s.c)
 *     _vsnwprintf @ 0x180096A08 (_vsnwprintf.c)
 *     vswprintf_s @ 0x180096A70 (vswprintf_s.c)
 *     vsprintf_s @ 0x180096AD4 (vsprintf_s.c)
 *     _vsnprintf_s @ 0x180096B38 (_vsnprintf_s.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180097864 (__scrt_initialize_default_local_stdio_options.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
