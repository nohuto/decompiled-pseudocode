/*
 * XREFs of RtlpHpAcquireLockExclusive @ 0x140316F54
 * Callers:
 *     RtlpHpFixedVsFree @ 0x1402018E0 (RtlpHpFixedVsFree.c)
 *     RtlpHpVaMgrCtxFree @ 0x140210A6C (RtlpHpVaMgrCtxFree.c)
 *     RtlpHpSegMgrCommitInitiate @ 0x14024FDD4 (RtlpHpSegMgrCommitInitiate.c)
 *     RtlpHpLfhSlotAllocate @ 0x1402ADF50 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpVaMgrAlloc @ 0x14031015C (RtlpHpVaMgrAlloc.c)
 *     RtlpHpSegMgrVaCtxAlloc @ 0x140314F68 (RtlpHpSegMgrVaCtxAlloc.c)
 *     RtlpHpSegMgrVaCtxFree @ 0x140315970 (RtlpHpSegMgrVaCtxFree.c)
 *     RtlpHpLfhBucketGetSubsegment @ 0x140315DEC (RtlpHpLfhBucketGetSubsegment.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x140315F50 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1403165C0 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhBucketAddSubsegment @ 0x140316C30 (RtlpHpLfhBucketAddSubsegment.c)
 *     RtlpHpSegLockAcquire @ 0x140316F28 (RtlpHpSegLockAcquire.c)
 *     RtlpHpFixedVsAllocate @ 0x140317A20 (RtlpHpFixedVsAllocate.c)
 *     RtlpHpLargeLockAcquire @ 0x140324990 (RtlpHpLargeLockAcquire.c)
 *     RtlpHpLfhSubsegmentIncBlockCounts @ 0x14033BEF0 (RtlpHpLfhSubsegmentIncBlockCounts.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x14034A488 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpSegMgrVaCtxInsert @ 0x140356348 (RtlpHpSegMgrVaCtxInsert.c)
 *     RtlpHpHeapExtendContext @ 0x14036483C (RtlpHpHeapExtendContext.c)
 *     RtlpHpVaMgrCtxAllocatorReference @ 0x140389704 (RtlpHpVaMgrCtxAllocatorReference.c)
 *     RtlpHpCustomVaCallbacksRegistrarRegister @ 0x1405B6490 (RtlpHpCustomVaCallbacksRegistrarRegister.c)
 *     RtlpHpCustomVaCallbacksRegistrarUnregister @ 0x1405B6850 (RtlpHpCustomVaCallbacksRegistrarUnregister.c)
 *     RtlpHpVaMgrCtxAllocatorDereference @ 0x1405B6EB0 (RtlpHpVaMgrCtxAllocatorDereference.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024D430 (ExAcquireSpinLockExclusive.c)
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
