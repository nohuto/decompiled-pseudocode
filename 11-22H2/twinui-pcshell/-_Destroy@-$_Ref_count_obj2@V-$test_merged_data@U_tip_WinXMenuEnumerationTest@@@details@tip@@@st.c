/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@@std@@EEAAXXZ @ 0x1806DE180
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Ref_count_obj2<tip::details::test_merged_data<_tip_WinXMenuEnumerationTest>>::_Destroy(
        _QWORD *a1)
{
  void *v2; // rcx

  v2 = (void *)a1[26];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (a1[28] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL);
    a1[26] = 0LL;
    a1[27] = 0LL;
    a1[28] = 0LL;
  }
  tip::details::test_common_data<0>::~test_common_data<0>((__int64)(a1 + 3));
}
