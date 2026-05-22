/*
 * XREFs of _std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Emplace_reallocate_INPUT_SPACE_REGION_&__::_1_::catch$23 @ 0x1801B0239
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180057B56 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Emplace_reallocate_INPUT_SPACE_REGION____::_1_::catch_23(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 200LL * *(_QWORD *)(a2 + 80));
  throw;
}
