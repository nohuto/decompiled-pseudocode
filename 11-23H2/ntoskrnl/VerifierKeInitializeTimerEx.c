/*
 * XREFs of VerifierKeInitializeTimerEx @ 0x140AD5560
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierKeInitializeTimerEx()
{
  return ((__int64 (*)(void))pXdvKeInitializeTimerEx)();
}
