/*
 * XREFs of __memset_query @ 0x1C0036500
 * Callers:
 *     __memset_repmovs @ 0x1C0036480 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C0034620 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
