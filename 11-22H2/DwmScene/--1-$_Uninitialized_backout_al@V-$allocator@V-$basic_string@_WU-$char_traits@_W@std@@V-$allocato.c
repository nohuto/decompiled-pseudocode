/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@QEAA@XZ @ 0x18001F108
 * Callers:
 *     _std::_Uninitialized_copy_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::allocator_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________::_1_::dtor$0 @ 0x1800E4B35 (_std--_Uninitialized_copy_std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wch.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_backout_al<std::allocator<std::wstring>>::~_Uninitialized_backout_al<std::allocator<std::wstring>>(
        __int64 *a1)
{
  return std::_Destroy_range<std::allocator<std::wstring>>(*a1, a1[1]);
}
