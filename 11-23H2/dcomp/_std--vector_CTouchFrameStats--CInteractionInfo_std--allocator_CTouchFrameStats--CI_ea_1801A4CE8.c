/*
 * XREFs of _std::vector_CTouchFrameStats::CInteractionInfo_std::allocator_CTouchFrameStats::CInteractionInfo___::_Emplace_reallocate_CTouchFrameStats::CBatchStats___&_TOUCH_TELEMETRY_UPDATE_INFO_&__::_1_::catch$1 @ 0x1801A4CE8
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800A8114 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CTouchFrameStats::CInteractionInfo_std::allocator_CTouchFrameStats::CInteractionInfo___::_Emplace_reallocate_CTouchFrameStats::CBatchStats_____TOUCH_TELEMETRY_UPDATE_INFO____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 104), 224LL * *(_QWORD *)(a2 + 96));
  throw;
}
