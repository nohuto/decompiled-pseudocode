/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@Uhstring@winrt@@@std@@@std@@QEAA@XZ @ 0x1806F9960
 * Callers:
 *     _std::_Uninitialized_copy_winrt::hstring_const___std::allocator_winrt::hstring____::_1_::dtor$0 @ 0x1806F7B0A (_std--_Uninitialized_copy_winrt--hstring_const___std--allocator_winrt--hstring____--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::allocator<winrt::hstring>>::~_Uninitialized_backout_al<std::allocator<winrt::hstring>>(
        volatile signed __int32 ***a1)
{
  std::_Destroy_range<std::allocator<winrt::hstring>>(*a1, a1[1]);
}
