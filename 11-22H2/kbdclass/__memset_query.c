/*
 * XREFs of __memset_query @ 0x1C0003700
 * Callers:
 *     __memset_repmovs @ 0x1C0003680 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C0003110 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
