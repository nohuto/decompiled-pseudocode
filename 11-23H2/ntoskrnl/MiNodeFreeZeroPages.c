/*
 * XREFs of MiNodeFreeZeroPages @ 0x1402E8524
 * Callers:
 *     MiSignalLargePageRebuild @ 0x14021D424 (MiSignalLargePageRebuild.c)
 *     MiReplenishPageSlist @ 0x1402E7AD0 (MiReplenishPageSlist.c)
 *     MiDemoteLocalLargePage @ 0x1402E81B0 (MiDemoteLocalLargePage.c)
 *     MiNodeAvailablePages @ 0x14046CCA6 (MiNodeAvailablePages.c)
 *     MiFreeZeroPagesNeeded @ 0x14046CDB8 (MiFreeZeroPagesNeeded.c)
 *     MiPruneStandbyPages @ 0x14046CFB0 (MiPruneStandbyPages.c)
 *     MiRebuildLargePage @ 0x14046E7E8 (MiRebuildLargePage.c)
 *     MiFreeZeroPageSlistSufficient @ 0x14064D858 (MiFreeZeroPageSlistSufficient.c)
 *     MiRebuildLargePages @ 0x14065DDF0 (MiRebuildLargePages.c)
 * Callees:
 *     MiNodeLargeFreeZeroPages @ 0x1402D75E0 (MiNodeLargeFreeZeroPages.c)
 */

__int64 __fastcall MiNodeFreeZeroPages(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // r13
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // r9
  int v7; // ebp
  __int64 v8; // rbx
  int v9; // r15d
  _QWORD *v11; // rax

  v3 = a2;
  v4 = a1 + 2844;
  v5 = ((unsigned int)~a3 >> 1) & 1;
  v6 = 0LL;
  v7 = 0;
  v8 = 0LL;
  v9 = a3 & 0x1000;
  do
  {
    if ( (unsigned int)MmNumberOfChannels > 1 )
      v11 = &a1[2 * v3 + 2867 + v8];
    else
      v11 = v4;
    v6 += *v11;
    if ( v9 )
      v6 += MiNodeLargeFreeZeroPages(a1, v3, v7);
    ++v7;
    ++v8;
    ++v4;
  }
  while ( v8 <= v5 );
  return v6;
}
