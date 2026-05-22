/*
 * XREFs of _std::vector_LegacyInputInfo_std::allocator_LegacyInputInfo___::_Emplace_reallocate_LegacyInputInfo_&__::_1_::catch$2 @ 0x1800DD7E9
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180057B56 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_LegacyInputInfo_std::allocator_LegacyInputInfo___::_Emplace_reallocate_LegacyInputInfo____::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 3008LL * *(_QWORD *)(a2 + 80));
  throw;
}
