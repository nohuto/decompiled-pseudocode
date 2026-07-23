/*
 * XREFs of VerifierKeReadStateEvent @ 0x140AC03C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeReadStateEvent()
{
  return ((__int64 (*)(void))pXdvKeReadStateEvent)();
}
