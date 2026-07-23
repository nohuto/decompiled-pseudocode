/*
 * XREFs of VerifierIoStartNextPacket @ 0x140ACF480
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoStartNextPacket()
{
  return ((__int64 (*)(void))pXdvIoStartNextPacket)();
}
