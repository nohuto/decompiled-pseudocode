/*
 * XREFs of VerifierIoInitializeIrp @ 0x140ACF0B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoInitializeIrp()
{
  return ((__int64 (*)(void))pXdvIoInitializeIrp)();
}
