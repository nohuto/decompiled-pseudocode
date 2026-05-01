/*
 * XREFs of ?deallocate@?$allocator@H@std@@QEAAXQEAH_K@Z @ 0x18040AACC
 * Callers:
 *     _std::vector_int_std::allocator_int___::_Emplace_reallocate___::_1_::catch$9 @ 0x180229B1E (_std--vector_int_std--allocator_int___--_Emplace_reallocate___--_1_--catch$9.c)
 *     _std::vector_int_std::allocator_int___::_Reallocate_exactly_::_1_::catch$3 @ 0x18022B248 (_std--vector_int_std--allocator_int___--_Reallocate_exactly_--_1_--catch$3.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<int>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, 4 * a3);
}
