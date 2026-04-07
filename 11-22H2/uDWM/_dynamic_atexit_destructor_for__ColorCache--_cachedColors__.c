/*
 * XREFs of _dynamic_atexit_destructor_for__ColorCache::_cachedColors__ @ 0x180068930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID dynamic_atexit_destructor_for__ColorCache::_cachedColors__()
{
  return CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::RemoveAllElements(&ColorCache::_cachedColors);
}
