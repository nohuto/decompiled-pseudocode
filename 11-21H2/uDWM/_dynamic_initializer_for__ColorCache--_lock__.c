/*
 * XREFs of _dynamic_initializer_for__ColorCache::_lock__ @ 0x1800012D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int dynamic_initializer_for__ColorCache::_lock__()
{
  InitializeCriticalSection(&ColorCache::_lock);
  return atexit((void (__cdecl *)())dynamic_atexit_destructor_for__ColorCache::_lock__);
}
