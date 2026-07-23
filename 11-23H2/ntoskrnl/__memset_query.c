/*
 * XREFs of __memset_query @ 0x140435FC0
 * Callers:
 *     __memset_repmovs @ 0x140435F40 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1403DD990 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
