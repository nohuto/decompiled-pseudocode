/*
 * XREFs of VerifierMmRemovePhysicalMemory @ 0x140ACFAF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmRemovePhysicalMemory()
{
  return ((__int64 (*)(void))pXdvMmRemovePhysicalMemory)();
}
