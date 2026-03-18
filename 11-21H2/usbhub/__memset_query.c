/*
 * XREFs of __memset_query @ 0x1C001F9C0
 * Callers:
 *     __memset_repmovs @ 0x1C001F940 (__memset_repmovs.c)
 * Callees:
 *     __cpu_features_init @ 0x1C001F440 (__cpu_features_init.c)
 */

void _memset_query()
{
  _cpu_features_init();
}
