/*
 * XREFs of ?start@?$tip_test@U_tip_EnsureWebExperiencePackageInstalledTest@@@tip@@QEAA?AU_GUID@@XZ @ 0x1801CFF10
 * Callers:
 *     ??$start@V?$tip_test@U_tip_EnsureWebExperiencePackageInstalledTest@@@tip@@@tip@@YA?AV?$tip_test@U_tip_EnsureWebExperiencePackageInstalledTest@@@0@XZ @ 0x1801C3630 (--$start@V-$tip_test@U_tip_EnsureWebExperiencePackageInstalledTest@@@tip@@@tip@@YA-AV-$tip_test@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?start@?$test_common_data@$0A@@details@tip@@QEAA?AU_GUID@@XZ @ 0x180121D9C (-start@-$test_common_data@$0A@@details@tip@@QEAA-AU_GUID@@XZ.c)
 *     ?has_ever_started@?$test_common_data@$0A@@details@tip@@QEAA_NXZ @ 0x18017AEE0 (-has_ever_started@-$test_common_data@$0A@@details@tip@@QEAA_NXZ.c)
 *     ??$make_shared@V?$test_merged_data@U_tip_EnsureWebExperiencePackageInstalledTest@@@details@tip@@$$V@std@@YA?AV?$shared_ptr@V?$test_merged_data@U_tip_EnsureWebExperiencePackageInstalledTest@@@details@tip@@@0@XZ @ 0x1801C2F90 (--$make_shared@V-$test_merged_data@U_tip_EnsureWebExperiencePackageInstalledTest@@@details@tip@@.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall tip::tip_test<_tip_EnsureWebExperiencePackageInstalledTest>::start(__int64 *a1, _OWORD *a2)
{
  __int64 v4; // r8
  std::_Ref_count_base *v5; // rcx
  __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  std::_Ref_count_base *v9; // rcx
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v12; // [rsp+28h] [rbp-10h]

  v4 = *a1;
  if ( *a1 )
  {
    if ( tip::details::test_common_data<0>::has_ever_started(v4 + 8) )
    {
      *a1 = 0LL;
      v5 = (std::_Ref_count_base *)a1[1];
      a1[1] = 0LL;
      v4 = 0LL;
      if ( v5 )
      {
        std::_Ref_count_base::_Decref(v5);
        v4 = *a1;
      }
    }
  }
  if ( !v4 )
  {
    v6 = std::make_shared<tip::details::test_merged_data<_tip_EnsureWebExperiencePackageInstalledTest>,>(&v11);
    v7 = *v6;
    v8 = v6[1];
    *v6 = 0LL;
    v6[1] = 0LL;
    *a1 = v7;
    v9 = (std::_Ref_count_base *)a1[1];
    a1[1] = v8;
    if ( v9 )
      std::_Ref_count_base::_Decref(v9);
    if ( v12 )
      std::_Ref_count_base::_Decref(v12);
  }
  tip::details::test_common_data<0>::start(*a1 + 8, a2);
  return a2;
}
