/*
 * XREFs of __local_stdio_printf_options @ 0x180187DD4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180187DB0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180187E00 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1801888D8 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180188F78 (_vsnwprintf.c)
 *     vswprintf_s @ 0x180188FE0 (vswprintf_s.c)
 *     _vscwprintf @ 0x180189044 (_vscwprintf.c)
 *     swprintf_s @ 0x180189094 (swprintf_s.c)
 *     _scwprintf @ 0x1801890EC (_scwprintf.c)
 *     _vsnprintf @ 0x18018919C (_vsnprintf.c)
 *     _vsnprintf_s @ 0x180189204 (_vsnprintf_s.c)
 *     sprintf_s @ 0x180189274 (sprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
