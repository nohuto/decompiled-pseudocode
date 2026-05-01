/*
 * XREFs of ?deallocate@?$allocator@I@std@@QEAAXQEAI_K@Z @ 0x18035107C
 * Callers:
 *     _std::vector_unsigned_int_std::allocator_unsigned_int___::_Emplace_reallocate_unsigned_int__::_1_::catch$0 @ 0x1801D7235 (_std--vector_unsigned_int_std--allocator_unsigned_int___--_Emplace_reallocate_unsigned_int__--_1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<unsigned int>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, 4 * a3);
}
