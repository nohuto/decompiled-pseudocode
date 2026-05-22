/*
 * XREFs of _CTouchFrameStats::GetBatchStats_::_1_::dtor$0 @ 0x1800B1E33
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTouchFrameStats::GetBatchStats_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return std::unique_ptr<CTouchFrameStats::CBatchStats>::~unique_ptr<CTouchFrameStats::CBatchStats>(a2 + 48);
}
