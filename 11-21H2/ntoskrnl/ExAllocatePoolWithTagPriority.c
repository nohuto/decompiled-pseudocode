/*
 * XREFs of ExAllocatePoolWithTagPriority @ 0x140240470
 * Callers:
 *     VerifierExAllocatePoolWithTagPriority @ 0x140A90530 (VerifierExAllocatePoolWithTagPriority.c)
 *     VfHandlePoolAlloc @ 0x140A90660 (VfHandlePoolAlloc.c)
 *     VerifierPortExAllocatePoolWithTagPriority @ 0x140A9C5F0 (VerifierPortExAllocatePoolWithTagPriority.c)
 * Callees:
 *     ExpAllocatePoolWithTagPriority @ 0x140A6E028 (ExpAllocatePoolWithTagPriority.c)
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
