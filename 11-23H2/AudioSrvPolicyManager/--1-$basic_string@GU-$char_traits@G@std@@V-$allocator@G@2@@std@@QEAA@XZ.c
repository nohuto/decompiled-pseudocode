/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18000BBC0
 * Callers:
 *     ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x180009CE0 (-GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000AD90 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 *     ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x180013170 (-GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18001360C (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18001B890 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$al.c)
 *     ??1CDuckingNotification@@QEAA@XZ @ 0x18001BEF4 (--1CDuckingNotification@@QEAA@XZ.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180020148 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_trai.c)
 *     _lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator() @ 0x1800204C0 (_lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator().c)
 *     _lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator() @ 0x180020AAC (_lambda_aa732a8a991b7eb0f1632fe44cffa677_--operator().c)
 *     ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x1800221B8 (-OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioS.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@UIApplicationSpecificEndpointInfo@@Uerr_returncode_policy@wil@@@wil@@@std@@QEAA@XZ @ 0x180024DA8 (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$com_ptr_t@UIAppli.c)
 *     ?RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z @ 0x180028974 (-RegisterProcessWithApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@@Z.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@QEAA@XZ @ 0x18003208C (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@VCStre.c)
 *     ??1CAastPreStartContext@@UEAA@XZ @ 0x180032A2C (--1CAastPreStartContext@@UEAA@XZ.c)
 *     ??1DuckingDescriptorAndId@@QEAA@XZ @ 0x180034068 (--1DuckingDescriptorAndId@@QEAA@XZ.c)
 *     ??1?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@QEAA@XZ @ 0x18003F930 (--1-$pair@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$unique_ptr@VCEndpoint.c)
 *     ?AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18003FAD0 (-AddEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18003FEC0 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 *     ?LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ @ 0x180041E00 (-LoadApplicationDefaultEndpoints@ApplicationSpecificEndpointInfo@@AEAAJXZ.c)
 *     _CProcess::UpdateStreamCountAndProcessCategory_::_1_::dtor$2 @ 0x180047E70 (_CProcess--UpdateStreamCountAndProcessCategory_--_1_--dtor$2.c)
 *     _CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor$2 @ 0x1800482D0 (_CProcess--GetActiveStreamCountStatsForEndpoint_--_1_--dtor$2.c)
 *     _CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$3 @ 0x1800482F4 (_CStreamClassPolicyGainsWrapper--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$3.c)
 *     __lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator()_::_1_::dtor$1 @ 0x180048AC5 (__lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator()_--_1_--dtor$1.c)
 *     _CDuckingManager::OnRenderCommunicationsStreamStateChanged_::_1_::dtor$7 @ 0x180048D51 (_CDuckingManager--OnRenderCommunicationsStreamStateChanged_--_1_--dtor$7.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$1 @ 0x180049277 (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$1.c)
 *     _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::dtor$5 @ 0x180049D99 (_CEndpointVolumeStateManager--AddEndpointVolumeReference_--_1_--dtor$5.c)
 *     _ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints_::_1_::dtor$2 @ 0x180049F79 (_ApplicationSpecificEndpointInfo--LoadApplicationDefaultEndpoints_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000F4D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::wstring::~wstring(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = a1[3];
  if ( v1 >= 8 )
    std::_Deallocate<16,0>(*a1, 2 * v1 + 2);
  result = 0LL;
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
