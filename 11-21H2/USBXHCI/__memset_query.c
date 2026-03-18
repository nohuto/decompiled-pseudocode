/*
 * XREFs of __memset_query @ 0x1C0019E80
 * Callers:
 *     __memset_repmovs @ 0x1C0019E00 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C0018F90 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
