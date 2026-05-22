/*
 * XREFs of __local_stdio_printf_options @ 0x180030F68
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180030ED4 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     initialize_legacy_wide_specifiers @ 0x1800499F0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180049A30 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180049F1C (__scrt_initialize_default_local_stdio_options.c)
 *     vswprintf_s @ 0x18004AFD8 (vswprintf_s.c)
 *     _vsnprintf_s @ 0x18004B090 (_vsnprintf_s.c)
 *     sprintf_s @ 0x18004B100 (sprintf_s.c)
 *     _scprintf @ 0x18004B158 (_scprintf.c)
 *     _vsnwprintf_l @ 0x1800FBE6C (_vsnwprintf_l.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
