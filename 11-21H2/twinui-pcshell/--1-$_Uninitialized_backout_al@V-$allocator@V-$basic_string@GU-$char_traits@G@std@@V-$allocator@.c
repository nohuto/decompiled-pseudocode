/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@QEAA@XZ @ 0x180316334
 * Callers:
 *     _std::vector_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::allocator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_______::_Range_construct_or_tidy_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const____::_1_::dtor$1 @ 0x18021A179 (_std--vector_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std-_ea_18021A179.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Uninitialized_backout_al<std::allocator<std::wstring>>::~_Uninitialized_backout_al<std::allocator<std::wstring>>(
        __int64 *a1)
{
  return std::_Destroy_range<std::allocator<std::wstring>>(*a1, a1[1]);
}
