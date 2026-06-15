/*
 * XREFs of ?__scrt_initialize_type_info@@YAXXZ @ 0x1400289D0
 * Callers:
 *     pre_c_initialization @ 0x140027B40 (pre_c_initialization.c)
 * Callees:
 *     <none>
 */

void __scrt_initialize_type_info(void)
{
  InitializeSListHead(&__type_info_root_node);
}
