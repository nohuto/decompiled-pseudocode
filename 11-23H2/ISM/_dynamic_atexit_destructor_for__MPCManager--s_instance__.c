/*
 * XREFs of _dynamic_atexit_destructor_for__MPCManager::s_instance__ @ 0x18006FF30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__MPCManager::s_instance__()
{
  return Microsoft::WRL::ComPtr<MPCManager>::InternalRelease((__int64 *)&MPCManager::s_instance);
}
