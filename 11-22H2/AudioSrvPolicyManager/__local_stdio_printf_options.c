/*
 * XREFs of __local_stdio_printf_options @ 0x180016374
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180016350 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800163A0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800172AC (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180017844 (_vsnwprintf.c)
 *     vswprintf_s @ 0x1800178AC (vswprintf_s.c)
 *     _vscwprintf @ 0x180017910 (_vscwprintf.c)
 *     _vsnprintf_s @ 0x180017960 (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
