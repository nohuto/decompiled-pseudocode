/*
 * XREFs of VerifierKeInitializeEvent @ 0x140AC0330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeEvent()
{
  return ((__int64 (*)(void))pXdvKeInitializeEvent)();
}
