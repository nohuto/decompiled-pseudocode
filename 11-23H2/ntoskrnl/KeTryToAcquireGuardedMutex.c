/*
 * XREFs of KeTryToAcquireGuardedMutex @ 0x14033DCC0
 * Callers:
 *     <none>
 * Callees:
 *     ExTryToAcquireFastMutex @ 0x14033DCE0 (ExTryToAcquireFastMutex.c)
 */

BOOLEAN __stdcall KeTryToAcquireGuardedMutex(PKGUARDED_MUTEX Mutex)
{
  return ExTryToAcquireFastMutex(Mutex);
}
