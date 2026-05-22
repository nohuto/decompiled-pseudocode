/*
 * XREFs of ??1?$unique_ptr@VCBatchStats@CTouchFrameStats@@U?$default_delete@VCBatchStats@CTouchFrameStats@@@std@@@std@@QEAA@XZ @ 0x1801A51CC
 * Callers:
 *     _CTouchFrameStats::GetBatchStats_::_1_::dtor$0 @ 0x1800B1E33 (_CTouchFrameStats--GetBatchStats_--_1_--dtor$0.c)
 *     _CInteractionFrameStats::FlushInteractionUpdates_::_1_::dtor$0 @ 0x1801A57D1 (_CInteractionFrameStats--FlushInteractionUpdates_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CTouchFrameStats::CBatchStats>::~unique_ptr<CTouchFrameStats::CBatchStats>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}
