/*
 * XREFs of ?__scrt_uninitialize_type_info@@YAXXZ @ 0x180056A08
 * Callers:
 *     dllmain_crt_process_detach @ 0x1800566E0 (dllmain_crt_process_detach.c)
 * Callees:
 *     <none>
 */

void __scrt_uninitialize_type_info(void)
{
  _std_type_info_destroy_list(&__type_info_root_node);
}
