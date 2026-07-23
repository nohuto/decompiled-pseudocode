/*
 * XREFs of VerifierIoCancelIrp @ 0x140ACEB50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoCancelIrp()
{
  return ((__int64 (*)(void))pXdvIoCancelIrp)();
}
