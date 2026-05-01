/*
 * XREFs of ??1?$test_common_data@$00@details@tip@@QEAA@XZ @ 0x180093D4C
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@@@std@@EEAAXXZ @ 0x1801BE6F0 (-_Destroy@-$_Ref_count_obj2@V-$test_merged_data@U_tip_RecoverRemoteSessionTipTest@@@details@tip@.c)
 *     ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@Experiences@ComposableShell@WindowsInternal@@@details@tip@@@std@@EEAAXXZ @ 0x180278720 (-_Destroy@-$_Ref_count_obj2@V-$test_merged_data@U_tip_VirtualDesktopRearrangeTest@Tip@Switcher@E.c)
 *     ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_DiscoverabilityManagerTipTest@@@details@tip@@@std@@EEAAXXZ @ 0x180607740 (-_Destroy@-$_Ref_count_obj2@V-$test_merged_data@U_tip_DiscoverabilityManagerTipTest@@@details@ti.c)
 *     ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_BootToCloudPCTest@@@details@tip@@@std@@EEAAXXZ @ 0x180707BF0 (-_Destroy@-$_Ref_count_obj2@V-$test_merged_data@U_tip_BootToCloudPCTest@@@details@tip@@@std@@EEA.c)
 *     ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@EEAAXXZ @ 0x18071A590 (-_Destroy@-$_Ref_count_obj2@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@t.c)
 *     ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_SwitchToRemoteTipTest@@@details@tip@@@std@@EEAAXXZ @ 0x18071A5D0 (-_Destroy@-$_Ref_count_obj2@V-$test_merged_data@U_tip_SwitchToRemoteTipTest@@@details@tip@@@std@.c)
 *     ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_RemoteSessionActivationTipTest@@@details@tip@@@std@@EEAAXXZ @ 0x180723A30 (-_Destroy@-$_Ref_count_obj2@V-$test_merged_data@U_tip_RemoteSessionActivationTipTest@@@details@t.c)
 *     ?_Destroy@?$_Ref_count_obj2@V?$test_merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@@details@tip@@@std@@EEAAXXZ @ 0x180723A60 (-_Destroy@-$_Ref_count_obj2@V-$test_merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@@detai.c)
 * Callees:
 *     ?update_from_test_info@?$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z @ 0x1800955C8 (-update_from_test_info@-$test_common_data@$00@details@tip@@AEAAXAEBUTestInfo@@@Z.c)
 *     ?evaluate_and_report@?$test_common_data@$00@details@tip@@AEAAX_J@Z @ 0x18009582C (-evaluate_and_report@-$test_common_data@$00@details@tip@@AEAAX_J@Z.c)
 *     TestQueryData @ 0x1800BCEA0 (TestQueryData.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     TestClose @ 0x180182A80 (TestClose.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??$_Destroy_range@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@std@@YAXPEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEAV10@AEAV?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@0@@Z @ 0x180414104 (--$_Destroy_range@V-$allocator@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@@st.c)
 *     ??$_Destroy_range@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@@QEAV12@AEAV?$allocator@VStoredFailureInfo@wil@@@0@@Z @ 0x18041418C (--$_Destroy_range@V-$allocator@VStoredFailureInfo@wil@@@std@@@std@@YAXPEAVStoredFailureInfo@wil@.c)
 */

void __fastcall tip::details::test_common_data<1>::~test_common_data<1>(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  wil::StoredFailureInfo *v4; // rcx
  __int64 v5; // r8
  __int128 v6; // [rsp+20h] [rbp-48h] BYREF
  LPVOID pv[2]; // [rsp+30h] [rbp-38h]
  __int128 v8; // [rsp+40h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 152);
  if ( v2 && (*(_BYTE *)(*(_QWORD *)(a1 + 8) + 4LL) & 1) == 0 )
  {
    v5 = *(unsigned int *)(a1 + 160);
    *(_QWORD *)(a1 + 152) = 0LL;
    v6 = 0LL;
    *(_OWORD *)pv = 0LL;
    v8 = 0LL;
    if ( (unsigned int)((__int64 (__fastcall *)(__int64, __int64, __int64, __int128 *))TestQueryData)(v2, 4LL, v5, &v6) )
    {
      tip::details::test_common_data<1>::update_from_test_info(a1, &v6);
      tip::details::test_common_data<1>::evaluate_and_report(a1, v8);
    }
    CoTaskMemFree(pv[1]);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 16));
  if ( *(_QWORD *)(a1 + 152) )
    TestClose();
  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<std::string>>(v3, *(_QWORD *)(a1 + 96));
    std::_Deallocate<16,0>(*(_QWORD *)(a1 + 88), (*(_QWORD *)(a1 + 104) - *(_QWORD *)(a1 + 88)) & 0xFFFFFFFFFFFFFFE0uLL);
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  v4 = *(wil::StoredFailureInfo **)(a1 + 64);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<wil::StoredFailureInfo>>(v4);
    std::_Deallocate<16,0>(*(_QWORD *)(a1 + 64), 8 * ((__int64)(*(_QWORD *)(a1 + 80) - *(_QWORD *)(a1 + 64)) >> 3));
    *(_QWORD *)(a1 + 64) = 0LL;
    *(_QWORD *)(a1 + 72) = 0LL;
    *(_QWORD *)(a1 + 80) = 0LL;
  }
}
