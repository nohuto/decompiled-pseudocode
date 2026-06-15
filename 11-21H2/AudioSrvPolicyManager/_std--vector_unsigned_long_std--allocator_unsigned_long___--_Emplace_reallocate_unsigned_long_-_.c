/*
 * XREFs of _std::vector_unsigned_long_std::allocator_unsigned_long___::_Emplace_reallocate_unsigned_long_&__::_1_::catch$0 @ 0x1800450F6
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@K@std@@QEAAXQEAK_K@Z @ 0x18001DE10 (-deallocate@-$allocator@K@std@@QEAAXQEAK_K@Z.c)
 *     _CxxThrowException_0 @ 0x180044437 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_long_std::allocator_unsigned_long___::_Emplace_reallocate_unsigned_long____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<unsigned long>::deallocate(a1, *(char **)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
