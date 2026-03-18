/*
 * XREFs of VerifierIoInitializeIrp @ 0x140A8E750
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoInitializeIrp()
{
  return ((__int64 (*)(void))pXdvIoInitializeIrp)();
}
