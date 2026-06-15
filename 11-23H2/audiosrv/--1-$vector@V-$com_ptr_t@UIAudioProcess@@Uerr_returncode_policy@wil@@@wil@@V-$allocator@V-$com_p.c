/*
 * XREFs of ??1?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x1800D8768
 * Callers:
 *     _CAudioSession::PruneTerminatedOwningProcesses_::_1_::dtor$0 @ 0x18007A0F2 (_CAudioSession--PruneTerminatedOwningProcesses_--_1_--dtor$0.c)
 *     _CEndpointCharacteristicsCache::PopulateEndpointCharacteristicsCache_::_1_::dtor$0 @ 0x18007D9BA (_CEndpointCharacteristicsCache--PopulateEndpointCharacteristicsCache_--_1_--dtor$0.c)
 *     ?RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUISaDeviceResourceManager@@PEAUSaDeviceParams@@KW4_AUDCLNT_SHAREMODE@@AEAUSaDeviceResourceParams@@PEAVCAudioSessionManager@@PEAPEAUISaDeviceProxy@@@Z @ 0x1800DCAB8 (-RetryGetSaDeviceForPackagedApp@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescripto.c)
 *     _CAudioResourceManager::RetryGetSaDeviceForPackagedApp_::_1_::dtor$1 @ 0x1800DCD13 (_CAudioResourceManager--RetryGetSaDeviceForPackagedApp_--_1_--dtor$1.c)
 *     _CAudioSession::ForEachOwningProcess_::_1_::dtor$0 @ 0x1800DF986 (_CAudioSession--ForEachOwningProcess_--_1_--dtor$0.c)
 *     _CAudioSessionManager::RevokeSessionsWithoutDataFlowAccess_::_1_::dtor$2 @ 0x1800E8BE1 (_CAudioSessionManager--RevokeSessionsWithoutDataFlowAccess_--_1_--dtor$2.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180016D94 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wi.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::~vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
        __int64 a1)
{
  __int64 *v2; // rcx

  v2 = *(__int64 **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>>>(
      v2,
      *(__int64 **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
