/*
 * XREFs of _std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$0 @ 0x18004C9D3
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@E@std@@QEAAXQEAE_K@Z @ 0x18001AB0C (-deallocate@-$allocator@E@std@@QEAAXQEAE_K@Z.c)
 *     _CxxThrowException_0 @ 0x18004B750 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<unsigned char>::deallocate(a1, *(char **)(a2 + 72), *(_QWORD *)(a2 + 80));
  throw;
}
