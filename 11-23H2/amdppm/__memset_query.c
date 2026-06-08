/*
 * XREFs of __memset_query @ 0x1C000CA40
 * Callers:
 *     __memset_repmovs @ 0x1C000C9C0 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C0002CE0 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
