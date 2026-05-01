/*
 * XREFs of _std::vector_std::pair_unsigned_short_const___unsigned_short_const____std::allocator_std::pair_unsigned_short_const___unsigned_short_const_______::_Emplace_reallocate_std::pair_unsigned_short_const___unsigned_short_const______::_1_::catch$0 @ 0x180316E55
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::pair_unsigned_short_const___unsigned_short_const____std::allocator_std::pair_unsigned_short_const___unsigned_short_const_______::_Emplace_reallocate_std::pair_unsigned_short_const___unsigned_short_const______::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 16LL * *(_QWORD *)(a2 + 80));
  throw;
}
