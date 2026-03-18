/*
 * XREFs of VerifierZwSetSystemTime @ 0x140AE6980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwSetSystemTime()
{
  return ((__int64 (*)(void))pXdvZwSetSystemTime)();
}
