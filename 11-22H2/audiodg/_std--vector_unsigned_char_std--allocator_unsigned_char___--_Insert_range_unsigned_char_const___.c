/*
 * XREFs of _std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch$3 @ 0x1400646F2
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x140029240 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@E@std@@QEAAXQEAE_K@Z @ 0x140066010 (-deallocate@-$allocator@E@std@@QEAAXQEAE_K@Z.c)
 */

void __fastcall __noreturn std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::allocator<unsigned char>::deallocate(a1, *(_QWORD *)(a2 + 40), *(_QWORD *)(a2 + 120));
  throw;
}
