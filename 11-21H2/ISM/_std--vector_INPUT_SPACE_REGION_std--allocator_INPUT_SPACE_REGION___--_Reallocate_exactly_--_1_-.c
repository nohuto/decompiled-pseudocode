/*
 * XREFs of _std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Reallocate_exactly_::_1_::catch$0 @ 0x18018507F
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18004AFCA (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_INPUT_SPACE_REGION_std::allocator_INPUT_SPACE_REGION___::_Reallocate_exactly_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 64), 200LL * *(_QWORD *)(a2 + 72));
  throw;
}
