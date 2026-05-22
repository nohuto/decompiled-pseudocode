/*
 * XREFs of __local_stdio_printf_options @ 0x1800351E8
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180035154 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     initialize_legacy_wide_specifiers @ 0x1800564F0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180056530 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180056A1C (__scrt_initialize_default_local_stdio_options.c)
 *     vswprintf_s @ 0x180057B64 (vswprintf_s.c)
 *     _vsnprintf_s @ 0x180057C1C (_vsnprintf_s.c)
 *     sprintf_s @ 0x180057C8C (sprintf_s.c)
 *     _scprintf @ 0x180057CE4 (_scprintf.c)
 *     _vsnwprintf_l @ 0x180125DDC (_vsnwprintf_l.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
