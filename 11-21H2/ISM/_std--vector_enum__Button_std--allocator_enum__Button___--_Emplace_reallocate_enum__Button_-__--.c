/*
 * XREFs of _std::vector_enum__Button_std::allocator_enum__Button___::_Emplace_reallocate_enum__Button_&__::_1_::catch$0 @ 0x1801A688F
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18004AFCA (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_enum__Button_std::allocator_enum__Button___::_Emplace_reallocate_enum__Button____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 4LL * *(_QWORD *)(a2 + 80));
  throw;
}
