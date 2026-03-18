/*
 * XREFs of ??$SAFE_DELETE@V?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@@YAXAEAPEAV?$vector@PEAVCVisual@@V?$allocator@PEAVCVisual@@@std@@@std@@@Z @ 0x1801F62DC
 * Callers:
 *     ?DeleteDepthSortedList@CVisual@@AEAAXXZ @ 0x1800495E4 (-DeleteDepthSortedList@CVisual@@AEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800D7338 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall SAFE_DELETE<std::vector<CVisual *>>(__int64 *a1)
{
  __int64 v1; // rbx

  v1 = *a1;
  if ( *a1 )
  {
    if ( *(_QWORD *)v1 )
    {
      std::_Deallocate<16,0>(*(void **)v1, (*(_QWORD *)(v1 + 16) - *(_QWORD *)v1) & 0xFFFFFFFFFFFFFFF8uLL);
      *(_QWORD *)v1 = 0LL;
      *(_QWORD *)(v1 + 8) = 0LL;
      *(_QWORD *)(v1 + 16) = 0LL;
    }
    operator delete((void *)v1);
    *a1 = 0LL;
  }
}
