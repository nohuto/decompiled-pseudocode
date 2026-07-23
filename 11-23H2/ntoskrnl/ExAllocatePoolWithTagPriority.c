/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x14034EBA0
 * Callers:
 *     VerifierExAllocatePoolWithTagPriority @ 0x140AD0EA0 (VerifierExAllocatePoolWithTagPriority.c)
 *     VfHandlePoolAlloc @ 0x140AD0FD0 (VfHandlePoolAlloc.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x140ADD4B0 (VerifierPortExAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExpAllocatePoolWithTagPriority @ 0x140AAECF4 (ExpAllocatePoolWithTagPriority.c)
 */

PVOID __stdcall ExAllocatePoolWithTagPriority(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        EX_POOL_PRIORITY Priority)
{
  return (PVOID)ExpAllocatePoolWithTagPriority(
                  PoolType,
                  NumberOfBytes,
                  Tag,
                  Priority,
                  KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
}
