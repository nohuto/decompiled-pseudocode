/*
 * XREFs of __memset_query @ 0x140435BC0
 * Callers:
 *     __memset_repmovs @ 0x140435B40 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1403DD7B0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
