/*
 * XREFs of _std::vector_unsigned_int_std::allocator_unsigned_int___::_Reallocate_exactly_::_1_::catch$7 @ 0x1800FD368
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A124 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x180056DC6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_int_std::allocator_unsigned_int___::_Reallocate_exactly_::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(void **)(a2 + 64), 4LL * *(_QWORD *)(a2 + 72));
  throw;
}
