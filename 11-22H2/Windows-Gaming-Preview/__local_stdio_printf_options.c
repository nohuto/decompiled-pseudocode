/*
 * XREFs of __local_stdio_printf_options @ 0x18004B0B4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18004B090 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18004B0E0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18004C05C (__scrt_initialize_default_local_stdio_options.c)
 *     wprintf @ 0x18004C64C (wprintf.c)
 *     _vsnwprintf @ 0x18004C6A0 (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x18004C708 (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
