/*
 * XREFs of KeQueryNodeActiveAffinity @ 0x1403059B0
 * Callers:
 *     PnpSetDeviceAffinityThread @ 0x140322840 (PnpSetDeviceAffinityThread.c)
 *     MiGetClosestNodeWithProcessors @ 0x14036E7F0 (MiGetClosestNodeWithProcessors.c)
 *     MiComputeIdealDpcGang @ 0x14038B91C (MiComputeIdealDpcGang.c)
 *     ExAllocateCacheAwarePushLock @ 0x1403A7FF0 (ExAllocateCacheAwarePushLock.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1403C5DDC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpNodeCreateSystemThread @ 0x140683660 (ExpNodeCreateSystemThread.c)
 *     ExpQueryNumaProcessorMap @ 0x1407B3E10 (ExpQueryNumaProcessorMap.c)
 *     ExpPartitionStart @ 0x1408493C8 (ExpPartitionStart.c)
 *     ExpWorkQueueInitialize @ 0x1408498A8 (ExpWorkQueueInitialize.c)
 *     ExpWorkQueueManagerInitialize @ 0x140849990 (ExpWorkQueueManagerInitialize.c)
 *     EtwpProcessorRundown @ 0x1409EF760 (EtwpProcessorRundown.c)
 *     MiComputeMemoryNodeProcessorAssignments @ 0x140B5EFB4 (MiComputeMemoryNodeProcessorAssignments.c)
 * Callees:
 *     KeGetNodePrimarySubNode @ 0x140305A04 (KeGetNodePrimarySubNode.c)
 *     KiQuerySubNodeActiveAffinity @ 0x140307E7C (KiQuerySubNodeActiveAffinity.c)
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
