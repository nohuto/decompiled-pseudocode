/*
 * XREFs of _std::vector_unsigned_long_std::allocator_unsigned_long___::_Emplace_reallocate_unsigned_long_&__::_1_::catch$0 @ 0x18004A392
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F520 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180048B04 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_long_std::allocator_unsigned_long___::_Emplace_reallocate_unsigned_long____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 88), 4LL * *(_QWORD *)(a2 + 80));
  throw;
}
