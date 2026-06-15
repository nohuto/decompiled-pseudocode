/*
 * XREFs of __local_stdio_printf_options @ 0x180066594
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180066570 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800665C0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800674CC (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180067A70 (_vsnwprintf.c)
 *     vswprintf_s @ 0x180067AD8 (vswprintf_s.c)
 *     _vscwprintf @ 0x180067B3C (_vscwprintf.c)
 *     swprintf_s @ 0x180067B8C (swprintf_s.c)
 *     _vsnprintf_s @ 0x180067BE4 (_vsnprintf_s.c)
 *     _snprintf_s @ 0x180067C54 (_snprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
