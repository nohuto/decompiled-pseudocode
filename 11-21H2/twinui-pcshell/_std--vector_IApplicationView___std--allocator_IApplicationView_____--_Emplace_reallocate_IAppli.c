/*
 * XREFs of _std::vector_IApplicationView___std::allocator_IApplicationView_____::_Emplace_reallocate_IApplicationView____::_1_::catch$0 @ 0x18031E23F
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_IApplicationView___std::allocator_IApplicationView_____::_Emplace_reallocate_IApplicationView____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 8LL * *(_QWORD *)(a2 + 80));
  throw;
}
