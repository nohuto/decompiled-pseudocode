/*
 * XREFs of VerifierIoReuseIrp @ 0x140ABFE60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReuseIrp()
{
  return ((__int64 (*)(void))pXdvIoReuseIrp)();
}
