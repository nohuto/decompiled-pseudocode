/*
 * XREFs of __memset_query @ 0x1C00451C0
 * Callers:
 *     __memset_repmovs @ 0x1C0045140 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C0044A20 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
