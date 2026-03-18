/*
 * XREFs of ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x180011544
 * Callers:
 *     ?AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV?$unique_ptr@VCBatchCommand@@U?$default_delete@VCBatchCommand@@@std@@@std@@@Z @ 0x180011354 (-AddStateSettingCommand@CBatchOptimizer@@QEAAX$$QEAV-$unique_ptr@VCBatchCommand@@U-$default_dele.c)
 *     ?Flush@CBatchOptimizer@@QEAAXXZ @ 0x18007FC60 (-Flush@CBatchOptimizer@@QEAAXXZ.c)
 *     ?TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z @ 0x180113676 (-TryRemoveEmptyStateSettingLayer@CBatchOptimizer@@AEAA_NH@Z.c)
 * Callees:
 *     ?DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV?$span@PEAVCBatchCommand@@$0?0@gsl@@@Z @ 0x1800115DC (-DiscardEntries@CBatchOptimizer@@CAXPEAVCDrawListBatchManager@@AEBV-$span@PEAVCBatchCommand@@$0-.c)
 *     ?RecycleLayer@CBatchOptimizer@@AEAAXH@Z @ 0x180080650 (-RecycleLayer@CBatchOptimizer@@AEAAXH@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x180190BB4 (-terminate@details@gsl@@YAXXZ.c)
 */

void __fastcall CBatchOptimizer::DiscardEmptyLayers(CBatchOptimizer *this, int a2, unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int i; // edi
  __int64 v7; // r14
  gsl::details *v8; // rcx
  gsl::details *v9; // [rsp+20h] [rbp-28h] BYREF
  char *v10; // [rsp+28h] [rbp-20h]

  if ( a3 )
  {
    v4 = a2;
    for ( i = 0; i < a3; ++i )
    {
      v7 = 520LL * *((int *)this + v4 + 12);
      v10 = (char *)this + v7 + 120;
      v8 = (gsl::details *)*(unsigned int *)((char *)this + v7 + 96);
      v9 = v8;
      if ( !v10 && v8 )
      {
        gsl::details::terminate(v8);
        JUMPOUT(0x18011D2AALL);
      }
      CBatchOptimizer::DiscardEntries(*((_QWORD *)this + 1), &v9);
      *(_DWORD *)((char *)this + v7 + 96) = 0;
      CBatchOptimizer::RecycleLayer(this, v4);
    }
  }
}
