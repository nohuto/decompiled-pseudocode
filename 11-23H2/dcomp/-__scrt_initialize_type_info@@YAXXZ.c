/*
 * XREFs of ?__scrt_initialize_type_info@@YAXXZ @ 0x18009783C
 * Callers:
 *     dllmain_crt_process_attach @ 0x180097438 (dllmain_crt_process_attach.c)
 * Callees:
 *     <none>
 */

void __scrt_initialize_type_info(void)
{
  InitializeSListHead(&__type_info_root_node);
}
