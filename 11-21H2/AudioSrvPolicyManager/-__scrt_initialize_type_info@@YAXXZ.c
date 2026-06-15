/*
 * XREFs of ?__scrt_initialize_type_info@@YAXXZ @ 0x180002F34
 * Callers:
 *     dllmain_crt_process_attach @ 0x1800020C8 (dllmain_crt_process_attach.c)
 * Callees:
 *     <none>
 */

void __scrt_initialize_type_info(void)
{
  InitializeSListHead(&__type_info_root_node);
}
