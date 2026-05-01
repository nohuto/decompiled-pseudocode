/*
 * XREFs of ??1?$_Uninitialized_backout_al@V?$allocator@V?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@@std@@@std@@QEAA@XZ @ 0x180561320
 * Callers:
 *     _std::_Uninitialized_copy_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____const___std::allocator_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color________::_1_::dtor$0 @ 0x18021F530 (_std--_Uninitialized_copy_std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color____co.c)
 *     _std::vector_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color____std::allocator_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color_______::_Assign_range_std::vector_Windows::UI::Color_std::allocator_Windows::UI::Color_______::_1_::dtor$0 @ 0x180560FF2 (_std--vector_std--vector_Windows--UI--Color_std--allocator_Windows--UI--Color____st_ea_180560FF2.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Uninitialized_backout_al<std::allocator<std::vector<Windows::UI::Color>>>::~_Uninitialized_backout_al<std::allocator<std::vector<Windows::UI::Color>>>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  std::_Destroy_range<std::allocator<std::vector<Windows::UI::Color>>>(*a1, a1[1], a3);
}
