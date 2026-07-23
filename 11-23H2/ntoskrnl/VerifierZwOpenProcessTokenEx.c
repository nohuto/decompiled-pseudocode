/*
 * XREFs of VerifierZwOpenProcessTokenEx @ 0x140AE5E30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierZwOpenProcessTokenEx()
{
  return ((__int64 (*)(void))pXdvZwOpenProcessTokenEx)();
}
