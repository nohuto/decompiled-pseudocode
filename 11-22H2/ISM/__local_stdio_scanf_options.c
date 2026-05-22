/*
 * XREFs of __local_stdio_scanf_options @ 0x180056514
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1800564F0 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x180056530 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x180056A1C (__scrt_initialize_default_local_stdio_options.c)
 *     swscanf_s @ 0x180057BC8 (swscanf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_scanf_options()
{
  return (unsigned __int64 *)&`__local_stdio_scanf_options'::`2'::_OptionsStorage;
}
