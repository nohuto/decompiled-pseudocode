/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_DesktopTouchKeyboardShowOnTap@TouchKeyboardExperienceTip@@@details@tip@@@std@@EEAAXXZ @ 0x18022F770
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800E63C0 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<TouchKeyboardExperienceTip::_tip_DesktopTouchKeyboardShowOnTap>>::_Destroy(
        __int64 a1)
{
  std::wstring::_Tidy_deallocate(a1 + 176);
  return tip::details::test_common_data<1>::~test_common_data<1>(a1 + 24);
}
