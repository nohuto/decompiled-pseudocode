/*
 * XREFs of ??1?$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@QEAA@XZ @ 0x18019BD20
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@@std@@EEAAXXZ @ 0x1801A22C0 (-_Destroy@-$_Ref_count_obj2@V-$test_merged_data@U_tip_SearchFullActivationTest@@@details@tip@@@s.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800E6350 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall tip::details::test_merged_data<_tip_SearchFullActivationTest>::~test_merged_data<_tip_SearchFullActivationTest>(
        __int64 a1)
{
  std::wstring::~wstring((void **)(a1 + 176));
  return tip::details::test_common_data<0>::~test_common_data<0>(a1 + 8);
}
