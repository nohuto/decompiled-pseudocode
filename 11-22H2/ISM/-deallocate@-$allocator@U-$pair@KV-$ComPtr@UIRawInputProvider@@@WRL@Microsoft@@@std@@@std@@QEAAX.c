/*
 * XREFs of ?deallocate@?$allocator@U?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@std@@@std@@QEAAXQEAU?$pair@KV?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@@2@_K@Z @ 0x180060704
 * Callers:
 *     _std::vector_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider____std::allocator_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider_______::_Emplace_reallocate_unsigned_long_const_&_IRawInputProvider___&__::_1_::catch$0 @ 0x18006046B (_std--vector_std--pair_unsigned_long_Microsoft--WRL--ComPtr_IRawInputProvider____std--allocator_.c)
 *     _std::vector_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider____std::allocator_std::pair_unsigned_long_Microsoft::WRL::ComPtr_IRawInputProvider_______::_Reallocate_exactly_::_1_::catch$0 @ 0x1800606B9 (_std--vector_std--pair_unsigned_long_Microsoft--WRL--ComPtr_IRawInputProvider____st_ea_1800606B9.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::pair<unsigned long,Microsoft::WRL::ComPtr<IRawInputProvider>>>::deallocate(
        __int64 a1,
        void *a2,
        __int64 a3)
{
  std::_Deallocate<16,0>(a2, 16 * a3);
}
