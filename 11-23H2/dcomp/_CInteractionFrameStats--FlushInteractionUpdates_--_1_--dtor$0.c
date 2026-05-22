/*
 * XREFs of _CInteractionFrameStats::FlushInteractionUpdates_::_1_::dtor$0 @ 0x1801A57D1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionFrameStats::FlushInteractionUpdates_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::unique_ptr<CTouchFrameStats::CBatchStats>::~unique_ptr<CTouchFrameStats::CBatchStats>((void **)(a2 + 80));
}
