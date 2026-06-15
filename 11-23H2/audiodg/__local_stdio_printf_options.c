/*
 * XREFs of __local_stdio_printf_options @ 0x140027AE4
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x140027AC0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x140027B10 (initialize_msvcrt_compatibility.c)
 *     sprintf_s @ 0x1400285B0 (sprintf_s.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1400289FC (__scrt_initialize_default_local_stdio_options.c)
 *     _vsnwprintf @ 0x14002924C (_vsnwprintf.c)
 *     _vsnprintf_s @ 0x1400292B4 (_vsnprintf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_printf_options()
{
  return (unsigned __int64 *)&`__local_stdio_printf_options'::`2'::_OptionsStorage;
}
