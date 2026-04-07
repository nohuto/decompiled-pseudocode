/*
 * XREFs of ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x1800F13DC
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@@std@@EEAAXXZ @ 0x1800F6BC0 (-_Destroy@-$_Ref_count_obj2@V-$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800558D4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@YAXPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x1800EF294 (--$_Destroy_range@V-$allocator@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@st.c)
 *     ??$_Destroy_range@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@@QEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x1800EF2EC (--$_Destroy_range@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@.c)
 *     ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x1800F2E48 (-evaluate_and_report@-$test_common_data@$0A@@details@tip@@AEAAX_J@Z.c)
 *     ?update_from_test_info@?$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800F4168 (-update_from_test_info@-$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 *     TestClose @ 0x1800F45D4 (TestClose.c)
 *     TestQueryData @ 0x1800F4630 (TestQueryData.c)
 */

void __fastcall tip::details::test_common_data<0>::~test_common_data<0>(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  LPVOID pv[2]; // [rsp+30h] [rbp-38h]
  __int128 v9; // [rsp+40h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 152);
  if ( v2 && (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 4LL) & 1) == 0 )
  {
    v3 = *(unsigned int *)(a1 + 160);
    *(_QWORD *)(a1 + 152) = 0LL;
    v7 = 0LL;
    *(_OWORD *)pv = 0LL;
    v9 = 0LL;
    if ( (unsigned int)TestQueryData(v2, 4LL, v3, &v7) )
    {
      tip::details::test_common_data<0>::update_from_test_info(a1, &v7);
      tip::details::test_common_data<0>::evaluate_and_report(v4, v9);
    }
    CoTaskMemFree(pv[1]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  if ( *(_QWORD *)(a1 + 152) )
    TestClose();
  v5 = *(_QWORD *)(a1 + 88);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<std::string>>(v5, *(_QWORD *)(a1 + 96));
    std::_Deallocate<16,0>(*(void **)(a1 + 88), (*(_QWORD *)(a1 + 104) - *(_QWORD *)(a1 + 88)) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 64);
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>(v6, *(_QWORD *)(a1 + 72));
    std::_Deallocate<16,0>(*(void **)(a1 + 64), 8 * ((__int64)(*(_QWORD *)(a1 + 80) - *(_QWORD *)(a1 + 64)) >> 3));
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
}
