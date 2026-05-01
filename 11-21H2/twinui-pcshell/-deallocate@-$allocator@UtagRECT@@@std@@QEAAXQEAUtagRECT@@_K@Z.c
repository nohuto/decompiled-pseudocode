/*
 * XREFs of ?deallocate@?$allocator@UtagRECT@@@std@@QEAAXQEAUtagRECT@@_K@Z @ 0x1803901D0
 * Callers:
 *     _std::vector_tagRECT_std::allocator_tagRECT___::_Emplace_reallocate_tagRECT__::_1_::catch$0 @ 0x1801A4FE9 (_std--vector_tagRECT_std--allocator_tagRECT___--_Emplace_reallocate_tagRECT__--_1_--catch$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<tagRECT>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, 16 * a3);
}
