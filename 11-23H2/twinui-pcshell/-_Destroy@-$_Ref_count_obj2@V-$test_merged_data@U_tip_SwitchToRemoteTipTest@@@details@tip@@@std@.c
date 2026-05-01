/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_SwitchToRemoteTipTest@@@details@tip@@@std@@EEAAXXZ @ 0x18071A5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$value_iterator_data@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@reg@wil@@QEAA@XZ @ 0x1800A8D90 (--1-$value_iterator_data@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@reg@wil@.c)
 */

void __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_SwitchToRemoteTipTest>>::_Destroy(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rdx

  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a1 + 288), a2);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a1 + 232), v3);
  wil::reg::value_iterator_data<std::wstring>::~value_iterator_data<std::wstring>((void *)(a1 + 200), v4);
  tip::details::test_common_data<1>::~test_common_data<1>(a1 + 24);
}
