/*
 * XREFs of VerifierIoReleaseCancelSpinLock @ 0x140ABFE50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReleaseCancelSpinLock()
{
  return ((__int64 (*)(void))pXdvIoReleaseCancelSpinLock)();
}
