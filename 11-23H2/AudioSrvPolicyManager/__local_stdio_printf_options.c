/*
 * XREFs of __local_stdio_printf_options @ 0x180016184
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180016160 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800161B0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800170BC (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180017654 (_vsnwprintf.c)
 *     vswprintf_s @ 0x1800176BC (vswprintf_s.c)
 *     _vscwprintf @ 0x180017720 (_vscwprintf.c)
 *     _vsnprintf_s @ 0x180017770 (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
