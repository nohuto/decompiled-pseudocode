/*
 * XREFs of ??1?$test_common_data@$0A@@details@tip@@QEAA@XZ @ 0x180183458
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_PublisherValidationTest@MeetAndChatManagerTip@@@details@tip@@@std@@EEAAXXZ @ 0x180073A60 (-_Destroy@-$_Ref_count_obj2@V-$test_merged_data@U_tip_PublisherValidationTest@MeetAndChatManager.c)
 *     ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@@std@@EEAAXXZ @ 0x1806DE180 (-_Destroy@-$_Ref_count_obj2@V-$test_merged_data@U_tip_WinXMenuEnumerationTest@@@details@tip@@@st.c)
 * Callees:
 *     TestQueryData @ 0x1800BCEA0 (TestQueryData.c)
 *     ?evaluate_and_report@?$test_common_data@$0A@@details@tip@@AEAAX_J@Z @ 0x1800BCF8C (-evaluate_and_report@-$test_common_data@$0A@@details@tip@@AEAAX_J@Z.c)
 *     ?update_from_test_info@?$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800BD284 (-update_from_test_info@-$test_common_data@$0A@@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     TestClose @ 0x180182A80 (TestClose.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@YAXPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x180414104 (--$_Destroy_range@V-$allocator@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@st.c)
 *     ??$_Destroy_range@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@@QEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x18041418C (--$_Destroy_range@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@.c)
 */

void __fastcall tip::details::test_common_data<0>::~test_common_data<0>(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  wil::StoredFailureInfo *v5; // rcx
  unsigned int v6; // r8d
  _QWORD *v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-48h] BYREF
  LPVOID pv[2]; // [rsp+30h] [rbp-38h]
  __int128 v10; // [rsp+40h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 152);
  if ( v2 && (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 4LL) & 1) == 0 )
  {
    v6 = *(_DWORD *)(a1 + 160);
    *(_QWORD *)(a1 + 152) = 0LL;
    v8 = 0LL;
    *(_OWORD *)pv = 0LL;
    v10 = 0LL;
    if ( (unsigned int)TestQueryData(v2, 4u, v6, (__int64)&v8) )
    {
      tip::details::test_common_data<0>::update_from_test_info(a1, (__int64)&v8);
      tip::details::test_common_data<0>::evaluate_and_report(v7, (void *)v10);
    }
    CoTaskMemFree(pv[1]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  v3 = *(_QWORD *)(a1 + 152);
  if ( v3 )
    TestClose(v3);
  v4 = *(_QWORD *)(a1 + 88);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<std::string>>(v4, *(_QWORD *)(a1 + 96));
    std::_Deallocate<16,0>(*(void **)(a1 + 88), (*(_QWORD *)(a1 + 104) - *(_QWORD *)(a1 + 88)) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  v5 = *(wil::StoredFailureInfo **)(a1 + 64);
  if ( v5 )
  {
    std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>(v5);
    std::_Deallocate<16,0>(*(void **)(a1 + 64), 8 * ((__int64)(*(_QWORD *)(a1 + 80) - *(_QWORD *)(a1 + 64)) >> 3));
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
}
