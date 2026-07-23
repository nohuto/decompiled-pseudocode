/*
 * XREFs of VerifierIoReleaseVpbSpinLock @ 0x140ACF2B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReleaseVpbSpinLock()
{
  return ((__int64 (*)(void))pXdvIoReleaseVpbSpinLock)();
}
