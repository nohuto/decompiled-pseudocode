/*
 * XREFs of _std::vector_Geometry::CRect_std::allocator_Geometry::CRect___::_Reallocate_exactly_::_1_::catch$0 @ 0x1805A7775
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Geometry::CRect_std::allocator_Geometry::CRect___::_Reallocate_exactly_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 48), 16LL * *(_QWORD *)(a2 + 56));
  throw;
}
