/*
 * XREFs of MmGetNextNode @ 0x14034EE60
 * Callers:
 *     KiSelectIdealProcessorSetForGroup @ 0x140224948 (KiSelectIdealProcessorSetForGroup.c)
 *     ExpAllocatePoolWithTagFromNode @ 0x1402AD4E0 (ExpAllocatePoolWithTagFromNode.c)
 *     ExpQueueWorkItem @ 0x1402B7930 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     ExpTryQueueWorkItem @ 0x1402B9BCC (ExpTryQueueWorkItem.c)
 *     PoAllProcessorsDeepIdle @ 0x1402C1DB0 (PoAllProcessorsDeepIdle.c)
 *     PoIdle @ 0x1402C4DF0 (PoIdle.c)
 *     PpmIdleSelectStates @ 0x1403B7650 (PpmIdleSelectStates.c)
 *     KiEnumerateNextSchedulerSubNodeInSystem @ 0x140570DE8 (KiEnumerateNextSchedulerSubNodeInSystem.c)
 *     KeInitializeProcess @ 0x1406B6898 (KeInitializeProcess.c)
 *     MmAllocateMemoryRanges @ 0x140A2E570 (MmAllocateMemoryRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetNextNode(int a1, int *a2)
{
  int v2; // eax
  int v3; // r8d

  v2 = (unsigned __int16)KeNumberNodes;
  v3 = *a2 + 1;
  *a2 = v3;
  if ( v3 == v2 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(qword_140C65A98 + 4LL * (unsigned int)(v3 + v2 * a1));
}
