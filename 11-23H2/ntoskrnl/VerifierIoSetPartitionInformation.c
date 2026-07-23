/*
 * XREFs of VerifierIoSetPartitionInformation @ 0x140ACF400
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoSetPartitionInformation()
{
  return ((__int64 (*)(void))pXdvIoSetPartitionInformation)();
}
