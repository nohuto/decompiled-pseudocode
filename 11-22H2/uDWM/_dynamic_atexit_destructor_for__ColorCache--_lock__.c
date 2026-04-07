/*
 * XREFs of _dynamic_atexit_destructor_for__ColorCache::_lock__ @ 0x180068950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void dynamic_atexit_destructor_for__ColorCache::_lock__()
{
  DeleteCriticalSection(&ColorCache::_lock);
}
