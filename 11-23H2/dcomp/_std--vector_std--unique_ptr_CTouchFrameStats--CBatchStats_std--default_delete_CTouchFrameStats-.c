/*
 * XREFs of _std::vector_std::unique_ptr_CTouchFrameStats::CBatchStats_std::default_delete_CTouchFrameStats::CBatchStats____std::allocator_std::unique_ptr_CTouchFrameStats::CBatchStats_std::default_delete_CTouchFrameStats::CBatchStats_______::_Emplace_reallocate_std::unique_ptr_CTouchFrameStats::CBatchStats_std::default_delete_CTouchFrameStats::CBatchStats______::_1_::catch$10 @ 0x1800B1E45
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@0@@Z @ 0x180009340 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCBatchStats@CTouchFrameStats@@U-$default_delete@VC.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800A8114 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::unique_ptr_CTouchFrameStats::CBatchStats_std::default_delete_CTouchFrameStats::CBatchStats____std::allocator_std::unique_ptr_CTouchFrameStats::CBatchStats_std::default_delete_CTouchFrameStats::CBatchStats_______::_Emplace_reallocate_std::unique_ptr_CTouchFrameStats::CBatchStats_std::default_delete_CTouchFrameStats::CBatchStats______::_1_::catch_10(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::unique_ptr<CTouchFrameStats::CBatchStats>>>(
    *(void ***)(a2 + 112),
    *(void ***)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 8LL * *(_QWORD *)(a2 + 120));
  throw;
}
