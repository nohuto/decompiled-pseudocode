/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x14034EA00
 * Callers:
 *     VerifierExAllocatePoolWithTagPriority @ 0x140AD0EB0 (VerifierExAllocatePoolWithTagPriority.c)
 *     VfHandlePoolAlloc @ 0x140AD0FE0 (VfHandlePoolAlloc.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x140ADD4C0 (VerifierPortExAllocatePoolWithTagPriority.c)
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
