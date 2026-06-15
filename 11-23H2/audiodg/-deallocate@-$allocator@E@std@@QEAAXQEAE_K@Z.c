/*
 * XREFs of ?deallocate@?$allocator@E@std@@QEAAXQEAE_K@Z @ 0x140065FC0
 * Callers:
 *     _std::vector_unsigned_char_std::allocator_unsigned_char___::_Insert_range_unsigned_char_const____::_1_::catch$3 @ 0x1400646A2 (_std--vector_unsigned_char_std--allocator_unsigned_char___--_Insert_range_unsigned_char_const___.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<unsigned char>::deallocate(__int64 a1, void *a2, unsigned __int64 a3)
{
  std::_Deallocate<16,0>(a2, a3);
}
