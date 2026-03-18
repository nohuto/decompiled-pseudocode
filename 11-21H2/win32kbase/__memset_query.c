/*
 * XREFs of __memset_query @ 0x1C00DE880
 * Callers:
 *     __memset_repmovs @ 0x1C00DE800 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C00D7910 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
