/*
 * XREFs of VerifierMmAddPhysicalMemory @ 0x140ACF9D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmAddPhysicalMemory()
{
  return ((__int64 (*)(void))pXdvMmAddPhysicalMemory)();
}
