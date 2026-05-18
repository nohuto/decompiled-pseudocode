/*
 * XREFs of __local_stdio_printf_options @ 0x18000AEE4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x18000AEC0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x18000AF10 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x18000BAA8 (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x18000C0C8 (_vsnwprintf.c)
 *     printf @ 0x18000C130 (printf.c)
 *     vsprintf_s @ 0x18000C184 (vsprintf_s.c)
 *     _vsnprintf_s @ 0x18000C1E8 (_vsnprintf_s.c)
 *     sprintf_s @ 0x18000C258 (sprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
