/*
 * XREFs of ?deallocate@?$allocator@K@std@@QEAAXQEAK_K@Z @ 0x18001DE10
 * Callers:
 *     _std::vector_unsigned_long_std::allocator_unsigned_long___::_Emplace_reallocate_unsigned_long_&__::_1_::catch$0 @ 0x1800450F6 (_std--vector_unsigned_long_std--allocator_unsigned_long___--_Emplace_reallocate_unsigned_long_-_.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<unsigned long>::deallocate(__int64 a1, char *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, 4 * a3);
}
