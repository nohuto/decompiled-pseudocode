/*
 * XREFs of _std::vector_enum__Button_std::allocator_enum__Button___::_Emplace_reallocate_enum__Button_&__::_1_::catch$21 @ 0x1801D24A3
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180057B56 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_enum__Button_std::allocator_enum__Button___::_Emplace_reallocate_enum__Button____::_1_::catch_21(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 4LL * *(_QWORD *)(a2 + 80));
  throw;
}
