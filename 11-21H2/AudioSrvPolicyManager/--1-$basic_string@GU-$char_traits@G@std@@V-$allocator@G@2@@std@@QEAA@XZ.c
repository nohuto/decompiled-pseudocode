/*
 * XREFs of ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18000893C
 * Callers:
 *     __lambda_1e03ffd0b3816784b19a9acf2aab20e8_::operator()_::_1_::dtor$1 @ 0x180044C7F (__lambda_1e03ffd0b3816784b19a9acf2aab20e8_--operator()_--_1_--dtor$1.c)
 *     __lambda_aa732a8a991b7eb0f1632fe44cffa677_::operator()_::_1_::dtor$2 @ 0x180044CE6 (__lambda_aa732a8a991b7eb0f1632fe44cffa677_--operator()_--_1_--dtor$2.c)
 *     _CDuckingManager::OnRenderCommunicationsStreamStateChanged_::_1_::dtor$7 @ 0x180044F20 (_CDuckingManager--OnRenderCommunicationsStreamStateChanged_--_1_--dtor$7.c)
 *     _CProcess::GetActiveStreamCountStatsForEndpoint_::_1_::dtor$2 @ 0x1800452D3 (_CProcess--GetActiveStreamCountStatsForEndpoint_--_1_--dtor$2.c)
 *     _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$1 @ 0x18004551F (_CApplication--RegisterProcessWithApplicationSpecificEndpointInfo_--_1_--dtor$1.c)
 *     _CStreamClassPolicyGainsWrapper::GetStreamClassPolicyGainsForEndpoint_::_1_::dtor$3 @ 0x180045D28 (_CStreamClassPolicyGainsWrapper--GetStreamClassPolicyGainsForEndpoint_--_1_--dtor$3.c)
 *     _CEndpointVolumeStateManager::AddEndpointVolumeReference_::_1_::dtor$5 @ 0x1800465EE (_CEndpointVolumeStateManager--AddEndpointVolumeReference_--_1_--dtor$5.c)
 *     _ApplicationSpecificEndpointInfo::LoadApplicationDefaultEndpoints_::_1_::dtor$2 @ 0x1800467F2 (_ApplicationSpecificEndpointInfo--LoadApplicationDefaultEndpoints_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::wstring::~wstring(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 >= 8 )
    std::_Deallocate<16,0>(*(char **)a1, 2 * v1 + 2);
  result = 0LL;
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  return result;
}
