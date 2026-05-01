/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@@std@@EEAAXXZ @ 0x1801BE6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_RecoverRemoteSessionTipTest>>::_Destroy(
        __int64 a1)
{
  std::wstring::_Tidy_deallocate(a1 + 232);
  std::wstring::_Tidy_deallocate(a1 + 200);
  tip::details::test_common_data<1>::~test_common_data<1>(a1 + 24);
}
