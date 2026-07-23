/*
 * XREFs of VerifierMmSecureVirtualMemory @ 0x140ACFB30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierMmSecureVirtualMemory()
{
  return ((__int64 (*)(void))pXdvMmSecureVirtualMemory)();
}
