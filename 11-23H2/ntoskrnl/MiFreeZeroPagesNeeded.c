/*
 * XREFs of MiFreeZeroPagesNeeded @ 0x14046D1B8
 * Callers:
 *     MiPruneStandbyPages @ 0x14046D3B0 (MiPruneStandbyPages.c)
 *     MiRebalanceZeroFreeLists @ 0x140651C80 (MiRebalanceZeroFreeLists.c)
 * Callees:
 *     MiNodeFreeZeroPages @ 0x1402E87B4 (MiNodeFreeZeroPages.c)
 *     MiGetNodeStandbyPageCount @ 0x14046D22A (MiGetNodeStandbyPageCount.c)
 */

__int64 __fastcall MiFreeZeroPagesNeeded(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // r11

  if ( (unsigned __int64)MiNodeFreeZeroPages((_QWORD *)(*(_QWORD *)(a1 + 16) + 25408LL * a2), a3, 4096) >= 0x200
    || (unsigned __int64)MiGetNodeStandbyPageCount(a1, a2, a3) < 0x1000 )
  {
    return 0LL;
  }
  else
  {
    return 1024 - v6;
  }
}
