/*
 * XREFs of MiSetPfnRemovalRequested @ 0x14064DEB4
 * Callers:
 *     MiInsertPageInList @ 0x14026EC00 (MiInsertPageInList.c)
 *     MiInitializeDynamicPfns @ 0x14061AEF8 (MiInitializeDynamicPfns.c)
 *     MiHotRemoveHugeRange @ 0x1406200D4 (MiHotRemoveHugeRange.c)
 *     MiRemoveBadPages @ 0x14062A440 (MiRemoveBadPages.c)
 *     MiUnlinkBadPages @ 0x14062AD10 (MiUnlinkBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B5B0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiMarkFileOnlyPfnBad @ 0x14063E040 (MiMarkFileOnlyPfnBad.c)
 *     MiMakePageBad @ 0x14065E2B0 (MiMakePageBad.c)
 * Callees:
 *     MiSearchNumaNodeTable @ 0x14026EAD0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402894C0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14028A930 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAddPendingBadPageNode @ 0x1406296E8 (MiAddPendingBadPageNode.c)
 *     MiRemovePendingBadPageNode @ 0x14062A908 (MiRemovePendingBadPageNode.c)
 */

void __fastcall MiSetPfnRemovalRequested(unsigned __int64 a1, int a2, int a3, unsigned __int64 a4)
{
  unsigned __int8 v4; // bl
  __int64 v9; // rbp

  v4 = *(_BYTE *)(a1 + 35);
  if ( ((v4 >> 6) & 1) != a2 )
  {
    if ( _bittest64((const signed __int64 *)(a1 + 40), 0x35u) )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(*(_QWORD *)(qword_140C673C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 43) & 0x3FFLL)) + 16LL)
         + 25408LL
         * *((unsigned int *)MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4)) + 2);
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v9 + 23104));
      *(_QWORD *)(v9 + 23136) += a2 != 0 ? 1LL : -1LL;
    }
    if ( (v4 & 0x40) != 0 )
    {
      if ( a3 )
        MiRemovePendingBadPageNode(a1);
    }
    else
    {
      MiAddPendingBadPageNode(a1, a4);
    }
    *(_BYTE *)(a1 + 35) = v4 ^ (v4 ^ ((_BYTE)a2 << 6)) & 0x40;
    if ( v9 )
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 23104));
  }
}
