/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@0@@Z @ 0x180009340
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@0@@Z @ 0x180008F84 (--$_Uninitialized_move@PEAV-$unique_ptr@VCBatchStats@CTouchFrameStats@@U-$default_delete@VCBatch.c)
 *     ?_Change_array@?$vector@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@2@@std@@AEAAXQEAV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@2@_K1@Z @ 0x180009244 (-_Change_array@-$vector@V-$unique_ptr@VCBatchStats@CTouchFrameStats@@U-$default_delete@VCBatchSt.c)
 *     _std::vector_std::unique_ptr_CTouchFrameStats::CBatchStats_std::default_delete_CTouchFrameStats::CBatchStats____std::allocator_std::unique_ptr_CTouchFrameStats::CBatchStats_std::default_delete_CTouchFrameStats::CBatchStats_______::_Emplace_reallocate_std::unique_ptr_CTouchFrameStats::CBatchStats_std::default_delete_CTouchFrameStats::CBatchStats______::_1_::catch$10 @ 0x1800B1E45 (_std--vector_std--unique_ptr_CTouchFrameStats--CBatchStats_std--default_delete_CTouchFrameStats-.c)
 *     ??1CTouchFrameStats@@MEAA@XZ @ 0x1801A5280 (--1CTouchFrameStats@@MEAA@XZ.c)
 *     ?Invalidate@CTouchFrameStats@@MEAAXXZ @ 0x1801A5820 (-Invalidate@CTouchFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CTouchFrameStats::CBatchStats>>>(
        void **a1,
        void **a2)
{
  void **v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        operator delete(*v3, 0x70uLL);
      ++v3;
    }
    while ( v3 != a2 );
  }
}
