/*
 * XREFs of VerifierIoAcquireCancelSpinLock @ 0x140ABFE10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoAcquireCancelSpinLock()
{
  return ((__int64 (*)(void))pXdvIoAcquireCancelSpinLock)();
}
