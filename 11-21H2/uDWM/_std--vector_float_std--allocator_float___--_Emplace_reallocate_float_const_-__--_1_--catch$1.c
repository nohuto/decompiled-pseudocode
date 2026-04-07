/*
 * XREFs of _std::vector_float_std::allocator_float___::_Emplace_reallocate_float_const_&__::_1_::catch$1 @ 0x180064942
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800636E3 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_float_std::allocator_float___::_Emplace_reallocate_float_const____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 4LL * *(_QWORD *)(a2 + 80));
  throw;
}
