/*
 * XREFs of MiRestrictRangeToNode @ 0x1403758B4
 * Callers:
 *     MiDescribePageRun @ 0x14037562C (MiDescribePageRun.c)
 *     MiInitializeDynamicPfns @ 0x14061B448 (MiInitializeDynamicPfns.c)
 *     MiAddPartitionHugeRange @ 0x14061F754 (MiAddPartitionHugeRange.c)
 *     MiHotRemoveHugeRange @ 0x140620624 (MiHotRemoveHugeRange.c)
 *     MiSetHugeRangePartitionId @ 0x140622D58 (MiSetHugeRangePartitionId.c)
 *     MiUpdatePartitionChildPageCounts @ 0x14065C254 (MiUpdatePartitionChildPageCounts.c)
 *     MiAddPhysicalMemoryChunks @ 0x140A2C13C (MiAddPhysicalMemoryChunks.c)
 *     MiCreateDescriptorPfns @ 0x140B42404 (MiCreateDescriptorPfns.c)
 *     MxCreateFreePfns @ 0x140B426A0 (MxCreateFreePfns.c)
 *     MxInitializeFreeNodeDescriptors @ 0x140B42B78 (MxInitializeFreeNodeDescriptors.c)
 *     MxMapPfnRange @ 0x140B42F28 (MxMapPfnRange.c)
 *     MxComputeFreeNodeDescriptorRequirements @ 0x140B43494 (MxComputeFreeNodeDescriptorRequirements.c)
 *     MiRemoveLargeFreeLoaderDescriptors @ 0x140B6CE0C (MiRemoveLargeFreeLoaderDescriptors.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026ED60 (MiSearchNumaNodeTable.c)
 *     MiSearchChannelTable @ 0x140645CA0 (MiSearchChannelTable.c)
 */

ULONG_PTR __fastcall MiRestrictRangeToNode(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v4; // rcx
  ULONG_PTR v5; // rsi
  ULONG_PTR v7; // rcx
  ULONG_PTR v8; // rax

  v4 = MiSearchNumaNodeTable(BugCheckParameter2)[2];
  if ( BugCheckParameter2 + a2 > v4 )
    a2 = v4 - BugCheckParameter2;
  v5 = a2;
  if ( qword_140C65AD0 )
  {
    v7 = *(_QWORD *)(MiSearchChannelTable(BugCheckParameter2) + 16);
    v8 = BugCheckParameter2 + a2;
    a2 = v7 - BugCheckParameter2;
    if ( v8 <= v7 )
      return v5;
  }
  return a2;
}
