/*
 * XREFs of ?deallocate@?$allocator@H@std@@QEAAXQEAH_K@Z @ 0x18033CDD4
 * Callers:
 *     _std::vector_int_std::allocator_int___::_Resize_reallocate_std::_Value_init_tag__::_1_::catch$2 @ 0x1801C2267 (_std--vector_int_std--allocator_int___--_Resize_reallocate_std--_Value_init_tag__--_1_--catch$2.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<int>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, 4 * a3);
}
