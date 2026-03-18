/*
 * XREFs of VerifierIoReuseIrp @ 0x140AC0E70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReuseIrp()
{
  return ((__int64 (*)(void))pXdvIoReuseIrp)();
}
