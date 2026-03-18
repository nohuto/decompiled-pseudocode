/*
 * XREFs of VerifierIoReadPartitionTable @ 0x140A8E840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 VerifierIoReadPartitionTable()
{
  return ((__int64 (*)(void))pXdvIoReadPartitionTable)();
}
