/*
 * XREFs of __scrt_dllmain_before_initialize_c @ 0x1800050B0
 * Callers:
 *     dllmain_crt_process_attach @ 0x180004BA8 (dllmain_crt_process_attach.c)
 * Callees:
 *     __scrt_initialize_onexit_tables @ 0x18000522C (__scrt_initialize_onexit_tables.c)
 */

bool _scrt_dllmain_before_initialize_c()
{
  return (unsigned __int8)_scrt_initialize_onexit_tables(0LL) != 0;
}
