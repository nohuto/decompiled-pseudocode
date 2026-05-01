/*
 * XREFs of ?deallocate@?$allocator@E@std@@QEAAXQEAE_K@Z @ 0x18001AB0C
 * Callers:
 *     _std::vector_unsigned_char_std::allocator_unsigned_char___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$0 @ 0x18004C9D3 (_std--vector_unsigned_char_std--allocator_unsigned_char___--_Resize_reallocate_std--_Value_init_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<unsigned char>::deallocate(__int64 a1, char *a2, unsigned __int64 a3)
{
  std::_Deallocate<16,0>(a2, a3);
}
