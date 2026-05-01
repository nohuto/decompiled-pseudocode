/*
 * XREFs of _std::vector_int_std::allocator_int___::_Reallocate_exactly_::_1_::catch$3 @ 0x18022B248
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@H@std@@QEAAXQEAH_K@Z @ 0x18040AACC (-deallocate@-$allocator@H@std@@QEAAXQEAH_K@Z.c)
 */

void __fastcall __noreturn std::vector_int_std::allocator_int___::_Reallocate_exactly_::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::allocator<int>::deallocate(a1, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72));
  throw;
}
