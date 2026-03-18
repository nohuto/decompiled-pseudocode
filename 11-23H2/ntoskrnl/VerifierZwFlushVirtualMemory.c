/*
 * XREFs of VerifierZwFlushVirtualMemory @ 0x140AE5AA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwFlushVirtualMemory()
{
  return ((__int64 (*)(void))pXdvZwFlushVirtualMemory)();
}
