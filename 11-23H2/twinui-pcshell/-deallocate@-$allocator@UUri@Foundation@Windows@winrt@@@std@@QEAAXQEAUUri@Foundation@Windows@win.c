/*
 * XREFs of ?deallocate@?$allocator@UUri@Foundation@Windows@winrt@@@std@@QEAAXQEAUUri@Foundation@Windows@winrt@@_K@Z @ 0x180249764
 * Callers:
 *     _std::vector_winrt::Windows::Foundation::Uri_std::allocator_winrt::Windows::Foundation::Uri___::_Emplace_reallocate_winrt::Windows::Foundation::Uri_const_&__::_1_::catch$0 @ 0x18022F499 (_std--vector_winrt--Windows--Foundation--Uri_std--allocator_winrt--Windows--Foundation--Uri___--.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<winrt::Windows::Foundation::Uri>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, 8 * a3);
}
