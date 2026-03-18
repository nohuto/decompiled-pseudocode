/*
 * XREFs of VerifierKeReadStateMutex @ 0x140AD55F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReadStateMutex()
{
  return ((__int64 (*)(void))pXdvKeReadStateMutex)();
}
