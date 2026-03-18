/*
 * XREFs of VerifierPsTerminateSystemThread @ 0x140AD00A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierPsTerminateSystemThread()
{
  return ((__int64 (*)(void))pXdvPsTerminateSystemThread)();
}
