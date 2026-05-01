/*
 * XREFs of __local_stdio_scanf_options @ 0x1801C6344
 * Callers:
 *     initialize_legacy_wide_specifiers @ 0x1801C6310 (initialize_legacy_wide_specifiers.c)
 *     initialize_msvcrt_compatibility @ 0x1801C6360 (initialize_msvcrt_compatibility.c)
 *     __scrt_initialize_default_local_stdio_options @ 0x1801C6E28 (__scrt_initialize_default_local_stdio_options.c)
 *     swscanf_s @ 0x1801C7748 (swscanf_s.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__cdecl _local_stdio_scanf_options()
{
  return (unsigned __int64 *)&`__local_stdio_scanf_options'::`2'::_OptionsStorage;
}
