/*
 * XREFs of VerifierMmGetPhysicalMemoryRanges @ 0x140ACFA30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmGetPhysicalMemoryRanges()
{
  return ((__int64 (*)(void))pXdvMmGetPhysicalMemoryRanges)();
}
