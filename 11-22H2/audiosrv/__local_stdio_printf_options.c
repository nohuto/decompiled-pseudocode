/*
 * XREFs of __local_stdio_printf_options @ 0x180066584
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x180066560 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1800665B0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1800674BC (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x180067A60 (_vsnwprintf.c)
 *     vswprintf_s @ 0x180067AC8 (vswprintf_s.c)
 *     _vscwprintf @ 0x180067B2C (_vscwprintf.c)
 *     swprintf_s @ 0x180067B7C (swprintf_s.c)
 *     _vsnprintf_s @ 0x180067BD4 (_vsnprintf_s.c)
 *     _snprintf_s @ 0x180067C44 (_snprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
