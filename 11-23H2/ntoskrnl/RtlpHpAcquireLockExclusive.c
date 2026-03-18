/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x140316CC4
 * Callers:
 *     RtlpHpFixedVsFree @ 0x1402018E0 (RtlpHpFixedVsFree.c)
 *     RtlpHpVaMgrCtxFree @ 0x140210A6C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x14024FD04 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpLfhSlotAllocate @ 0x1402ADCC0 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpVaMgrAlloc @ 0x14030FECC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140314CD8 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x1403156E0 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x140315B5C (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140315CC0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x140316330 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x1403169A0 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpSegLockAcquire @ 0x140316C98 (RtlpHpSegLockAcquire.c)
 *     RtlpHpFixedVsAllocate @ 0x140317790 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpLargeLockAcquire @ 0x140324700 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x14033BC60 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14034A2F0 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x1403561A8 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpHeapExtendContext @ 0x14036469C (RtlpHpHeapExtendContext.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140389524 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1405B5F20 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x1405B62E0 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x1405B6940 (RtlpHpVaMgrCtxAllocatorDereference.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D360 (ExAcquireSpinLockExclusive.c)
 */

KIRQL __fastcall RtlpHpAcquireLockExclusive(volatile LONG *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a2 )
    return ExAcquireSpinLockExclusive(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)a1, 0LL);
  return -1;
}
