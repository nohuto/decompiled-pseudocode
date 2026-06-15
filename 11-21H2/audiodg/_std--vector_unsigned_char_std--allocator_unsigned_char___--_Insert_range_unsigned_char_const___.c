/*
 * XREFs of _std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch$10 @ 0x140060AF9
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x14002D290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1400309C0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch_10(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 48), *(_QWORD *)(a2 + 136));
  throw;
}
