/*
 * XREFs of ?__scrt_initialize_type_info@@YAXXZ @ 0x140005A48
 * Callers:
 *     pre_c_initialization @ 0x140005260 (pre_c_initialization.c)
 * Callees:
 *     <none>
 */

void __scrt_initialize_type_info(void)
{
  InitializeSListHead(&__type_info_root_node);
}
