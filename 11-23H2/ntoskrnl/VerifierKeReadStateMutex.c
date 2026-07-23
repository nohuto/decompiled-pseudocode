/*
 * XREFs of VerifierKeReadStateMutex @ 0x140AD55E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReadStateMutex()
{
  return ((__int64 (*)(void))pXdvKeReadStateMutex)();
}
