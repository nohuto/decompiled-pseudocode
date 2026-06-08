/*
 * XREFs of __memset_query @ 0x1C000BFC0
 * Callers:
 *     __memset_repmovs @ 0x1C000BF40 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C0002D70 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
