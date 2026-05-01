/*
 * XREFs of _std::vector_unsigned_int_std::allocator_unsigned_int___::_Emplace_reallocate_unsigned_int__::_1_::catch$0 @ 0x1801D7235
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@I@std@@QEAAXQEAI_K@Z @ 0x18035107C (-deallocate@-$allocator@I@std@@QEAAXQEAI_K@Z.c)
 */

void __fastcall __noreturn std::vector_unsigned_int_std::allocator_unsigned_int___::_Emplace_reallocate_unsigned_int__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<unsigned int>::deallocate(a1, *(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
