/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x140305C40
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x140322AD0 (PnpSetDeviceAffinityThread.c)
 *     MiGetClosestNodeWithProcessors @ 0x14036E990 (MiGetClosestNodeWithProcessors.c)
 *     MiComputeIdealDpcGang @ 0x14038BAFC (MiComputeIdealDpcGang.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403A81D0 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403C5FBC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpNodeCreateSystemThread @ 0x140683660 (ExpNodeCreateSystemThread.c)
 *     ExpQueryNumaProcessorMap @ 0x1407B4000 (ExpQueryNumaProcessorMap.c)
 *     ExpPartitionStart @ 0x1408496C8 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x140849BA8 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x140849C90 (ExpWorkQueueManagerInitialize.c)
 *     EtwpProcessorRundown @ 0x1409EF9F0 (EtwpProcessorRundown.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B5EFB4 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     KeGetNodePrimarySubNode @ 0x140305C94 (KeGetNodePrimarySubNode.c)
 *     KiQuerySubNodeActiveAffinity @ 0x14030810C (KiQuerySubNodeActiveAffinity.c)
 */

void __stdcall KeQueryNodeActiveAffinity(USHORT NodeNumber, PGROUP_AFFINITY Affinity, PUSHORT Count)
{
  __int64 NodePrimarySubNode; // rax

  if ( Affinity )
    *Affinity = 0LL;
  if ( Count )
    *Count = 0;
  if ( NodeNumber < (unsigned __int16)KeNumberNodes )
  {
    NodePrimarySubNode = KeGetNodePrimarySubNode(KeNodeBlock[NodeNumber], Affinity, Count, 0LL);
    if ( NodePrimarySubNode )
      KiQuerySubNodeActiveAffinity(NodePrimarySubNode);
  }
}
