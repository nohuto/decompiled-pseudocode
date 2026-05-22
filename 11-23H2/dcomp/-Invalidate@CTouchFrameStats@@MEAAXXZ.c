/*
 * XREFs of ?Invalidate@CTouchFrameStats@@MEAAXXZ @ 0x1801A5820
 * Callers:
 *     ?Invalidate@CInteractionFrameStats@@MEAAXXZ @ 0x1801A57F0 (-Invalidate@CInteractionFrameStats@@MEAAXXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@@0@@Z @ 0x180009340 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCBatchStats@CTouchFrameStats@@U-$default_delete@VC.c)
 *     ?Invalidate@CCompFrameStats@@MEAAXXZ @ 0x1801A4060 (-Invalidate@CCompFrameStats@@MEAAXXZ.c)
 */

void __fastcall CTouchFrameStats::Invalidate(void ***this)
{
  CCompFrameStats::Invalidate((CCompFrameStats *)this);
  this[25] = this[24];
  std::_Destroy_range<std::allocator<std::unique_ptr<CTouchFrameStats::CBatchStats>>>(this[27], this[28]);
  this[28] = this[27];
  this[31] = this[30];
  this[34] = this[33];
}
