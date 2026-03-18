/*
 * XREFs of VerifierKeReadStateMutex @ 0x140A95FC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReadStateMutex()
{
  return ((__int64 (*)(void))pXdvKeReadStateMutex)();
}
