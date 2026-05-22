/*
 * XREFs of _std::vector_CTouchFrameStats::BatchFrameId_std::allocator_CTouchFrameStats::BatchFrameId___::_Emplace_reallocate_unsigned_long_&_unsigned___int64_&__::_1_::catch$10 @ 0x1801A68E1
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800A8114 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_CTouchFrameStats::BatchFrameId_std::allocator_CTouchFrameStats::BatchFrameId___::_Emplace_reallocate_unsigned_long___unsigned___int64____::_1_::catch_10(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 16LL * *(_QWORD *)(a2 + 80));
  throw;
}
