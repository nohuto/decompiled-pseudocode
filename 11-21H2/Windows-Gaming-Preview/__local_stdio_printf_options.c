/*
 * XREFs of __local_stdio_printf_options @ 0x18004A1C4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18004A1A0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18004A1F0 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18004B16C (__scrt_initialize_default_local_stdio_options.c)
 *     wprintf @ 0x18004B75C (wprintf.c)
 *     _vsnwprintf @ 0x18004B7B0 (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x18004B818 (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
