/*
 * XREFs of __local_stdio_printf_options @ 0x1800339BC
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180033928 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     initialize_legacy_wide_specifiers @ 0x180055760 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800557A0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180055C8C (__scrt_initialize_default_local_stdio_options.c)
 *     vswprintf_s @ 0x180056DD4 (vswprintf_s.c)
 *     _vsnprintf_s @ 0x180056E8C (_vsnprintf_s.c)
 *     sprintf_s @ 0x180056EFC (sprintf_s.c)
 *     _scprintf @ 0x180056F54 (_scprintf.c)
 *     _vsnwprintf_l @ 0x180117D6C (_vsnwprintf_l.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
