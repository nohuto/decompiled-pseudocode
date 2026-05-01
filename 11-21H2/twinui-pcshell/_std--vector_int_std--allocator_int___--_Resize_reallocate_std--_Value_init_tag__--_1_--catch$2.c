/*
 * XREFs of _std::vector_int_std::allocator_int___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$2 @ 0x1801C2267
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@H@std@@QEAAXQEAH_K@Z @ 0x18033CDD4 (-deallocate@-$allocator@H@std@@QEAAXQEAH_K@Z.c)
 */

void __fastcall __noreturn std::vector_int_std::allocator_int___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch_2(
        __int64 a1,
        __int64 a2)
{
  std::allocator<int>::deallocate(a1, *(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 80));
  throw;
}
